#include <iostream>

using namespace std;

int main() {
    string binary;
    cin >> binary;
    int n = binary.length();
    for(int i=0;i<n;i++) {
        binary[i] -= 0x30;
        binary[i] = !((int) binary[i]);
        binary[i] += 0x30;
    }
    cout << binary << endl;
    return 0;
}
