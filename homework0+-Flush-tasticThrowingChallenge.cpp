#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n,xp,yp,r;
    cin >> n >> xp >> yp >> r;
    int sucess = 0;
    int gxp, gyp;
    for(int i=0;i<n;i++) {
        cin >> gxp >> gyp;
        if(sqrt(pow(xp-gxp,2) + pow(yp-gyp,2)) <= r) sucess++;
    }
    cout << sucess << endl;
}