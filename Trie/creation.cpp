#include <bits/stdc++.h>
using namespace std;
#define pi 3.14
#define fli(a, b) for (int i = a; i < b; i++)
#define flj(a, b) for (int j = a; j < b; j++)
#define flk(a, b) for (int k = a; k < b; k++)
#define ma(a, b) ((a) > (b) ? (a) : (b));
#define mi(a, b) ((a) < (b) ? (a) : (b));
#define pb push_back
#define pob pop_back
#define sz size()
#define p2s(a, b) std::cout << a << ' ' << b << std::endl;
#define pn(a) std::cout << a << std::endl;
#define nl std::cout << std::endl;
#define p(a) std::cout << a;
#define ps(a) std::cout << a << ' ';
#define cig(arr, n) cin.getline(arr, n)
#define sza(a) sizeof(a) / sizeof(int)
#define vec vector<char>
#define v2e vector<vector<int>>
#define v2ec vector<vector<char>>
#define vei vector<int>
#define pu(n) push_back(n);

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char d)
    {
        this->data = d;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        this->isTerminal = false;
    }
};

void insert(TrieNode *root, string word)
{

    // cout<<"inserting "<<word<<endl;
    if (word.length() == 0)
    {
        root->isTerminal = true;
        return;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode *child;

    if (root->children[index] != NULL)
    {
        child = root->children[index];
    }
    else
    {
        child = new TrieNode(ch);
        root->children[index] = child;
    }

    insert(child, word.substr(1));
}

bool search(TrieNode *root, string word)
{
    if (word.length() == 0)
    {
        return root->isTerminal;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode *child;

    if (root->children[index] != NULL)
    {
        child = root->children[index];
    }
    else
    {
        return false;
    }

    return search(child, word.substr(1));
    // if current character doesn't exist in trie then it's not present
}

// void deletion(TrieNode *&root, string word)
// {

//     if (word.length() == 0)
//     {
//         root->isTerminal = false;
//         return;
//     }

//     char ch = word[0];
//     int index = ch - 'a';
//     TrieNode *child;
//     child = root->children[index];

//     deletion(child, word.substr(1));
   
// }

int main()
{
    TrieNode *root = new TrieNode('-');
    insert(root, "vipin");
    insert(root, "vipi");
    insert(root, "kumawat");
    insert(root, "code");
    insert(root, "coder");

    // if (search(root, "kumawa"))
    //     cout << "present" << endl;
    // else
    //     cout << "not present" << endl;

    // if (!search(root, "vipin"))
    // {
    //     cout << "not present so can't delete  " << endl;
    // }
    // else
    // {
    //     deletion(root, "vipin");
    //     cout << "deleted " << endl;
    // }

    if (search(root, "vipin"))
        cout << "present" << endl;
    else
        cout << "not present" << endl;

    return 0;
}