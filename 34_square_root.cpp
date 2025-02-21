#include<iostream>
#include<vector>
using namespace std;
long long int Integralsqrt(int n, int start, int end) {
    int ans = -1;
    while(start <= end) {
        long long int mid = start + (end - start) / 2;
        if (mid*mid == n ) {
            return mid;
        } else if (mid*mid < n) {
            start = mid + 1;
            ans = mid;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}
double precision(int n, int tempSol, int preci) {
    double ans = tempSol, increment = 0.1;
    for (int i = 0; i < preci; i++) {
        while(ans*ans <= n) {
            // cout << ans << " " << increment << endl;
            ans += increment;
        }
        // cout << "ans: " << ans << endl;
        ans -= increment;
        increment /= 10;
    }
    return ans;
}
int main() {
    // vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for (int i = 0; i < arr.size(); i++) {
    cout << "Square root of " << 6 << " is " << precision(6, Integralsqrt(6, 0, 6), 3) << endl;
    // }
}
