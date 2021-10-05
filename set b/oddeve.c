#include <stdio.h>
#include<string.h>

int main()
{
    char str[100],F='A';
    int i;
    printf("Enter a string:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        switch(F)
        {
            case 'A':
                if(str[i]=='a')
                    F='C';
                else if(str[i]=='b')
                    F='B';
                break;
            
            case 'B':
                if(str[i]=='a')
                    F='D';
                else if(str[i]=='b')
                    F='A';
                break;
            
            case 'C':
                if(str[i]=='a')
                    F='A';
                else if(str[i]=='b')
                    F='D';
                break;
            
            case 'D':
                if(str[i]=='a')
                    F='B';
                else if(str[i]=='b')
                    F='C';
                break;
        }
    }
    if(F=='B')
        printf("String is accepted.");
    else
        printf("string is not accepted.");
    return 0;
}