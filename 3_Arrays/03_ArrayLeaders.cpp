#include <bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int> &arr)
{
    vector<int> ans;
    int n = arr.size();
    int maxi = arr[n - 1];
    ans.push_back(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= maxi)
        {
            maxi = arr[i];
            ans.push_back(maxi);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 5, 3, 3,1, 2};
    vector<int> leader = leaders(nums);
    cout << "leaders" << endl;
    for(int i : leader)
        cout << i << " ";
    cout << endl;
    return 0;
}