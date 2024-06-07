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

class ListNode
{

public:
    int data;
    ListNode *next;

    ListNode()
    {
        this->data = 0;
        this->next = NULL;
    }
    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~ListNode()
    {
        delete next;
        cout << "deleting " << endl;
    }
};

void print(ListNode *&head)
{
    ListNode *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtTail(ListNode *&head, ListNode *&tail, int data)
{

    ListNode *newNode = new ListNode(data);
    if (head == NULL)
    {

        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void deleteHead(ListNode *&head)
{
    if (head == NULL)
    {
        return;
    }
    ListNode *temp = head;

    head = head->next;
    temp->next = NULL;
    delete temp;
    // free(temp);
}

int length(ListNode *&head)
{
    int len = 0;
    ListNode *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

void deleteAtPosition(ListNode *&head, ListNode *&tail, int position)
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
    ListNode *temp = head;
    while (position != 1)
    {

        temp = temp->next;
        position = position - 1;
    }
    
    ListNode *deleteNode = temp->next;
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

    ListNode *head = NULL;
    ListNode *tail = head;
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