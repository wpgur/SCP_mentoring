#include <stdio.h>

int main()
{
	int x;

	scanf_s("%d", &x);

	for (int i = 1; i <= 9; i++)

		
		printf("%d * %d = %d\n", x, i, x*i);


	return 0;
}
