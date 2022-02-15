#include <stdio.h>

int fibo(int n)
{
	if (n > 1)
	{
		return fibo(n - 1) + fibo(n - 2);
	}
	else
		return n;
}

int main()
{
	int n;
	scanf("%d", &n);

	//n=0이면 0
	//n=1이면 1
	//n>1이면 (n-1)+(n-2)

	printf("%d", fibo(n));

	return 0;

}
