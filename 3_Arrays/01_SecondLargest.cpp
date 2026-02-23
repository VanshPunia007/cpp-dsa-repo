#include <bits/stdc++.h>
using namespace std;

int secondLargestElement(vector<int> &nums)
{
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for(int i : nums){
        if(minHeap.size() < 2) // keep size fixed 
            minHeap.push(i);
        else{
            if(minHeap.top() < i){
                minHeap.pop();
                minHeap.push(i);
            }
        }
    }
    return minHeap.top();
}

int secondLargest(int arr[], int n) {
    // Edge case: if the array has fewer than 2 elements
    if (n < 2)
        return -1;

    int large = INT_MIN, second_large = INT_MIN;

    // Loop through the array to find the second largest element
    for (int i = 0; i < n; i++) {
        // Update the largest and second largest values
        if (arr[i] > large) {
            second_large = large;
            large = arr[i];
        } 
        else if (arr[i] > second_large && arr[i] != large) {
            second_large = arr[i];
        }
    }
    return second_large; // Return the second largest element
}

int main()
{
    vector<int> nums = {5,4,2,6,7};
    cout<<"Largest Element: " << secondLargestElement(nums) << endl;
    return 0;
}