#include <iostream>
using namespace std;
int findUnique(int a[], int n) {
    int x=0;
    for (int i = 0; i < n; i++) {
        x ^= a[i];
    }
    return x;
}
int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << findUnique(arr, n);
}