#include<iostream>
#include<vector>
using namespace std;
void sort012(vector<int> &arr, int n)
{
    int zero = 0, one = 0, two = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zero++;
        else if (arr[i] == 1)
            one++;
        else
            two++;
    }
    for (int i = 0; i < n; i++)
    {
        if (i < zero)
        {
            arr[i] = 0;
            // zero--;
        }
        else if (i < zero + one)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 2;
        }
    }

}
int main() {
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort012(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}