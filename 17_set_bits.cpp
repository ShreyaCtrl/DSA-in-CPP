#include<iostream>
using namespace std;
int set_bits(int a, int b) {
    int count = 0;
    // int n = a | b;
    while (a>0) {
        int bit = a & 1;
        if (bit == 1) {
            count++;
        }
        a /= 2;
    }
    while (b>0) {
        int bit = b & 1;
        if (bit == 1) {
            count++;
        }
        b /= 2;
    }
    return count;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << set_bits(a, b);
}