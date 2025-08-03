#include <stdio.h>

int main() {
    int n, t, smaller, people;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        
        if (t < smaller || i == 0) {
            smaller = t;
            people = i+1;
        }
    }

    printf("%d\n", people);

    return 0;
}
