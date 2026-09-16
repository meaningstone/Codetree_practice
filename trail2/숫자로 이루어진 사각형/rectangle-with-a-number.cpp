#include <iostream>

using namespace std;

int N;
int num = 1;

void rect(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << num << " " ;
            num++;
            if(num>9){
                num = 1;
            }
        }
        cout << endl;
    }
}

int main() {
    cin >> N;
    rect(N);
    // Please write your code here.

    return 0;
}