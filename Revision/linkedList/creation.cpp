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
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        delete next;
        cout << "deleting node with data " << this->data << endl;
    }
};

void printing(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
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

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        head = new Node(data);
        tail = head;
        return;
    }
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        head = new Node(data);
        tail = head;
        return;
    }
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insetAtMiddle(Node *&head, Node *&tail, int data, int index)
{

    if (head == NULL)
    {
        head = new Node(data);
        tail = head;
        return;
    }

    if (index == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }
    Node *temp = head;
    while (index > 1)
    {
        temp = temp->next;
        index--;
    }
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
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

void deleteTail(Node *&head, Node *&tail)
{
    if (head == NULL)
        return;
    int len = length(head);
    Node *temp = head;
    while (len > 2)
    {
        temp = temp->next;
        len--;
    }
    Node *del = temp->next;
    temp->next = NULL;
    tail = temp;
    del->next = NULL;
    delete del;
}

void deleteMiddle(Node *&head, Node *&tail, int index)
{
    if (head == NULL)
        return;
    if (index == 0)
    {
        deleteHead(head);
        // cout<<" vipin"<<endl;
        return;
    }

    int len = length(head);
    if (index == len - 1)
    {
        deleteTail(head, tail);
        return;
    }
    if (index >= len)
    {
        cout << " out of bound " << endl;
        return;
    }
    Node *temp = head;
    while (index > 1)
    {
        temp = temp->next;
        index--;
    }
    Node *del = temp->next;
    if (temp->next->next == NULL)
    {
        tail = temp;
    }
    temp->next = del->next;
    del->next = NULL;
    delete del;
}

int main()
{
    Node *head = NULL;
    Node *tail = head;

    // insertAtHead(head, tail, 10);
    // insertAtHead(head, tail, 20);
    // insertAtHead(head, tail, 30);

    printing(head);

    cout << endl;

    insertAtTail(head, tail, 1);
    // insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 4);
    insetAtMiddle(head, tail, 5, 1);
    insetAtMiddle(head, tail, 6, 2);
    printing(head);
    cout << endl;
    cout << "length: " << length(head);
    cout << endl;
    // deleteHead(head);
    // deleteTail(head, tail);
    deleteMiddle(head, tail, 0);
    cout << endl;
    printing(head);

    return 0;
}