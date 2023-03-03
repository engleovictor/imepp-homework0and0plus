#include <iostream>

using namespace std;

void better_bubble_sort(int n,int *vet);

int main() {
    int vet[5], gab_vet[] = {0,1,2,3,4,5};
    cin >> vet[0] >> vet[1] >> vet[2] >> vet[3] >> vet[4];
    better_bubble_sort(5,vet);
    //printf("%d %d %d %d %d\n",vet[0],vet[1],vet[2],vet[3],vet[4]);
    if(vet[4]==4) {
        cout << 5 << endl;
        return 0;
    }
    for(int i=0;i<5;i++) {
        if(i!=vet[i]) {
            cout << i << endl;
            break;
        }
    }
    return 0;
    
}

void better_bubble_sort(int n, int *vet) {
    int var;
    for(int i=n;i>0;i--) {
        for(int j=0;j<i;j++) {
            if(vet[j] > vet[j+1]) {
                var = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = var;    
            }
        }
    }
}