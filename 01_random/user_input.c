// user input
#include <stdio.h>

int main()
{
	char a[100];
	printf("say someting: ");

	gets(a);

	printf("You entered: ");
	puts(a);

	return 0;
}
