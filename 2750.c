#include <stdio.h>
int num[1000];

int main()
{
	int n,i,j,temp;
	
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		scanf_s("%d", &num[i]);
	}
	

	for (i = 0; i < n; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}



		for (i = 0; i < n; i++) {
			printf("%d\n", num[i]);
		}

	
	return 0;
}
