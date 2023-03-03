#include <iostream>

using namespace std;

int sumtiln(int p);

int main() {
    int n;
    cin >> n;
    int i,j,m,p,iter;
    int mx = 0,inner;
    string exp[n];
    for(i=0;i<n;i++) {
        mx = 0;
        cin >> m >> p;
        for(j=0;j<m;j++) {
            cin >> inner;
            p += inner;
            mx = max(mx,inner);
        }
        while(sumtiln(mx)<p) mx++;
        if(sumtiln(mx) == p) exp[i] = "YES"; //yes
        else exp[i] = "NO"; //no
    }
    for(i=0;i<n;i++) cout << exp[i] << endl;
    return 0;
}

int sumtiln(int p) {
    int res=0;
    for(int i=1;i<=p;i++) res += i;
    return res; 
}