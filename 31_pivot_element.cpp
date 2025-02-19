#include<iostream>
#include<vector>
using namespace std;
int pivotIndex(vector<int>& nums) {
    vector<int> leftSum(10000); 
    int n = nums.size();
    leftSum[0] = 0;
    for(int i = 1; i < n; i++) {
        leftSum[i] = leftSum[i-1]+nums[i-1]; 
    }
    int total = leftSum[n-1]+nums[n-1];
    for(int i = 0; i < n; i++) {
        int rightSum = total-leftSum[i]-nums[i];
        if (leftSum[i] == rightSum) return i;
    }
    return -1;
}
int main() {
    vector<int> arr = {1, 7, 3, 6, 5, 6};
    cout << pivotIndex(arr);
}