#include <stdio.h>

int main()
{
	int s[5];
	int i;
	int sum = 0;

	for (i = 0; i < 5; i++) {
		scanf("%d", &s[i]);
		if (s[i] < 40) {
			s[i] = 40;
		}
		sum += s[i];
	}




	printf("%d", sum/5);



	return 0;
}