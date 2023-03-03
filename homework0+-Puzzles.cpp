#include <iostream>

using namespace std;

void better_bubble_sort(int *vet, int k);

int main() {
    int n,m;
    cin >> n >> m;
    int vet[m];
    for(int i=0;i<m;i++) cin >> vet[i]; 
    better_bubble_sort(vet,m);
    int j=0;
    int val = 1000;
    for(int i=n-1;i<m;i++) {
        val = min(vet[i] - vet[i-n+1],val);
    }
    cout << val << endl;
}

void better_bubble_sort(int *vet, int k) {
    int aux;
    for(int i=0;i<k;i++) {
        for(int j=0;j<k-i-1;j++) {
            if(vet[j]>vet[j+1]) {
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
}