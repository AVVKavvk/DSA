

//*                hacker rank

long merge(vector<int> &arr, vector<int> &temp, int start, int end, int mid)
{
    long c = 0;
    int i = start, j = mid + 1, k = start;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }

        else
        {
            temp[k++] = arr[j++];
            c += mid - i + 1;
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= end)
    {
        temp[k++] = arr[j++];
    }

    while (start <= end)
    {
        arr[start] = temp[start];
        start++;
    }
    return c;
}

long mergeSort(vector<int> &arr, vector<int> &temp, int start, int end)
{
    if (start >= end)
    {
        return 0;
    }

    long c = 0;

    int mid = start + (end - start) / 2;
    c += mergeSort(arr, temp, start, mid);
    c += mergeSort(arr, temp, mid + 1, end);

    c += merge(arr, temp, start, end, mid);

    return c;
}

long countInversions(vector<int> arr)
{
    long count = 0;
    vector<int> temp(arr.size(), 0);
    int start = 0;
    int end = arr.size() - 1;
    count += mergeSort(arr, temp, start, end);

    return count;
}