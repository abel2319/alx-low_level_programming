
/**
*print_diagsums -  a function that prints the sum of
* the two diagonals of a square matrix of integers.
*@a:matrix to be summed
*@size:size of the matrix
*
*/
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		a += i;
		sum1 += a[i];
		sum2 += a[size - 1 - i];
	}
	printf("%d, %d\n", sum1, sum2);
}
