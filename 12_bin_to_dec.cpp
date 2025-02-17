#include<iostream>
#include<cmath>
using namespace std;
int bin_to_dec(int n) {
    int dec = 0, power = 0;
    while(n>0) {
        int bit = n % 10;
        dec = bit * pow(2, power) + dec;
        power++;
        n = n / 10;
    }
    return dec;
}
int main() {
    int n;
    cin >> n;
    cout << bin_to_dec(n) << endl;
}