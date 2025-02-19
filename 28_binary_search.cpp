#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> &arr, int target, int n) {
    int left = 0, right = n - 1;
    while(left <= right) {
        // The below formula is only valid when left and right are too large 
        // As their sum can exceed the range of int
        // Hence one should avoid using this formula
        // int mid = (left + right) / 2;
        // A better formula is:
        int mid = left + (right - left) / 2;
        // This formula is valid for all cases as it avoids overflow
        // subtracting large from large does not cause overflow
        if (arr[mid]== target){
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
int main() {
    vector<int> arrEven = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> arrOdd = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int n, target;
    // cin >> n >> target;
    // for(int i = 0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     arr.push_back(x);
    // }
    // cout << binarySearch(arr, target, n);
    cout << binarySearch(arrEven, 6, 9) << endl;
    cout << binarySearch(arrOdd, 7, 10) << endl;
}