#include <iostream>

using namespace std;

int main() {
    int N,n,s,r;
    int j;
    cin >> N;
    int vets[N][51];
    for(int i=0;i<N;i++) {
        cin >> n >> s >> r;
        vets[i][n-1] = s-r;
        vets[i][n] = 0;
        int iter = 0;
        while((iter + 1)*(n-1) < r) iter++;
        for(j=0;j<n-1;j++) vets[i][j] = iter;
        for(j=0;j<r-(n-1)*iter;j++) vets[i][j]++;
    }
    for(int i=0;i<N;i++) {
        j=0;
        while(vets[i][j]) {
            cout << vets[i][j] << " ";
            j++;
        }
        cout << endl;
    }
    return 0;
}