#include <stdio.h>
int main()
{
    int num;
    int sq;
    int flag = 0;
    int count;
    int temp;
    printf("enter a number to check it is automorphic or not");
    scanf("%d", &num);
    sq = num * num;
    temp = num;
    while (num > 0)
    {
        if (num % 10 != sq % 10)
        {
            flag = 1;
            break;
        }
        num = num / 10;
        sq = sq / 10;
        count++;
        if (count == 2)
        {
            break;
        }
    }

    if (flag == 0)
    {
        printf("%d is automorphic", temp);
    }
    else
    {
        printf("%d is not automorphic", temp);
    }

    return 0;
}