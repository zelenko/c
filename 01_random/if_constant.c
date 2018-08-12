#include <stdio.h>

#if !defined(MESSAGE)
#define MESSAGE "Example of defined Constant"
#endif

int main(void)
{
	printf("Here is the message: %s\n", MESSAGE);
	return 0;
}
