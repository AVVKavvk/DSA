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

void merge(int *arr, int s, int e)
{

    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

   int* left=new int[len1];
   int* right=new int[len2];

   int k=s;
   for(int i=0;i<len1;i++){
    left[i]=arr[k++];
   }
   k=mid+1;
   for(int i=0;i<len2;i++){
    right[i]=arr[k++];
   }

   int leftIndex=0;
   int rightIndex=0;
   int mainArrayIndex=s;

   while(leftIndex<len1&&rightIndex<len2){
    if(left[leftIndex]<right[rightIndex]){
        arr[mainArrayIndex++]=left[leftIndex++];
    }

    else{
        arr[mainArrayIndex++]=right[rightIndex++];
    }
   }

   while(leftIndex<len1){
    arr[mainArrayIndex++]=left[leftIndex++];
   }
   while(rightIndex<len2){
    arr[mainArrayIndex++]=right[rightIndex++];
   }


}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;

    // left part
    mergeSort(arr, s, mid);

    // right part
    mergeSort(arr, mid + 1, e);
    /* Merge the two parts */
    merge(arr, s, e);
}

int main()
{
    int arr[] = {1, 2, 4, 8, 5, 6, 2, -2, 9};
    int n = sza(arr);

    mergeSort(arr, 0, n - 1);
    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}