#include <iostream>
using namespace std;
int main() {
    int cost;
    int count;
    cin >> cost;
    int i = 0;
    int coins[] = {100, 50, 20, 10, 1};
    // for (int i = 0; i < 5; i++) {
    //     int count = cost / coins[i];
    //     cost = cost % coins[i];
    //     cout << coins[i] << " : " << count << endl;
    // }

    // Using switch case
    switch(i) {
        case 0:
            count = cost / coins[0];
            cost = cost % coins[0];
            cout << coins[0] << " : " << count << endl;
            i++;
            // break;
            case 1:
            count = cost / coins[1];
            cost = cost % coins[1];
            cout << coins[1] << " : " << count << endl;
            i++;
            // break;
            case 2:
            count = cost / coins[2];
            cost = cost % coins[2];
            cout << coins[2] << " : " << count << endl;
            i++;
            // break;
            case 3:
            count = cost / coins[3];
            cost = cost % coins[3];
            cout << coins[3] << " : " << count << endl;
            i++;
            // break;
            case 4:
            count = cost / coins[4];
            cost = cost % coins[4];
            cout << coins[4] << " : " << count << endl;
            i++;
            // break;
        
    }
}