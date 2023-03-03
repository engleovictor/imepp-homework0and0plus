#include <iostream>

using namespace std;

int ReLU(int x);

int main() {
    int x;
    cin >> x;
    cout << ReLU(x) << endl;
}

int ReLU(int x) {
    if(x>=0) return x;
    else return 0;
}