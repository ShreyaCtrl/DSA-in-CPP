#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr) {
    int start = 0, end = arr.size() - 1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]) {
            return arr[mid];
        } else if(arr[mid]<arr[mid+1] && arr[mid]>arr[mid-1]) {
            start = mid;
        } else if (arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]) {
            end = mid;
        }
    } 
    return -1;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    cout << peakIndexInMountainArray(arr);
}