#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int x;
	strand(time(0));
	x = rand() - RAND_MAX / 2;
	printf("%d\n", x)
		return 0;
}
