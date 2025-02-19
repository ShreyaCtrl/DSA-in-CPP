#include<iostream>
#include<vector>
using namespace std;
int firstOccurrence(vector<int> &arr, int target, int n) {
    int start = 0, end = n - 1;
    int firstIndex = -1;
    while(start<= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            firstIndex = mid;
            end = mid - 1;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else if (arr[mid] > target) {
            end = mid - 1;
        }
    }
    return firstIndex;
}
int lastOccurrence(vector<int> &arr, int target, int n)
{
    int start = 0, end = n - 1;
    int lastIndex = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            lastIndex = mid;
            start = mid + 1;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else if (arr[mid] > target) {
            end = mid - 1;
        }
    }
    return lastIndex;
}
int main() {
    // https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=SUBMISSION
    int target;
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5, 6, 6, 6, 6, 8, 9};
    cout << "Enter the target: ";
    cin >> target;
    cout << "First Occurrence: " << firstOccurrence(arr, target, arr.size()) << endl;
    cout << "Last Occurrence: " << lastOccurrence(arr, target, arr.size()) << endl;
}