#include <cstdio>
using namespace std;

int main() {
    int n;
    int sum;

    printf("PERFECTION OUTPUT\n");
    while (scanf("%d", &n), n) { // Continue until n is zero
        sum = 0;

        // Calculate sum of divisors of n (excluding n itself)
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0)
                sum += i;
        }

        // Print the result for each number
        printf("%5d  ", n);
        if (sum > n)
            printf("ABUNDANT\n");
        else if (sum == n)
            printf("PERFECT\n");
        else
            printf("DEFICIENT\n");
    }

    printf("END OF OUTPUT\n");

    return 0;
}
