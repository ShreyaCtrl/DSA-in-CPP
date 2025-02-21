#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
bool canCut(vector<int> &trees, int treesCount, int wood, long long mid) {
    long long woodCollected = 0;
    for (int i = 0; i < trees.size(); i++) {
        if (trees[i] > mid) {
            woodCollected += trees[i] - mid;
            if (woodCollected >= wood) {
                return true;
            }
        }
    }
    return false;
}

long long woodCutting(vector<int> &trees, int treesCount, int wood) {
    long long start = 0, end = 0, ans = -1;
    for (int i = 0; i < trees.size(); i++) {
        end = max(end, (long long)trees[i]);
    }
    while(start <= end) {
        long long mid = start + (end - start)/2;
        if (canCut(trees, treesCount, wood, mid)) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}
int main() {
    vector<int> trees;
    int treesCount, wood;
    cin >> treesCount >> wood;
    for (int i = 0; i < treesCount; i++) {
        int temp;
        cin >> temp;
        trees.push_back(temp); 
    }
    cout << woodCutting(trees, treesCount, wood) << endl;
}