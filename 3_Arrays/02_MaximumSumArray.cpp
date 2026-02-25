#include <bits/stdc++.h>
using namespace std;

pair<int, int> maxSumSubarray(vector<int> &nums){
    int n = nums.size();
    int start = 0, end = -1;
    pair<int, pair<int,int>> maxi; // To map sum and array index
    maxi.first = INT_MIN;
    maxi.second.first = start;
    maxi.second.second = end;
    int curr = 0;
    for(int i = 0; i<n; i++){
        curr += nums[i];
        end++;
        if(curr > maxi.first){
            maxi.first = curr;
            maxi.second.first = start;
            maxi.second.second = end;
        }
        if(curr < 0){
            curr = 0;
            start = i+1;
            end = i;
        }
    }
    return maxi.second;
}

int main() {
    vector<int> nums = {-2, 3, 5, -2, 7, -4};
    pair<int,int> ans = maxSumSubarray(nums);
    cout << "Maximum Sum Sub Array\n";
    for (int i = ans.first; i <= ans.second; i++){
        cout << nums[i] << " ";
    } 
    cout << endl;
    return 0;
}