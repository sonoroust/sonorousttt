#define _CRT_SECURE_NO_WARNINGS 1

#include "test.h"
void num(void)
{
	printf("********************\n");
	printf("*****  ��ѡ��  *****\n");
	printf("***1.˳�� 2.����****\n");
	printf("********************\n");
}
int main()
{	
	int input = 0;
	int arr[10] = { 11,8,7,4,99,5,0,100,2,1 };
	num();
	while (1)
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			insertionSort(arr, sizeof(arr)/sizeof(arr[0]));
			break;
		case 2:
			conversetheword(arr, sizeof(arr) / sizeof(arr[0]));
			break;
		default:
			printf("�����������������\n");
			break;
		}
		for(int i=0;i<10;i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	return 0;
}