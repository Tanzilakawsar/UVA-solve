#include <stdio.h>

int main() {
    int N, ampl, freq;
    scanf("%d", &N);

    while (N > 0) {
        N--;
        scanf("%d%d", &ampl, &freq);

        while (freq > 0) {
            freq--;

            for (int i = 1; i <= ampl; i++) {
                for (int j = 0; j < i; j++) {
                    printf("%d", i);
                }
                printf("\n");
            }


            for (int i = ampl - 1; i >= 1; i--) {
                for (int j = 0; j < i; j++) {
                    printf("%d", i);
                }
                printf("\n");
            }

            if (freq > 0) {
                printf("\n");
            }
        }

        if (N > 0) {
            printf("\n");
        }
    }

    return 0;
}
