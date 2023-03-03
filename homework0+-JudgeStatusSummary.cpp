#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string pvals[4] = {
        "AC",
        "WA",
        "TLE",
        "RE"
    };
    int valvals[4] = {0,0,0,0};
    int n,i,j;
    string vaux;
    cin >> n;
    for(i=0;i<n;i++) {
        cin >> vaux;
        for(j=0;j<4;j++) {
            if(strcmp(vaux.c_str(),pvals[j].c_str()) == 0) {
                valvals[j]++;
                break;
            }
        }
    }
    for(i=0;i<4;i++) printf("%s x %d\n", pvals[i].c_str(), valvals[i]);
    return 0;
}