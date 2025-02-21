#include<iostream>
#include<vector>
using namespace std;
// https://www.naukri.com/code360/problems/ayush-and-ninja-test_1097574?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=PROBLEM
bool isPossible(vector<int>& time, int days, int chapters, long long int mid) {
    int daysCount = 1, timeReq = 0;
    for (int i = 0; i < time.size(); i++) {
        if (timeReq+time[i] <= mid) {
            timeReq += time[i];
        } else {
            daysCount++;
            if (daysCount > days || time[i] > mid) {
                return false;
            }
            timeReq = time[i];
        }
    }
    return true;
}
long long chaptersToComplete(vector<int>& time, int days, int chapters) {
    long long start = 0, end = 0, ans = -1;
    for (int i = 0; i < time.size(); i++) {
        end += time[i];
    }
    while(start<=end) {
        long long mid = start + (end - start) / 2;
        if (isPossible(time, days, chapters, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int main() {
    vector<int> time;
    int days, chapters;
    cin >> days >> chapters;
    for (int i = 0; i < chapters; i++) {
        int temp;
        cin >> temp;
        time.push_back(temp);
    }
    cout<<chaptersToComplete(time, days, chapters)<<endl;
}