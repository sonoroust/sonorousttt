#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

//int sum(int m, int n)
//{
//    int i = 0;
//    int c = 0;
//    for (i = m; i < n + 1; i++)
//    {
//        c = c + i;
//    }
//    return c;
//}
//int main()
//{
//    int m, n;
//
//    scanf("%d %d", &m, &n);
//    printf("sum = %d\n", sum(m, n));
//
//    return 0;
//}

void pyramid(int n)
{
    if (n > 9||n<1)
    {

        printf("请重新输入1-9的数字\n");
        return;
    }
    int b = 1;
    do
    {
        int i, a;
        for (i = n; i > 0; i--)
        {
            printf(" ");
            if (i == 1)
            {
                for (a = 0; a < b; a++)
                {
                    printf("%d ", b);
                }

                printf("\n");

                b++;
                n--;
            }
        }
    } while (n > 0);

}

int main()
{
    int n;
    while (1)
    {
        scanf("%d", &n);
        pyramid(n);
    }
    return 0;
}

