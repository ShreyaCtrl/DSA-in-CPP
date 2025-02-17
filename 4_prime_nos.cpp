#include<iostream>
#include<cmath>
bool isPrime(int n, int primes[], int size) {
    for (int i = 0; i < size; i++)
    {
        if (primes[i] > sqrt(n)) {
            return true;
        } else if (n %primes[i] == 0) {
            return false;
        } else {
            continue;
        }
    }
    return true;
}
using namespace std;
int main() {
    int n;
    cin >> n;
    int primes[n];
    primes[0] = 2;
    int i = 3;
    while (i <= n) {
        if (isPrime(i, primes, n)) {
            primes[i] = i;
            cout << i << endl;
        }
        i++;
    }
    // cout<< primes << endl;
}