#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    cout << hammingWeight(n) << endl;
}
int hammingWeight(int n) {
    int ans = 0;
    while(n){
        if(n & 1){
            ans++;
        }
        n = n >> 1;
    }
    return ans;
}
// https://leetcode.com/problems/number-of-1-bits/