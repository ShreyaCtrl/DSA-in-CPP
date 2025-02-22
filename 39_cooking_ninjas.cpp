#include<iostream>
#include<vector>
#include<limits>
using namespace std;
bool canCook(vector<int> &ranks, int maxDishes, long timeAvailable) {
    long long dishesCooked = 0;
    for (int i = 0; i < ranks.size(); i++) {
        int timeReq = 0;
        // dishesCooked += timeAvailable / ranks[i];
        long int dishes = 1;
        while (timeReq +dishes*ranks[i] <= timeAvailable) {
            timeReq += dishes * ranks[i];
            dishesCooked += 1;
            dishes++;
        }
        // dishesCooked += dishes;
        if (dishesCooked >= maxDishes)
            return true;
    }
    return false;
}
long long minTimeToCook(vector<int> &ranks, int maxDishes) {
   long long int start = 0, end = 0;
    end = ranks[ranks.size() - 1] * maxDishes * (maxDishes + 1) / 2;
    long long ans = -1;
    while(start <= end) {
        long long int mid = start + (end - start) / 2;
        if (canCook(ranks, maxDishes, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}
int main() {
    long long testCases, n, m;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        // cout << "Test Case : " << i+1 << endl;
        cin >> m >> n;
        // cout << "Enter the ranks of the chefs : " << endl;
        vector<int> ranks(n);
        for (int j = 0; j < n; j++)
        {
            cin >> ranks[j];
        }
        cout << minTimeToCook(ranks, m) << endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}