#include <iostream>

using namespace std;

int main() {
    int a,l;
    cin >> a >> l;
    (l<=4*a && l>=2*a && !(l%2)) ? cout << "Yes" << endl : cout << "No" << endl;
    return 0;
}