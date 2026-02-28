#include <bits\stdc++.h>
using namespace std;
int merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int i = low, j = mid + 1;
    int cnt = 0;
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            cnt += mid - i + 1;
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
        temp.push_back(arr[i++]);
    while (j <= high)
        temp.push_back(arr[j++]);

    for (int i = low; i <= high; i++)
        arr[i] = temp[i - low];

    return cnt;
}

int mergeSort(vector<int> &arr, int low, int high)
{
    // Base Condition
    if (low >= high)
        return 0;

    int cnt = 0;
    int mid = (low + high) / 2;

    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid + 1, high);

    cnt += merge(arr, low, mid, high);

    return cnt;
}

int inversionCount(vector<int> &arr)
{
    int n = arr.size();
    int cnt = mergeSort(arr, 0, n - 1); // arr, low, high
    return cnt;
}
int main()
{
    vector<int> arr = {2,4,1,3,5}; // 2,1  4,1  4,3 --> 3 Inversions
    cout << "No. of Inversions: " << inversionCount(arr);
    return 0;
}
