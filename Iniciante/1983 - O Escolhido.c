#include <stdio.h>

int main() {
    int n, registration_number, registration_numbe_highest_score = 0;
    float note, note_highest_score = 0.0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %f", &registration_number, &note);

        if (note >= 8.0 && note > note_highest_score) {
            note_highest_score = note;
            registration_numbe_highest_score = registration_number;
        }
    }

    if (registration_numbe_highest_score == 0)
        printf("Minimum note not reached\n");
    else
        printf("%d\n", registration_numbe_highest_score);

    return 0;
}
