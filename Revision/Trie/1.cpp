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

class Trie
{
public:
    char data;
    Trie *children[26];
    int childCount = 0;
    bool isTreminal;

    Trie(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        childCount = 0;
        isTreminal = false;
    }
};
void insert(Trie *root, string word)
{
    if (word.size() == 0)
    {
        root->isTreminal = true;
        return;
    }
    char ch = word[0];
    int index = ch - 'a';
    Trie *child = root->children[index];
    if (child == NULL)
    {
        child = new Trie(ch);
        root->childCount++;
        root->children[index] = child;
    }
    else
    {
        child = root->children[index];
    }

    insert(child, word.substr(1));
}
void solve(Trie *root, string word, string &ans)
{

    for (int i = 0; i < word.size(); i++)
    {
        char ch = word[i];
        if (root->childCount == 1)
        {

            return;
        }
        cout<<root->data<<"  "<< root->childCount;
        ans += ch;
        int index = ch - 'a';
        root = root->children[index];
        if (root->isTreminal)
            break;
    }
}
int main()
{
    Trie *root = new Trie('\0');
    insert(root, "zebra");
    insert(root, "vipin");
    string temp = "";
    solve(root, "zebra", temp);

    cout << temp;
    return 0;
}