#include<bits\stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {5, 1, 7, 4, 2, 8, 3, 6};
    int n = arr.size();
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key; // Orignal Position
    }
    cout << "Sorted array: ";
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}
