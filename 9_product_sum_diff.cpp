#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    cout<<subtractProductAndSum(n);
}
int subtractProductAndSum(int n) {
    int sum =0;
    int product=1;
    int digit;
    while (n> 0) {
        digit = (n%10);
        n = n/10;
        sum+=digit;
        product *=digit;
    }
    return product-sum;
}