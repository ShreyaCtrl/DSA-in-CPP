#include<iostream>
#include<vector>
using namespace std;
int findPivot(vector<int> &arr) {
    int start = 0, end = arr.size() - 1;
    while(start < end) {
        int mid = start + (end - start) / 2;
        if(arr[mid]>=arr[0]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start;
}
int main() {
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    cout << findPivot(arr);
}