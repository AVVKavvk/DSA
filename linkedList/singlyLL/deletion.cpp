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

class Node
{

public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        delete next;
        cout << "deleting " << endl;
    }
};

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{

    Node *newNode = new Node(data);
    if (head == NULL)
    {

        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void deleteHead(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;

    head = head->next;
    temp->next = NULL;
    delete temp;
    // free(temp);
}

int length(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

void deleteAtPosition(Node *&head, Node *&tail, int position)
{

    if (head == NULL)
    {
        return;
    }
    if (position == 0)
    {
        deleteHead(head);
        return;
    }

    int len = length(head);
    if (position >= len)
    {
        cout << "out of bound " << endl;
        return;
    }
    Node *temp = head;
    while (position != 1)
    {

        temp = temp->next;
        position = position - 1;
    }
    Node *deleteNode = temp->next;
    if (temp->next->next == NULL)
    {
        tail = temp;
    }

    temp->next = temp->next->next;
    deleteNode->next = NULL;
    delete deleteNode;
    // free(deleteNode);
}
int main()
{

    Node *head = NULL;
    Node *tail = head;
    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);
    print(head);
    nl;
    // cout << length(head);
    // deleteHead(head);
    deleteAtPosition(head, tail, 0);
    // deleteAtPosition(head, tail, 5);
    print(head);
    nl;
    cout << "head " << head->data;
    nl;
    cout << "tail " << tail->data;

    return 0;
}