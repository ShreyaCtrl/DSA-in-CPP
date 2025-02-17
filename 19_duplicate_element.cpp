#include<iostream>
using namespace std;
int findDuplicate(int a[], int n) {
    int xo = 0;
    for (int i = 0; i < n; i++) {
        // cout << a[i] << " ";
        xo ^= a[i];
        // cout << "XOR: " << xo << " ";
    }
    for (int i = 1; i < n; i++) {
        // cout << a[i] << " ";
        xo ^= i;
    }
    // cout << endl;
    return xo;
}
int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "The duplicate element : " << findDuplicate(arr, n);
}