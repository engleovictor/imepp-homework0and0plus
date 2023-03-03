#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

int main() {
    string num;
    cin >> num;
    int tam = num.length();
    long unsigned int sum = 0;
    char vet[tam+1];
    strcpy(vet,num.c_str());
    for(int i=0;i<tam;i++) {
        sum += (vet[tam-1-i]-0x40)*((long unsigned)pow(26,i));
    }
    cout << sum << endl;
    return 0;
}