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
    Node *prev;
    Node *next;
    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node *&head)

{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << ' ';
        temp = temp->next;
    }
}

int getLength(Node *head)
{
    Node *temp = head;
    int len = 0;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        // cout << "in " << tail->data << endl;
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        insertAtHead(head, tail, data);
        return;
    }

    Node *newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    // tail->next=NULL;
}

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    int len = getLength(head);
    if (len == 0 || position == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }

    if (position >= len)
    {
        insertAtTail(head, tail, data);

        return;
    }

    Node *temp = head;
    Node *newNode = new Node(data);
    while (position != 1)
    {
        temp = temp->next;
        position--;
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;
    newNode->prev = temp;
    temp->next = newNode;
}

int main()
{

    // Node *head = new Node(10);
    // Node *second = new Node(20);
    // Node *third = new Node(30);

    // head->next = second;
    // second->prev = head;

    // second->next = third;
    // third->prev = second;
    Node *head = NULL;
    Node *tail = head;

    // insertAtHead(head, tail, 40);
    // insertAtHead(head, tail, 30);
    // insertAtHead(head, tail, 20);
    // insertAtTail(head, tail, 50);
    // insertAtTail(head, tail, 60);
    // insertAtTail(head, tail, 70);
    print(head);
    nl;

    insertAtPosition(head, tail, 40, 0);
    insertAtPosition(head, tail, 50, 0);
    print(head);
    nl;
    cout << getLength(head);
    nl;
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    return 0;
}