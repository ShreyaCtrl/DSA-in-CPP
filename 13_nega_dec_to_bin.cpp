#include<iostream>
#include<cmath>
using namespace std;
int complement_1s(int n) {
    // int comp = 0, power = 0;
    // while(n != 0) {
    //     int bit = n & 1;
    //     if(bit == 0) {
    //         bit = 1;
    //     } else {
    //         bit = 0;
    //     }
    //     comp = bit * pow(10, power) + comp;
    //     n >>= 1;
    //     power++;
    // }
    // cout << comp << endl;
    return ~n;
}
int complement_2s(int n) {
    cout << (complement_1s(n)+1) << endl;
    return complement_1s(n) + 1;
}
int negative_decimal_binary(int n) {
    // int bin = 0;
    // // n = abs(n);
    // int comp2s = complement_2s(n);
    // int power = 0;
    // while(comp2s != 0) {
    //     int bit = comp2s & 1;
    //     if (bit == 1 && n == 1) {
    //         bin = -bin;
    //     }
    //     bin = bit * pow(10, power) + bin;
    //     power++;
    //     comp2s >>= 1;
    // }
    // cout << bin << endl;
    return complement_2s(n);
}

int main() {
    int n;
    cin >> n;
    cout << negative_decimal_binary(n) << endl;
}