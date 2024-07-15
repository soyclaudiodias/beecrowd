#include <stdio.h>
 
int main() {
    int value;
    char month[12][100] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    scanf("%d", &value);
    printf("%s\n", month[value-1]);
 
    return 0;
}
