#include <iostream>

using namespace std;

int main() {
    int n,i=0;
    cin >> n;
    int vet[n];
    for(i=0;i<n;i++) {
        cin >> vet[i];
    }
    for(i=n-1;i>-1;i--) {
        printf("%d ",vet[i]);
    }
    cout << endl;
    return 0;
}