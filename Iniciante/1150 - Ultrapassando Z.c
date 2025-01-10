#include <stdio.h>
 
int main() {
    int x, z, sum = 0, value = 0;

    scanf("%d%d", &x, &z);

    while (z <= x)
        scanf("%d", &z);
    
    for (int i = x; sum <= z; i++){
        sum += i;
        value++;
    }

    printf("%d\n", value);
     
    return 0;
}
