#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int x; srand(time(0)); x = rand();
	printf("%d \n", x);
	return (0);
