#include <iostream>

using namespace std;

int n, m;

void rectangle(int N, int M) {
    for (int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cout << "1";
        }
        cout << endl;
    }
}

int main() {
    cin >> n >> m;
    rectangle(n,m);
    // Please write your code here.

    return 0;
}