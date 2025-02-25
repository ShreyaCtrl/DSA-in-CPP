#include<iostream>
#include<array>
using namespace std;
// Array is a fixed-size sequence container
// It is a collection of elements of the same data type
// It is a static container
// It is a contiguous memory location
int main() {
    array<int, 5> arr = {1, 2, 3, 4, 5};
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    int size = arr.size();
    cout << "Size of array: " << size << endl;
    cout << "Element at index 2: " << arr.at(2) << endl;
    cout << "Element at index 2: " << arr[2] << endl;
    cout << "First element: " << arr.front() << endl;
    cout << "Last element: " << arr.back() << endl;
    cout << "Empty or not: " << arr.empty() << endl;
}