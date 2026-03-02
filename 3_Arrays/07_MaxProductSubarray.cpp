// https://leetcode.com/problems/maximum-product-subarray/

#include <bits\stdc++.h>
using namespace std;
int maxProduct(vector<int> &nums)
{
    int maxi = INT_MIN;
    int n = nums.size();
    int prefix = 1, suffix = 1;
    for (int i = 0; i < n; i++)
    {
        if (prefix == 0)
            prefix = 1;
        if (suffix == 0)
            suffix = 1;

        prefix *= nums[i];
        suffix *= nums[n - i - 1];
        // cout << prefix << " " << suffix << endl;
        maxi = max(maxi, max(prefix, suffix));
    }
    return maxi;
}
int main()
{
    vector<int> nums = {2, -2, 4, 5, 3, 0, 10, -1, 4};
    cout << "Maximum Product: " << maxProduct(nums);
    return 0;
}
