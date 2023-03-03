#include <iostream>

using namespace std;

int get_order(string word0, string word1);
void better_bubble_sort(string *words, int k);

int main() {
    int n,k,i;
    cin >> n >> k;
    string vals[n];
    for(i=0;i<n;i++) cin >> vals[i];
    better_bubble_sort(vals,k);
    for(i=0;i<k;i++) cout << vals[i] << endl;
    return 0;
}

int get_order(string word0, string word1) {
    int n0 = word0.length(), n1 = word1.length();
    int n = min(n0,n1);
    for(int i=0;i<n;i++) {
        if(word0[i]<word1[i]) return 0;
        else if(word0[i] == word1[i]) continue;
        else return 1;
    }
    return (n0 <= n1 ? 0 : 1);
}

void better_bubble_sort(string *words, int k) {
    string auxstr;
    for(int i=0;i<k;i++) {
        for(int j=0;j<k-i-1;j++) {
            if(get_order(words[j],words[j+1])) {
                auxstr = words[j];
                words[j] = words[j+1];
                words[j+1] = auxstr;
            }
        }
    }
}