
void insertionSort(int* parr,int cont)
{
	if (cont < 2)
	{
		return;
	}
	int i = 0;

	for (i = 1; i < cont; i++)
	{
		int count = *(parr+i);
		int j = i - 1;
		for (j = i - 1;count<*(parr+j); j--)
		{
				*(parr + j + 1) = *(parr + j);
		}
		*(parr + j+1) = count;

	}

}

void conversetheword(int* parr, int cont)
{
	if (cont < 2)
	{
		return;
	}
	int i = 0;
	
	for (i = 1; i < cont; i++)
	{
		int count = *(parr + i);
		int j = i - 1;
		for (j = i - 1; count > *(parr + j)&&j>=0; j--)
		{
			*(parr + j + 1) = *(parr + j);
		}
		*(parr + j + 1) = count;

	}

}
