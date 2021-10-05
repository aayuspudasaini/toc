#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100],state='a',F;
    printf("Enter the String:");
    scanf("%s",str);
    if(strlen(str)==1)
    {
        if (state=='a')
        {
            if(str[0]=='1')
            {
            F='d';
            }
        }
    }
    if(strlen(str)==2)
    {
        if(str[0]=='1'&& str[1]=='0')
        {
            F='c';
        }
    }
      if(strlen(str)==3)
    {
        if(str[0]=='1'&& str[1]=='0'&&str[2]=='1')
        {
            F='d';
        }
    }
    if(F=='c' || F=='d')
    {
    printf("The string is accepted");
    }
    else
    {
        printf("The string is not accepted");
    }
    return 0;
}