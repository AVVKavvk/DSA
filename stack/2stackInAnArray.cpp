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
    int top1;
    int top2;
    int size;
    int *arr;

    Stack(int size)
    {

        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    void push1(int data)
    {
        if (top2 - top1 == 1)
        {
            cout << "\nstack Overflow in stack 1" << endl;
        }
        else
        {
            top1++;
            arr[top1] = data;
        }
    }
    void push2(int data)
    {
        if (top2 - top1 == 1)
        {
            cout << "\nstack overflow in stack 2" << endl;
        }
        else
        {
            top2--;
            arr[top2] = data;
        }
    }

    void pop1()
    {
        if (top1 == -1)
        {
            cout << "\nStack Underflow in stack 1" << endl;
        }
        else
        { arr[top1]=-1;
            top1--;
        }
    }

    void pop2()
    {
        if (top2 == size)
        {
            cout << "\nStack under flow in stack 2" << endl;
        }
        else
        {
            arr[top2]=-1;
            top2++;
        }
    }

    void print()
    {
        nl;
        cout << "top1: " << top1 << endl;
        cout << "top2: " << top2 << endl;

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        nl;
    }
};

int main()
{

    Stack s(10);

    s.push1(10);
    s.print();
    s.push1(20);
    s.print();
    s.push1(30);
    s.print();
    s.push1(40);
    s.print();
    // s.push2(100);
    s.push1(50);
    // s.push1(50);
    s.print();

    s.push2(100);
    s.print();
    s.push2(200);
    s.print();
    s.push2(300);
    s.print();
    s.push2(400);
    s.print();
    s.push2(500);
    s.print();
    s.push2(500);
    s.print();
    // s.push1(10);

    s.pop1();
    s.pop1();
    s.pop1();
    s.pop2();
    s.pop2();
    s.print();

    return 0;
}