#include <stdio.h>

int main()
{
	int n, rev = 0, rem, og;

	printf("Enter a Integer : ");
	scanf("%d", &n);
	og = n;

	while (n != 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n /= 10;
	}

	if (og == rev)
		printf("%d is a Palindrome.", og);
	else
		printf("%d is not a Palindrome.", og);

	return 0;
}

// Output 
// Enter a Integer : 121
// 121 is a Palindrome.