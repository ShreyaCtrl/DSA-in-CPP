#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<string> st;
    st.push("Apple");
    st.push("Banana");
    st.push("Cherry");
    st.push("Dates");

    cout << "Size : " << st.size() << endl;
    cout << "Top element : " << st.top() << endl;

    cout << "Before pop" << endl;
    // for (int i = 0; i < st.size(); i++) {
        cout << st.top() << " ";
    // }
    st.pop();
    cout << "After pop" << endl;
    // for (int i = 0; i < st.size(); i++) {
        cout << st.top() << " ";
    // }
}