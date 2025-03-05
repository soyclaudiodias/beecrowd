#include <stdio.h>
 
int main() {
    int day_start, day_end, hour_start, hour_end, minute_start, minute_end, second_start, second_end, duration;

    scanf("Dia %d %d : %d : %d ", &day_start, &hour_start, &minute_start, &second_start);
    scanf("Dia %d %d : %d : %d", &day_end, &hour_end, &minute_end, &second_end);

    duration = (day_end*86400 + hour_end*3600 + minute_end*60 + second_end) -
               (day_start*86400 + hour_start*3600 + minute_start*60 + second_start);

    printf("%d dia(s)\n", duration/86400);
    duration %= 86400;
    printf("%d hora(s)\n", duration/3600);
    duration %= 3600;
    printf("%d minuto(s)\n", duration/60);
    duration %= 60;
    printf("%d segundo(s)\n", duration);
}
