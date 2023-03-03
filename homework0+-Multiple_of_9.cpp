#include <iostream>

using namespace std;

int main() {
    string bigint;
    cin >> bigint;
    int n = bigint.length();
    int var = 0;
    for(int i=0;i<n;i++) {
        var += bigint[i]-0x30; 
    }
    var%9 ? cout << "No\n" : cout << "Yes\n";
    return 0;
}