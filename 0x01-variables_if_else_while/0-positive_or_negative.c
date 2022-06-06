int main(void)

{
	srand(time(NULL));
	int n = rand();
	if (n > 0)                                                                      {
	printf("%d : is positive\n");							}
	else
	{
	printf("%d : is negative\n");
	}
	return (0);
}
