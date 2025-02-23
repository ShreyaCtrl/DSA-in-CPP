#include<iostream>
#include<vector>
using namespace std;
// Stable sorting algorithm
// Time complexity: Best case: O(n^2) Worst case: O(n)
// Space complexity: O(1)
// In-place sorting algorithm
// It is stable as it does not change the order of equal elements
// It is adaptive as it performs better when the array is partially sorted
// It is used when the number of elements is small
// It is used when the array is almost sorted
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << "After sorting" << endl;
    insertionSort(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}