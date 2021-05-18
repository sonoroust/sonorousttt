#include <stdio.h>

int main()
{	
	int x = 0;
	int a[40] = {5,5,6,6,7,7,8,8,9,9,11,11,55,55,66,66,15,15,59,59,62,62,5};
	for (int i = 0; i < 40; i++)
	{
		x ^= a[i];

	}
	printf("%d",x);
	return 0;
}