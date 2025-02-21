#include<iostream>
#include<vector>
using namespace std;
// https://www.naukri.com/code360/problems/painter's-partition-problem_1089557?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=PROBLEM
bool canPaint(vector<int> &boards, int painters, long long mid) {
    int paintersReq = 1, boardsPainted = 0;
    for (int i = 0; i < boards.size(); i++) {
        if (boardsPainted+boards[i] <= mid) {
            boardsPainted += boards[i];
        } else {
            paintersReq++;
            if (paintersReq > painters || boards[i] > mid) {
                return false;
            }
            boardsPainted = boards[i];
        }
    }
    return true;
}
long long findLargestMinDistance(vector<int> &boards, int painters) {
    long long start = 0, end = 0, ans = -1;
    for (int i = 0; i < boards.size(); i++) {
        end += boards[i];
    }
    while(start <= end) {
        long long mid = start + (end - start) / 2;
        if (canPaint(boards, painters, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}
int main() {
    vector<int> boards;
    int painters, boardsCount;
    cin >> boardsCount >> painters;
    for (int i = 0; i < boardsCount; i++) {
        int temp;
        cin >> temp;
        boards.push_back(temp);
    }
    cout << findLargestMinDistance(boards, painters) << endl;
}