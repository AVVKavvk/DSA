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
        arr = new int[size];
        this->size = size;
        top = -1;
    }
    void push(int data)
    {
        if (size - top < 1)
        {
            cout << "stack Overflow";
            return;
        }
        top++;
        arr[top] = data;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack Underflow";
            return;
        }
        top--;
    }
    int getTop()
    {
        if (top == -1)
        {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }
    int getSize()
    {
        return top + 1;
    }
    bool empty()
    {
        if (top == -1)
            return true;
        return false;
    }
};

int main()
{
    Stack s(7);
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    s.pop();
    cout << s.getTop();
    cout << endl;
    s.pop();
    cout << s.getSize();
    cout << endl;
    cout << s.empty();
    cout << endl;

    return 0;
}