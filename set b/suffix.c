#include<stdio.h>
#include<string.h>
int main()
{
    char str[100] = "abcde";
    int i,j;
    for (i=0;i<=strlen(str);++i)
    {
        for (j=i;j<=strlen(str);++j)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
return 0;
}