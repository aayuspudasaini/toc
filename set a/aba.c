#include <stdio.h>
int main()
{
    char str[100],F='A';
    int i;
    printf("Enter the string:\n");
    scanf("%s",str);
    for(i=0;str[i]='\0';i++);
    {
        switch(F)
        { 
            case 'A':
            if(str[i]='a')
            F='B';
            else if(str[i]=='b')
            {
                F='A';
            }
            break;
            case 'B':
            if(str[i]='a')
            F='B';
            else if(str[i]='b')
            F='C';
            break;
            case 'C':
            if(str[i]=='a')
            F='D';
            else if(str[i]=='b')
            F='A';
            break;
            case 'D':
            if(str[i]=='a')
            F='B';
            else if(str[i]=='b')
            F='C';
        }
    }
    if(F=='D')
    printf("string is accepted\n");
    else 
    printf("string is not accepted\n");
    return 0;
}