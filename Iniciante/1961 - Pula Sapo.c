#include <stdio.h>
#include <stdbool.h>

int main() {
    int p, n, pipe_height_current, pipe_height_next;
    bool result = true;

    scanf("%d %d", &p, &n);
    scanf("%d", &pipe_height_current);

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &pipe_height_next);

        if ((pipe_height_next - pipe_height_current) >= (p * -1) && (pipe_height_next - pipe_height_current) <= p)
            pipe_height_current = pipe_height_next;
        else
            result = false;
    }

    if (result)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");

    return 0;
}
