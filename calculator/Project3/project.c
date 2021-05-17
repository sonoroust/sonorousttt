#include <stdio.h>
#include <math.h>
#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning (disable: 4996)
int main()
{
	while (1)
	{
		int i;
		int a = 0, b = 0, c = 0, d, e = 0, h = 0, j = 1, k = 0, kk = 1, hh,dd = 0;
		int a1 = 0, a2 = 0;
		float b1 = 0,b2 = 0;
		float c1,c2;
		float f, g,gg;
		char arr[100];
		scanf("%s", arr);

		for (i = 0; i < 100; i++)
		{
			if ((arr[i] == '+')|| (arr[i] == '-') || (arr[i] == '*') || (arr[i] == '/'))
			{
				a = i;

			}
			if (arr[i] == '\0')
			{
				hh = i;
				break;
			}
		}
		for (i = 0; i < hh; i++)
		{
			if ((arr[i] == '+') || (arr[i] == '-') || (arr[i] == '*') || (arr[i] == '/'))
			{
				dd++;
			}
		}
		if (dd > 1)
		{
			printf("输入错误，请重新输入\n");
			continue;
		}
		for (i = 0; i < a; i++)
		{
			if (arr[i] == '.')
			{
				b++;
				d = i;
			}
		}
		for (i = a+1; i < hh; i++)
		{
			if (arr[i] == '.')
			{
				c++;
				e = i;
			}
		}
		if ((b>1)||(c>1))
		{
			printf("输入错误，请重新输入\n");
			continue;
		}
		
		if (b == 1)
		{
			for (i = d - 1; i >= 0; i--)
			{
				a1 = a1 + (arr[i] - '0') * pow(10, h);
				h++;
			}
			for (i = d + 1; i < a; i++)
			{
				b1 = b1 + ((float)(arr[i] - '0'))/pow(10, j);
				j++;
			}
			c1 = (float)a1 + b1;

		}

		if (b == 0)
		{
			for (i = a - 1; i >= 0; i--)
			{
				a1 = a1 + (float)(arr[i] - '0') * pow(10, h);
				h++;
			}
			c1 = (float)a1;
		}
		if (c == 1)
		{
			for (i = e - 1; i > a; i--)
			{
				a2 = a2 + (arr[i] - '0') * pow(10, k);
				k++;
			}
			for (i = e + 1; i < hh; i++)
			{
				b2 = b2 + ((float)(arr[i] - '0')) / pow(10, kk);
				kk++;
			}
			c2 = (float)a2 + b2;
		}
		if (c == 0)
		{
			for (i = hh - 1; i > a; i--)
			{
				a2 = a2 + (arr[i] - '0') * pow(10, k);
				k++;
			}
			c2 = (float)a2;
		}

		switch (arr[a])
		{
		case '+':  gg = c1 + c2; break;
		case '-':  gg = c1 - c2; break;
		case '*':  gg = c1 * c2; break;
		case '/':  gg = c1 / c2; break;
		}
		printf("%g\n",gg);
	}
	return 0;
}




