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
    int front;
    int rear;
    int size;
    int *arr;

    Queue(int size)
    {
        this->size = size;
        rear = 0;
        front = 0;
        arr = new int[size];
    }

    void push(int data)
    {

        if (rear == size)
        {
            cout << "Queue Full " << endl;
        }

        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    void pop()
    {
        if (rear == front)
        {
            cout << "Queue Empty " << endl;
        }

        else
        {
            front++;

            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }

    int getFront()
    {
        if (front == rear)
        {
            cout << "Queue Empty" << endl;
            return -1;
        }

        else
            return arr[front];
    }

    bool isEmpty()
    {

        return front == rear;
    }

    int getSize()
    {
        return rear - front;
    }
};
int main()
{

    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout << "Size: " << q.getSize() << endl;
    cout << "top elmet " << q.getFront() << endl;

    q.pop();
    cout << "Size: " << q.getSize() << endl;
    cout << "top elmet " << q.getFront() << endl;
    return 0;
}