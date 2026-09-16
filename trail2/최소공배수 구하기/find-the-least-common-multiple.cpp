#include <iostream>

using namespace std;

int n, m;

int gcd(int a, int b) {
    if(b==0) {
        return a;
    }
    return gcd(b, a%b);

}

int main() {
    cin >> n >> m;
    int num = gcd(n,m);
    cout << n*m/num;
    // Please write your code here.

    return 0;
}