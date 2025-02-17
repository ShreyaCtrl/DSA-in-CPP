#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s){
   int left = 0, right = arr.size()-1;
   sort(arr.begin(), arr.end());
   vector <vector<int>> ans;
   while (left<=right) {
      vector <int> tuple;
      if (arr[left]+arr[right] == s) {
         tuple.push_back(arr[left]);
         tuple.push_back(arr[right]);
         ans.push_back(tuple);
         if (arr[left] != arr[left+1])
            right--;
         if (arr[right] != arr[right+1])
            left++;
      } else if (arr[left]+arr[right] < s) {
         left++;
      } else {
         right--;
      }
   }
   return ans;
}
int main() {
    vector<int> arr;
    int n, s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    vector<vector<int>> res = pairSum(arr, s);
    cout << "[";
    for (int i = 0; i < res.size(); i++) {
        cout << "[" << res[i][0] << "," << res[i][1] << "]";
        if (i != res.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]";
}