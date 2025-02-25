#include<iostream>
#include<set>
using namespace std;
// Insert find erase count - complexity O(log n)
// Size begin end empty - complexity O(1)
int main() {
    set<string> s;

    s.insert("Apple");
    s.insert("Apple");
    s.insert("Apple");
    s.insert("Banana");
    s.insert("Banana");
    s.insert("Banana");
    s.insert("Cherry");
    s.insert("Cherry");
    s.insert("Cherry");
    s.insert("Dates");
    s.insert("Dates");
    s.insert("Dates");
    s.insert("Elderberry");
    s.insert("Elderberry");
    s.insert("Elderberry");
    s.insert("Fig");
    s.insert("Fig");

    cout << "Size : " << s.size() << endl;
    cout << "Is empty : " << (s.empty() ? "Yes" : "No") << endl;

    for (string fruit : s) {
        cout << fruit << " ";
    }
    cout << endl;
    cout << s.count("Apple") << endl;

    set<string>::iterator it = s.find("Elderberry");
    s.erase(it);
    for (string fruit : s) {
        cout << fruit << " ";
    }
}