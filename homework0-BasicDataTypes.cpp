#include <iostream>

int main() {
    int d;
    long ld;
    char ch;
    float f;
    double lf;
    scanf("%d %ld %c %f %lf", &d, &ld, &ch, &f, &lf);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", d, ld, ch, f, lf);
    return 0;
}