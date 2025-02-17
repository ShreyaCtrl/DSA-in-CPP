#include<iostream>
#include<vector>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2, int n1, int n2) {
    vector<int> ans;
    int i = 0, j = 0;
    while(i < n1 && j < n2) {
        if (nums1[i] == nums2[j]) {
            ans.push_back(nums1[i]);
            i++;
            j++;
        } else if (nums1[i] < nums2[j]) {
            i++;
        } else {
            j++;
        }
    }
    return ans;
} 
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> nums1(n), nums2(m);
    for (int i = 0; i < n; i++) {
        cin >> nums1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> nums2[i];
    }
    vector<int> res = intersection(nums1, nums2, n, m);
    cout << "Intersection of the two arrays is : " << endl;
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
}