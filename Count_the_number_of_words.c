#include<stdio.h>
#include<string.h>
main()
{
    char a[10];
    int c,i,l;
    printf("enter a string\n");
    gets(a);
    strcat(" ",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]==' ' && a[i+1]!=' ')
        c++;
    }
    printf("the number of words are %d",c);
}
