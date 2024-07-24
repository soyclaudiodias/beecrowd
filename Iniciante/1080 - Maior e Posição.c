#include <stdio.h>
 
int main() {
    int n, bigger = 0, position;

    for (int i = 0; i < 100; i++) {
        scanf("%d", &n);

        if (n > bigger){
            bigger = n;
            position = i+1;
        }
    }

    printf("%d\n%d\n", bigger, position);
 
    return 0;
}
