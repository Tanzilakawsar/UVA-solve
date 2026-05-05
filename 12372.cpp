
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int t, l, w, h;
    if (scanf("%d", &t) == 1) {
        int i = 1;
        while (t--) {
            if (scanf("%d %d %d", &l, &w, &h) == 3) {
                if (l <= 20 && w <= 20 && h <= 20) {
                    printf("Case %d: good\n", i);
                } else {
                    printf("Case %d: bad\n", i);
                }
                i++;
            }
        }
    }

    return 0;
}
