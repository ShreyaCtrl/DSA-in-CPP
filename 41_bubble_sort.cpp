#include<iostream>
#include<vector>
using namespace std;
// Stable sorting algorithm
// Time complexity: O(n^2)
// Space complexity: O(1)
// In-place sorting algorithm
// It is stable as it does not change the order of equal elements
void bubbleSort(vector<int> &arr) {
    int n = arr.size();
    bool swapped = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j]> arr[j+1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
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
    bubbleSort(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}