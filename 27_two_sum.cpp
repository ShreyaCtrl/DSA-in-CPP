#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<int, int>> twoSum(vector<int> &arr, int target, int n)
{
    // Write your code here.
    int left = 0, right = n - 1;
    sort(arr.begin(), arr.end());
    vector<pair<int, int>> ans;
    while (left < right)
    {
        if (arr[left] + arr[right] == target)
        {
            pair<int, int> tuple(arr[left], arr[right]);
            ans.push_back(tuple);
            // while(left< right && arr[left] == arr[left+1]) left++;
            // while(left< right && arr[right] == arr[right-1]) right--;
            left++;
            right--;
        }
        else if (arr[left] + arr[right] < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    if (ans.size() != 0)
        return ans;
    else
    {
        pair<int, int> tuple(-1, -1);
        ans.push_back(tuple);
        return ans;
    }
}
int main() {
    // https://www.naukri.com/code360/problems/two-sum_839653?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=SUBMISSION
    vector<int> arr;
    int n, target;
    cin >> n >> target;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    vector<pair<int, int>> res = twoSum(arr, target, n);
    cout << "[";
    for (int i = 0; i < res.size(); i++)
    {
        cout << "(" << res[i].first << ", " << res[i].second << ") ";
        }
    cout << "]";

}