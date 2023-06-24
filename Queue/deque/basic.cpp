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

class Deque
{
public:
    int front;
    int rear;
    int size;
    int *arr;

    Deque(int size)
    {
        this->size = size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    void pushRear(int data)
    {
        if ((front == 0 && rear == size - 1) || (rear == front - 1))
        {
            cout << "Queue full " << endl;
            return;
        }

        if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }

        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = 0;
        }

        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pushFront(int data)
    {
        if ((front == 0 && rear == size - 1) || (rear == front - 1))
        {
            cout << "Queue full " << endl;
            return;
        }

        if(front==-1){
            front=rear=0;
            arr[front]=data;
        }

        else if(front==0){
            front=size-1;
            arr[front]=data;
        }

        else{
            front--;
            arr[front]=data;
        }
    }

    void popFront(){

        if(front==-1){
            cout<<"Queue empty "<<endl;return;
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

    void popRear(){
        if(front==-1){
            cout<<"Queue Empty"<<endl;return;
        }
        
        if(front==rear){
            front=rear=-1;
        }

        else if(rear==0){
            rear=size-1;
        }

        else{
            rear--;
        }
    }

};
int main()
{

    return 0;
}