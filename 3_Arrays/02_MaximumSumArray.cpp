#include <bits/stdc++.h>
using namespace std;

pair<int, int> maxSumSubarray(vector<int> &nums){
    int n = nums.size();
    int start = 0, end = 0;
    pair<int, pair<int,int>> maxi; // To map sum and array index
    maxi.first = nums[0];
    maxi.second.first = start;
    maxi.second.second = end;
    int curr = nums[0];
    for(int i = 1; i<n; i++){
        curr += nums[i];
        end++;
        if(curr > maxi.first){
            maxi.first = curr;
            maxi.second.first = start;
            maxi.second.second = end;
        }
        if(curr < 0){
            curr = 0;
            start = i;
            end = i;
        }
    }
    return maxi.second;
}

int main() {
    vector<int> nums = {-2, 3, -3,-7, 7, -2 ,15, -10, -4};
    pair<int,int> ans = maxSumSubarray(nums);
    cout << "Maximum Sum Sub Array\n";
    for (int i = ans.first; i <= ans.second; i++){
        cout << nums[i] << " ";
    } 
    cout << endl;
    return 0;
}