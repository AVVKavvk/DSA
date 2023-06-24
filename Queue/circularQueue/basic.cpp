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

class CirQueue
{

public:
    int front;
    int rear;
    int size;
    int *arr;

    CirQueue(int size)
    {
        int front = -1;
        int rear = -1;
        this->size = size;
        arr = new int[size];
    }

    void push(int data)

    {

        if ((front == 0 && rear == size - 1) || (rear == front - 1))
        {

            cout << "Queue Full " << endl;
            return ;
        }

        if (front == -1)
        { // ? single element
            front = 0;
            rear = 0;
            arr[rear] = data;
        }

        else if (rear == size - 1 && front != 0)
        { // ?  circular
            rear = 0;
            arr[rear] = data;
        }

        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pop(){
        if(front==-1){
            cout<<"Queue Empty "<<endl;
            return ;
        }

        if(front==rear){
            front=-1;
            rear=-1;

        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
    }

};
int main()
{

    return 0;
}