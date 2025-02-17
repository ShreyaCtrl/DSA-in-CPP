#include<iostream>
using namespace std;
int ap (int a, int d, int n) {
    return a + (n - 1) * d;
}
int main() {
    int n, a, d;
    cin >> n >> a >> d;
    cout << ap(a, d, n);
}