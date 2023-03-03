#include <iostream>

using namespace std;

int main() {
    string number[] = {
        "one",   "two",   "three",
        "four",  "five",  "six",
        "seven", "eight", "nine"
    };
    int a,b;
    cin >> a >> b;
    for(int i=a-1;i<b;i++) {
        if(i>=0 && i<=8) {
            cout << number[i] << endl;
        } else (i+1)%2 ? (cout << "odd\n") : (cout << "even\n");
    }
    return 0;
}