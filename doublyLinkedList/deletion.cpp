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
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node()
    {

        cout << "deleted " << endl;
        delete next;
        delete prev;
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
int getLength(Node *&head)
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
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void deleteHead(Node *&head, Node *&tail)
{

    if (head == NULL)
    {
        delete head;
        delete tail;
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        delete tail;
    }
    Node *temp = head;
    head->next->prev = NULL;
    head = head->next;

    temp->next = NULL;

    delete temp;
    return;
}

void deletePosition(Node *&head, Node *&tail, int position)
{
    if (position == 0)
    {
        deleteHead(head, tail);
        return;
    }
    int len = getLength(head);
    if (position + 1 > len)
    {
        cout << "Out of Bound " << endl;
    }
    Node *temp = head;

    while (position > 0)
    {
        temp = temp->next;
        position--;
    }
    if (temp->next == NULL)
    {

        tail = temp->prev;
        tail->next = NULL;
        temp->prev = NULL;

        delete temp;
        return;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    temp->next = NULL;
    temp->prev = NULL;
    delete temp;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 60);
    nl;
    print(head);
    nl;
    // deleteHead(head, tail);
    // deleteHead(head, tail);
    // deleteHead(head, tail);
    // deleteHead(head, tail);

    deletePosition(head, tail, 1);
    print(head);
    nl;
    cout << getLength(head);
    nl;
    cout << "Head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    return 0;
}