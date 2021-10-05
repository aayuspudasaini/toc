#include<stdio.h>
#include<ctype.h>
int main()
{
    char a[10];
    int flag, i =1;
    prntf("Enter an Identifier:");
    scanf("%s",a);
    if (isalpha(a[0]))
    {
        flag =1 ;
    }
    else
    printf("\n Not identifier");
    while (a[i]!='\0')
    {
        if (!isdigit(a[i])&&!isalpha(a[i]))
        {
            flag =0;
            break;
        }
        i++;
    }
    if (flag ==1)
    printf("Valid identifier");
    return 0;
}