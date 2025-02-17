#include<iostream>
using namespace std;
int main() {
    char n;
    cin >> n;
    char val = 'A';
    cout<<int(n)<<endl;
    for (int i = 65; i < int(n); i++) {
        // cout << char((i-65)) << " ";
        for (int j = 0; j <=(i-65); j++) {
            cout<< val<< " ";
            val++;
        }
        cout << endl;
    }
}