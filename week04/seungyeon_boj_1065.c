#include <stdio.h>


int hansoo(int N)
{
	int count = 0;

	for (int i = 1; i <= N; i++)
	{
		if (0 < i && i<100)
		{
			count++;
		}
		else 
		{
			if (i / 100 - (i % 100) / 10 == (i % 100) / 10 - (i % 10))
			{
				count++;
			}
			
		}
	
	}
	return count;
}

int main()
{
	int N;
	scanf("%d", &N);
	//hansoo(N);
	printf("%d", hansoo(N));
}
