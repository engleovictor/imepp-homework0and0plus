#include <iostream>

using namespace std;

void better_bubble_short(int *vet, int k);

int main() {
    int n,k,i;
    cin >> n >> k;
    int vet[n];
    for(i=0;i<n;i++) cin >> vet[i];
    better_bubble_short(vet,n);
    int sum = 0;
    for(i=0;i<k;i++) sum += vet[i];
    cout << sum << endl;
    return 0;
}

void better_bubble_short(int *vet, int k) {
    int verif, vaux;
    for(int i=0;i<k;i++) {
        verif = 1;
        for(int j=0;j<k-i-1;j++){
            if(vet[j]>vet[j+1]) {
                vaux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = vaux;
                verif = 0;
            }
        }
        if(verif) return ;
    }
}