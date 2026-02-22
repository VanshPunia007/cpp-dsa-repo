#include<bits\stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {5, 1, 7, 4, 2, 8, 3, 6};
    int n = arr.size();
    for(int i = 0;i < n-1; i++){
        int minIdx = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
    cout << "Sorted array: ";
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}
