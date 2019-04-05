#include <stdio.h>

int main()
{
	int i = 1;
	char ch;
	while(i<=100) {

		scanf_s("%c", &ch);
		printf("%c", ch);
		i++;
	}

	
	return 0;
}

