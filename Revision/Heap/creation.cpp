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
    int arr[50];
    int size;

    Heap()
    {
        size = 0;
    }

    void insert(int data)
    {
        size++;
        int index = size;
        arr[index] = data;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[index] > arr[parent])
            {
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else
                break;
        }
    }

    int del()
    {
        int ans = arr[1];
        arr[1] = arr[size];
        size--;

        int index = 1;

        while (index < size)
        {
            int left = 2 * index;
            int right = 2 * index + 1;
            int larget = index;
            if (left < size && arr[larget] < arr[left])
            {
                larget = left;
            }
            if (right < size && arr[larget] < arr[right])
            {
                larget = right;
            }

            if (larget == index)
                return ans;
            else
            {
                swap(arr[index], arr[larget]);
                index = larget;
            }
        }
        return ans;
    }
};

int main()
{
    Heap h;
    h.insert(10);
    h.insert(40);
    h.insert(70);
    h.insert(30);
    h.insert(5);
    h.insert(60);
    // cout<<<<endl;
    for (int i = 1; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    nl;
    h.del();
    h.del();
    for (int i = 1; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }

    return 0;
}