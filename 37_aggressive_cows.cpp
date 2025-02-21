#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// https://www.naukri.com/code360/problems/aggressive-cows_1082559?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2
bool canPlace(vector<int> stalls, int cows, long long mid) {
    int cowsCount = 1, lastPosition = stalls[0];
    for (int i = 0; i < stalls.size(); i++) {
        if (stalls[i]-lastPosition >= mid) {
            cowsCount++;
            if (cowsCount == cows) {
                return true;
            }
            lastPosition = stalls[i];
        }
    }
    return false;
}
long long aggressiveCows(vector<int> stalls, int cows) {
    long long start = 0, end = 0, ans = -1;
    sort(stalls.begin(), stalls.end());
    end = stalls[stalls.size() - 1];
    while(start <= end) {
        long long mid = start + (end - start) / 2;
        if (canPlace(stalls, cows, mid)) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}
int main() {
    vector<int> stalls;
    int cows, stallsCount;
    cin >> stallsCount >> cows;
    for (int i = 0; i < stallsCount; i++) {
        int temp;
        cin >> temp;
        stalls.push_back(temp);
    }
    cout << aggressiveCows(stalls, cows) << endl;
}