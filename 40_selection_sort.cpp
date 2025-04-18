#include<iostream>
#include<vector>
using namespace std;
// Unstable sorting algorithm
// Time complexity: O(n^2)
// Space complexity: O(1)
// In-place sorting algorithm
// It is unstable as it changes the order of equal elements
void selectionSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "After sorting" << endl;
    selectionSort(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}