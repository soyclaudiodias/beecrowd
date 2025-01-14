#include <stdio.h>
 
int main() {
    float s = 0, denominator = 1;

    for (int i = 1; i <= 39; i+=2) {
        s += i/denominator;
        denominator *= 2;
    }

    printf("%.2f\n", s);
 
    return 0;
}
