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

class Heap
{
public:
    int *arr;
    int size;
    int i;
    Heap(int _size) : size(_size)
    {
        i = 0;
        arr = new int[size];
    }

    void insert(int data)
    {
        if (i == size - 1)
        {
            cout << "Oberflow " << endl;
            return;
        }
        i++;
        arr[i] = data;

        int index = i;

        while (index > 1)
        {
            int parentIndex = index / 2;
            if (arr[index] > arr[parentIndex])
            {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else
            {
                break;
            }
        }
    }

    void heapify(int *arr, int n, int i)
    {
        int index = i;
        int left = 2 * i;
        int right = 2 * i + 1;
        int largest = index;

        if (left < n && arr[largest] < arr[left])
            largest = left;
        if (right < n && arr[largest] < arr[right])
            largest = right;

        if (largest != index)
        {
            swap(arr[largest], arr[index]);
            index = largest;
            heapify(arr, n, index);
        }
    }
};

int main()
{
    Heap *h = new Heap(10);
    h->arr[0] = -1;
    h->insert(100);
    h->insert(40);
    h->insert(30);
    h->insert(70);
    h->insert(50);
    h->insert(10);
    h->insert(110);

    // int size = h->i;
    // h->i=5;

    for (int i = 0; i <= h->i; i++)
    {
        cout << h->arr[i] << ' ';
    }
    nl;

    h->heapify(h->arr, h->i, 4);

    for (int i = 0; i <= h->i; i++)
    {
        cout << h->arr[i] << ' ';
    }
    nl;

    return 0;
}