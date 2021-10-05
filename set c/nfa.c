#include<stdio.h>
int main()
{
    char str[100]="10010",F ='a';
    int i;
    for (i=0;str[i]!='\0';i++)
    {
        switch(F)
        {
            case 'a':
            if(str[i]='1')
            {
            if (str[i+1]!=1)
            {
                F='b';
            }
            else
            F='a';
            }
            break;
            case 'b':
            if (str[i]=='0')
            F='c';
        }
    }
    if (F=='c')
    printf("Accepted");
    else
    printf("Not Accepted");
    return 0;
}