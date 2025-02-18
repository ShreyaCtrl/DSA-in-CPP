#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &nums, int start, int mid, int end) {
    int n1 = mid - start + 1;
    int n2 = end - mid;
    vector<int> left(n1);
    vector<int> right(n2);
    for (int i = 0; i < n1; i++) {
        left[i] = nums[start + i];
    }

    for (int j = 0; j < n2; j++) {
        right[j] = nums[mid + j + 1];
    }
    int i = 0, j = 0, k = start;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            nums[k++] = left[i++];
        }
        else {
            nums[k++] = right[j++];
        }
    }

    while (i < n1) {
        nums[k++] = left[i++];
    }
    while (j < n2) {
        nums[k++] = right[j++];
    }
}
void mergeSort(vector<int> &nums, int start, int end) {
    if (start >= end) {
        return;
    }
    int mid = start + (end - start) / 2;
    mergeSort(nums, start, mid);
    mergeSort(nums, mid + 1, end);
    merge(nums, start, mid, end);
}

void sortColors(vector<int> &nums) {
    // https://leetcode.com/problems/sort-colors/description/
    mergeSort(nums, 0, size(nums) - 1);
}
int main() {
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sortColors(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}