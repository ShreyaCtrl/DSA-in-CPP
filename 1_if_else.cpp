#include<iostream>
using namespace std;
int main() {
    char ch;
    cout << "ENter a character:" << endl;
    cin >> ch;
    // cout << ch;
    int ascii = int(ch);
    if (ascii >= 48 && ascii <= 57) {
        cout << "DIgit" << endl;
    } else if (ascii >= 65 && ascii <= 90) {
        cout << "Capital Letter" << endl;
    } else if (ascii >= 97 && ascii <= 122) {
        cout << "Small Letter" << endl;
    }

}