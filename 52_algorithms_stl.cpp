#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    vector<int> v = {1, 2, 2, 2, 3, 3, 3, 4, 4, 5, 6, 6};
    cout << "Binary search to check if 3 is present : " << ((binary_search(v.begin(), v.end(), 3) == 1) ? "true" : "false") << endl;

    // Find lower bound and upper bound of 2
    auto lb = lower_bound(v.begin(), v.end(), 2);
    auto ub = upper_bound(v.begin(), v.end(), 2);
    // Lower bound means find the first value that is greater than or equal to the given value in the vector
    cout << "Lower bound of 2 : " << *lb << endl;
    // Upper bound means find the first value that is greater than the given value in the vector
    cout << "Upper bound of 2 : " << *ub << endl;

    string s = "hello";
    reverse(s.begin(), s.end());
    cout << "Reverse of hello : " << s << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "Rotate the vector by 1 : ";
    for(int i : v) {
        cout << i << " ";
    }

    // Sorting algorithm in C++ STL is intro sort which is a hybrid of quick sort, heap sort and insertion sort
}