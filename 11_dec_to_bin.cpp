#include <iostream>
#include <cmath>
using namespace std;
int dec_to_bin(int n) {
    int bin = 0, i=0;
    while(n!=0) {
        int bit = n & 1;
        bin = bit * pow(10, i) + bin;
        n >>= 1;
        i++;
    }
    return bin;
}
int main() {
    int n;
    cin >> n;
    cout << dec_to_bin(n) << endl;
}
