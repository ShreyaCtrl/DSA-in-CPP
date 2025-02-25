#include<iostream>
#include<queue>
using namespace std;
int main() {
    queue<int> q;
    cout << "Size : " << q.size() << endl;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << "Size : " << q.size() << endl;

    cout << "Front element : " << q.front() << endl;
    cout << "Back element : " << q.back() << endl;
    q.pop();
    cout << "Front element after pop : " << q.front() << endl;
    cout << "Back element after pop : " << q.back() << endl;
}