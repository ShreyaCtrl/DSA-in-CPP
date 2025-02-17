#include<iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int sum = 1;
    while(a != 1) {
        sum *= a;
        a--;
    }

    cout << sum << endl;
}