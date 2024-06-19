#include<stdio.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    int c=0,s=0;
    int i=0;
    while(a[i]!='\0')
    {
        if(a[i]>=65 && a[i]<=90)
        {
            c++;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            s++;
        }
        i++;
    }
    printf("%d %d",c,s);
    return 0;
}