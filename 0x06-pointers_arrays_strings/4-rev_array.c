/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int t = 0;
	int j = n - 1;
i	
	if (n > 0)
	{
		while (t != (j / 2))
		{
			i = a[t];
			a[t] = a[j - t];
			a[j - t] = i;
			t++;
			if ((j % 2 == 1) && (t == (j / 2)))
			{
				i = a[t];
				a[t] = a[j - t];
				a[j - t] = i;
			}
		}
	}
}
