#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> l;
    cout << "Size : " << l.size();
    l.push_back(1);
    cout << "\nSize : " << l.size();
    l.push_front(2);
    cout << "\nSize : " << l.size();
    l.push_back(3);
    cout << "\nSize : " << l.size();
    l.push_front(4);
    cout << "\nSize : " << l.size();
    l.push_back(5);
    cout << "\nSize : " << l.size() << endl;

    // Order of elements is 4 2 1 3 5
    cout << "Element at index 1: " << l.front();
    cout << "\nElement at  last index : " << l.back();

    cout << "\nBefore pop_back" << endl;
    for (auto i = l.begin(); i != l.end(); i++) {
        cout << *i << " ";
    }
    l.pop_back();
    cout << "\nAfter pop_back" << endl;
    for (auto i = l.begin(); i != l.end(); i++) {
        cout << *i << " ";
    }

    l.erase(l.begin());
    cout << "\nAfter erase" << endl;
    for (auto i = l.begin(); i != l.end(); i++) {
        cout << *i << " ";
    }

    // Initialize list with 3 elements with value 100
    list<int> l2(3, 100);
    cout << "\nSize of l2 : " << l2.size();
    for(int element :l2) {
        cout << element << " ";
    }
}