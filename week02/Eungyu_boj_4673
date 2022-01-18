#include <stdio.h>

int main() {

    for (int i = 1; i <= 10000; i++) {
        int isSelf = 1;
        for (int k = 1; k <= i; k++) {
            int sum = k;
            int j = k;
            while (j >= 10) {
                sum += j % 10;
                j /= 10;
            }
            sum += j;
            if (sum == i) {
                isSelf = 0;
                break;
            }
        }
        if (isSelf == 1) {
            printf("%d\n", i);
        }

    }
}
