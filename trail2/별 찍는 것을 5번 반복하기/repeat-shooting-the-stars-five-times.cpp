#include <iostream>
using namespace std;

void star() {
    for(int i=0;i<5;i++) {
        for(int i=0;i<10;i++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    star();
    return 0;
}