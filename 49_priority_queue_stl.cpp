#include<iostream>
#include<queue>
using namespace std;
int main() {
    // Max Heap
    priority_queue<int> pq_max;

    // Min heap
    priority_queue<int, vector<int>, greater<int>> pq2_min;

    pq_max.push(1);
    pq_max.push(2);
    pq_max.push(3);
    pq_max.push(4);
    pq_max.push(5);

    cout << "Max heap" << endl;
    cout << "Top element : " << pq_max.top() << endl;
    pq_max.pop();
    cout << "Top element after pop : " << pq_max.top() << endl;
    cout << "Size of max heap : " << pq_max.size() << endl;
    int n = pq_max.size();
    for (int i = 0; i < n; i++) {
        cout << pq_max.top() << " ";
        pq_max.pop();
    }

    cout << "\nMin heap" << endl;
    pq2_min.push(5);
    pq2_min.push(4);
    pq2_min.push(3);
    pq2_min.push(2);
    pq2_min.push(1);
    cout << "Top element : " << pq2_min.top() << endl;
    pq2_min.pop();
    cout << "Top element after pop : " << pq2_min.top() << endl;
    cout << "Size of min heap : " << pq2_min.size() << endl;
    n = pq2_min.size();
    for (int i = 0; i < n; i++) {
        cout << pq2_min.top() << " ";
        pq2_min.pop();
    }
    
}