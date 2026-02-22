#include <bits/stdc++.h>
using namespace std;
/*
    Hoare Partition based Quick Sort
    Pivot = first element
*/

int findPivot(vector<int> &arr, int low, int high)
{
    // Choose first element as pivot
    int pivot = arr[low];
    // i starts just after pivot
    // j starts at end of subarray
    int i = low + 1;
    int j = high;
    // Partitioning process
    while (i < j)
    {
        // Move i right until element greater than pivot is found
        while (i <= high && arr[i] <= pivot)
            i++;
        // Move j left until element smaller than or equal to pivot is found
        while (j >= low && arr[j] > pivot)
            j--;
        // If pointers haven't crossed, swap elements
        if (i < j)
            swap(arr[i], arr[j]);
    }
    // Place pivot in its correct sorted position
    swap(arr[low], arr[j]);
    // Return pivot's final index
    return j;
}

void QuickSort(vector<int> &arr, int low, int high)
{
    // Base condition: at least 2 elements required
    if (low < high)
    {
        // Partition the array and get pivot index
        int pivotIndex = findPivot(arr, low, high);
        // Recursively sort left part
        QuickSort(arr, low, pivotIndex - 1);
        // Recursively sort right part
        QuickSort(arr, pivotIndex + 1, high);
    }
}

int main()
{
    // Unsorted array
    vector<int> arr = {5, 2, 8, 4, 1, 0, 7, 3, 9, 6};
    // Call QuickSort on entire array
    QuickSort(arr, 0, arr.size() - 1);
    // Print sorted array
    for (int x : arr)
        cout << x << " ";
    cout << endl;
    return 0;
}