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
        cout << "deleting " << endl;
        delete next;
    }
};

void printLL(Node *&head)
{

    Node *first = head;

    while (first != NULL)
    {
        cout << first->data << " ";
        first = first->next;
    }
}

int findLength(Node *&head)
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

    Node *newNode = new Node(data);
    newNode->next = head;
    if (head == NULL)
    {
        tail = newNode;
    }
    // tail=
    head = newNode;
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

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    if (position == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }
    int length = findLength(head);
    // cout << length << endl;
    if (length <= position)
    {
        insertAtTail(head, tail, data);
        return;
    }
    // if (length < position)
    // {
    //     cout << "Out Of bound " << endl;
    //     return;
    // }

    Node *newNode = new Node(data);
    Node *temp = head;
    while (position > 1)
    {
        temp = temp->next;
        position--;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

int main()
{

    // Node *first = new Node(1);
    // Node *second = new Node(2);
    // Node *third = new Node(3);
    // Node *fourth = new Node(4);
    // Node *fifth = new Node(5);

    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;

    Node *head = NULL;
    // Node *head = new Node(10);
    Node *tail = head;

    insertAtHead(head, tail, 10);
    // insertAtHead(head, tail, 20);
    // insertAtHead(head, tail, 30);
    // insertAtHead(head, tail, 40);

    // insertAtTail(head, tail, 20);
    // insertAtTail(head, tail, 30);
    // insertAtTail(head, tail, 40);
    // insertAtTail(head, tail, 50);
    printLL(head);
    // nl;
    // // insertAtPosition(head, tail, 60, 5);
    // // insertAtPosition(head, tail, 60, 0);
    // insertAtPosition(head, tail, 60, 5);
    // printLL(head);
    // nl;
    //    cout<<head->data<<endl;
    //    cout << tail->data<<endl;
    // swap(head->data,tail->data);

    // cout<<head->data<<endl;
    //    cout << tail->data<<endl;

    return 0;
}