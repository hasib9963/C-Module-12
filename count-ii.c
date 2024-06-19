#include<stdio.h>
int main()
{
    char a[1001],ch;
    scanf("%s",a);
    int vl=0;
    int i=0;
    while((ch=a[i])!='\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            vl++;
        }
        i++;
    }
    printf("%d",vl);
    return 0;
}