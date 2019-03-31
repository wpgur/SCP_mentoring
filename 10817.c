#include <stdio.h>

int main()
{
	int A;
	int B;
	int C;

	scanf("%d\n", &A);
	scanf("%d\n", &B);
	scanf("%d\n", &C);

	if (A <= B && A >= C)
		printf("%d", A);
	else if (A <= C && A >= B)
		printf("%d", A);
	else if (B <= C && B >= A)
		printf("%d", B);
	else if (B <= A && B >= C)
		printf("%d", B);
	else if (C <= A && C >= B)
		printf("%d", C);
	else if (C <= B && C >= A)
		printf("%d", C);

	return 0;
}