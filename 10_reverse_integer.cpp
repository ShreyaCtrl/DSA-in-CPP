#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    cout << reverse(n) << endl;
}
int reverse(int x) {
    long r=0;      // declare r 
    while(x){
        r=r*10+x%10; // find remainder and add its to r
        x=x/10;     // Update the value of x
    }
    if(r>INT_MAX || r<INT_MIN) return 0; // check range if r is outside the range then return 0  
    return int(r);
}