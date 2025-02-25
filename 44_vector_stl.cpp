#include<iostream>
#include<vector>
using namespace std;
// Vector is a dynamic array
// It is a sequence container
// It is a collection of elements of the same data type
// It is a dynamic container
// Once the size of the vector is full, it increases the size by double and copies the elements to the new location
int main() {
    vector<int> v;
    cout << "Capacity : " << v.capacity();
    cout << "\nSize : " << v.size();
    v.push_back(1);
    cout << "\nCapacity : " << v.capacity();
    cout << "\nSize : " << v.size();
    v.push_back(2);
    cout << "\nCapacity : " << v.capacity();
    cout << "\nSize : " << v.size();
    v.push_back(3);
    cout << "\nCapacity : " << v.capacity();
    cout << "\nSize : " << v.size();
    v.push_back(4);
    cout << "\nCapacity : " << v.capacity();
    cout << "\nSize : " << v.size();
    v.push_back(5);
    cout << "\nCapacity : " << v.capacity() ;
    cout << "\nSize : " << v.size() << endl;

    cout << "Element at index 2: " << v.at(2) << endl;
    cout << "Element at index 2: " << v[2] << endl;

    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;

    cout << "Empty or not: " << v.empty() << endl;
    cout << "Before pop_back" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    v.pop_back();
    cout << "\nAfter pop_back" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    // Clear only removes the elements from the vector but does not deallocate the memory
    // This means the capacity of the vector remains the same only the size becomes 0
    cout << "\nCapacity : " << v.capacity();
    cout << "\nSize : " << v.size();
    v.clear();
    cout << "\nCapacity : " << v.capacity();
    cout << "\nSize : " << v.size();
    cout << "\nAfter clear" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    // Shrink to fit deallocates the extra memory that is not being used
    // This means the capacity of the vector becomes equal to the size of the vector
    cout << "\nCapacity : " << v.capacity();
    cout << "\nSize : " << v.size();
    v.shrink_to_fit();
    cout << "\nCapacity : " << v.capacity();
    cout << "\nSize : " << v.size();
    cout << "\nAfter shrink_to_fit" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    // Initialize vector with 5 elements with value 1
    vector<int> arr(5, 1);
}