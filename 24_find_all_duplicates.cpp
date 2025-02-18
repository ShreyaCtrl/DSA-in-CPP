#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> findDuplicates(vector<int>& nums) {
        vector<int> graph(nums.size()+1, 0);
        // graph = {0};
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {
            if (graph[nums[i]] == nums[i]) 
                ans.push_back(nums[i]);
            graph[nums[i]] = nums[i];
        }
        return ans;
    }
int main() {
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    vector<int> res = findDuplicates(arr);
    cout << "[";
    for (int i = 0; i < res.size(); i++) {
        cout << res[i];
        if (i != res.size()-1) {
            cout << ", ";
        }
    }
    cout << "]";
}