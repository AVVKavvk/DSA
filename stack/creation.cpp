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

class Stack
{

public:
    int top;
    int size;
    int *arr;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        this->top = -1;
    }

    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }

        else
        {
            cout << " Stack Overflow " << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow " << endl;
        }
        else
        {
            top--;
        }
    }

    int getTop()
    {
        if (top == -1)
        {
            cout << "Stack empty " << endl;
        }

        else
        {
            return arr[top];
        }
    }

    int getSize()
    {
        if (top == -1)
        {
            cout << "Stack Empty" << endl;
        }

        else
            return top + 1;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }

        else
            return false;
    }
};
void print(Stack *s)
{
    while (!s->isEmpty())
    {
        cout << s->getTop() << " ";
        s->pop();
    }

    nl;
}
int main()
{

    Stack *s = new Stack(6);

    s->push(10);
    s->push(20);
    s->push(30);
    s->push(40);
    s->push(50);
    s->push(60);
    // s->push(60);
    print(s);

    return 0;
}