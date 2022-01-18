/*
ex)
입력 : 4        

*      1x1

**     2x2
**

***    3x3
***
***

****   4x4
****
****
****
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i,j, k;

	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			for (k = 0; k <= i; k++) {
				printf("*");
			}
			printf("\n");
		}		
		printf("\n");
	}
}
