#include<iostream>
#include<deque>
using namespace std;
int main() {
    deque<int> dq;
    cout << "\nSize : " << dq.size();
    dq.push_back(1);
    cout << "\nSize : " << dq.size();
    dq.push_front(2);
    cout << "\nSize : " << dq.size();
    dq.push_back(3);
    cout << "\nSize : " << dq.size();
    dq.push_front(4);
    cout << "\nSize : " << dq.size();
    dq.push_back(5);
    cout << "\nSize : " << dq.size() << endl;


    cout << "\nElement at index 1: " << dq.at(1);
    cout << "\nElement at index 1: " << dq[1];

    cout << "\nFirst element: " << dq.front();
    cout << "\nLast element: " << dq.back();

    cout << "\nEmpty or not: " << dq.empty();
    cout << "\nBefore pop_back" << endl;
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }
    dq.pop_back();
    cout << "\nAfter pop_back" << endl;
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }

    dq.erase(dq.begin() + 1);
    // dq.erase(dq.begin(), dq.begin() + 1);
    cout << "\nAfter erase" << endl;
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }

    dq.insert(dq.begin() + 1, 6);
    cout << "\nAfter insert" << endl;
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }


}