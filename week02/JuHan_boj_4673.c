#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void self_num() {
	int not_self_num;
	int arr[10100] = { 0 };		// stack 범위 초과를 생각하여 100 여유롭게 할당

	for (int i = 1; i <= 10000; i++) {        //자릿수를 나눠서 셀프넘버가 아닌 놈의 인덱스는 ++해줌
		if ( i < 10) {
			not_self_num = i + i;
			arr[not_self_num]++;
		}
		else if ( i < 100) {
			not_self_num = i + i / 10 + i % 10;
			arr[not_self_num]++;
		}
		else if ( i < 1000) {
			not_self_num = i + i / 100 + i % 100 / 10 + i % 10;
			arr[not_self_num]++;
		}
		else {			
			not_self_num = i + i / 1000 + i % 1000 / 100 + i % 100 / 10 + i % 10;
			arr[not_self_num]++;
		}		
	}

    //++이 되지않은, 0으로 남아있는 애들을 출력
	for (int i = 1; i <= 10000; i++) {
		if (arr[i] == 0) {
			printf("%d\n", i);
		}
	}
}

int main() {
	self_num();
}
