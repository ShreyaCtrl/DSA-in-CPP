#include<iostream>
#include<map>
using namespace std;
// For map:
// Insert find erase count search - complexity O(log n)
// Map is implemented using red black tree hence it takes log n time and not O(1)

// For unordered_map:
// Insert find erase count search - complexity O(1)
// Unordered_map is implemented using hash table hence it takes O(1) time and not O(log n)
int main() {
    // Since it is a map it is sorted by key
    // If it is unordered_map it is not sorted
    map<string, int> mp;
    mp["Batman"] = 400;
    mp["Superman"] = 300;
    mp["WonderWoman"] = 200;
    mp["Flash"] = 100;
    mp.insert({"Aquaman", 50});

    cout << "Size : " << mp.size() << endl;
    cout << "Empty : " << (mp.empty() ? "Yes" : "No") << endl;
    for (auto i : mp) {
        cout << i.first << " : " << i.second << endl;
        // another way to print
        // cout << i.first << " : " << mp[i.first] << endl;

    }

    cout << "Is Batman present : " << (mp.count("Batman") ? "Yes" : "No") << endl;
    cout << "After erase" << endl;
    mp.erase("Aquaman");
    for (auto i : mp) {
        cout << i.first << " : " << i.second << endl;
    }

}