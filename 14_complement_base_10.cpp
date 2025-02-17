#include<iostream>
#include<cmath>
using namespace std;
// Runtime : 3ms (better than 0.44%)
int bitwiseComplement(int n) {
    if (n==0) return 1;
    int ans=0, power=0;
    while(n>0) {
        int bit = n&1;
        cout<<bit;
        if (bit == 0) {
            bit = 1;
        } else {
            bit = 0;
        }
        ans = (bit)*pow(2,power)+ans;
        power++;
        n>>=1;
    }
    return ans;
}
int bitComplement(int n) {
    int mask = 0, m=n;
    if(n==0) return 1;
    while(m!= 0) {
        mask = (mask << 1) | 1;
        m>>=1;
    }
    return (~n)&mask;
}
int main() {
    int n;
    cin >> n;
    cout << bitwiseComplement(n) << endl;
    cout << bitComplement(n) << endl;
}