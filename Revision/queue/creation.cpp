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

class Queue
{
public:
    int front, rear;
    int size;
    int *arr;

    Queue(int size)
    {
        arr = new int[size];
        ;
        this->size = size;
        front = 0;
        rear = 0;
    }

    void push(int data)
    {
        if (rear == size)
        {
            cout << "Queue is Full\n";
            return;
        }
        arr[rear] = data;
        rear++;
    }

    void pop()
    {
        if (front == rear)
        {
            cout << "Queue is empty \n";
            return;
        }
        front++;

        if (front == rear)
        {
            front = 0;
            rear = 0;
        }
    }
    int getFront()
    {
        if (front == rear)
        {
            cout << "Queue is Empty \n";
            return -1;
        }
        return arr[front];
    }
    bool isEmpty()
    {
        if (front == rear)
            return true;
        return false;
    }

    int getSize()
    {
        return rear - front;
    }
};
int main()
{

    Queue q(7);
    q.pop();
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    q.push(8);

    // cout << q.getFront();
    // q.pop();
    // cout << q.getFront();
    // nl;
    // cout << q.getSize();
    // nl;
    // cout << q.isEmpty();
    // nl;

    return 0;
}