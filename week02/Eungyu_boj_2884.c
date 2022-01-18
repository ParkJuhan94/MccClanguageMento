#include <stdio.h>


int main(){

int A, B;
scanf("%d %d", &A, &B);
if (B < 45) {
	if (A > 0 && A <= 24) {
		A -= 1;
	}
	else {
		A = 23;
	}
	B+=15;
}
else {
	B -= 45;
}
printf("%d %d", A, B);
}
