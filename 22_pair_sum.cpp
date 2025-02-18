#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // int left = 0, right = arr.size()-1;
   // sort(arr.begin(), arr.end());
   // vector <vector<int>> ans;
   // while (left<=right) {
   //    vector <int> tuple;
   //    if (arr[left]+arr[right] == s) {
   //       tuple.push_back(arr[left]);
   //       tuple.push_back(arr[right]);
   //       ans.push_back(tuple);
   //       if (arr[left] != arr[left+1])
   //          right--;
   //       if (arr[right] != arr[right+1])
   //          left++;
   //    } else if (arr[left]+arr[right] < s) {
   //       left++;
   //    } else {
   //       right--;
   //    }
   // }
   // return ans;
   vector <vector<int>> ans;
   for (int i = 0; i < arr.size(); i++) {
      for (int j = i+1; j < arr.size(); j++) {
         if (arr[i]+arr[j] == s) {
            vector<int> tuple;
            tuple.push_back(min(arr[i], arr[j]));
            tuple.push_back(max(arr[i], arr[j]));
            ans.push_back(tuple);
         }
      }
   }
   sort(ans.begin(), ans.end());
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