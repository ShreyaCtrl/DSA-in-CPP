#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// https://leetcode.com/problems/unique-number-of-occurrences/
bool uniqueOccurrences(vector<int>& arr) {
    vector<int> freq;
    sort(arr.begin(), arr.end());
    for(int i = 0; i< arr.size(); i++) {
        int count = 1;
        while(i+1 < arr.size() && arr[i] == arr[i+1]) {
            count++;
            i++;
        }
        freq.push_back(count);
    }
    sort(freq.begin(), freq.end());
    for(int i = 0; i<freq.size()-1; i++)
        cout << freq[i];
    for(int i = 0; i<freq.size()-1; i++) {
        if (freq[i] == freq[i+1]) 
            return false;
    }
    return true;
}
int main() {
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << uniqueOccurrences(arr);
}