#include <stdio.h>
#include <math.h>
 
int main() {
    float a, b, c, newA, newB, newC;

    scanf("%f%f%f", &a, &b, &c);

    if (a >= b && a >= c) {
        if (b >= c){
            newA = a;
            newB = b;
            newC = c;
        }
        else{
            newA = a;
            newB = c;
            newC = b;
        }
    }
    else {
        if (b >= c) {
            if (a <= c){
                newA = b;
                newB = c;
                newC = a;
            }
            else {
                newA = b;
                newB = a;
                newC = c;
            }
        }
        else {
            if (a >= b){
                newA = c;
                newB = a;
                newC = b;
            }
            else {
                newA = c;
                newB = b;
                newC = a;
            }
        }
    }

    if (newA >= newB+newC)
        printf("NAO FORMA TRIANGULO\n");
    else {
        if (pow(newA, 2) == pow(newB, 2)+pow(newC, 2))
            printf("TRIANGULO RETANGULO\n");
        if (pow(newA, 2) > pow(newB, 2)+pow(newC, 2))
            printf("TRIANGULO OBTUSANGULO\n");
        if (pow(newA, 2) < pow(newB, 2)+pow(newC, 2))
            printf("TRIANGULO ACUTANGULO\n");
        if (newA == newB && newA == newC)
            printf("TRIANGULO EQUILATERO\n");
        if ((newA == newB && newA != newC) || (newA == newC && newA != newB) || (newB == newC && newB != newA))
            printf("TRIANGULO ISOSCELES\n");
    }
 
    return 0;
}
