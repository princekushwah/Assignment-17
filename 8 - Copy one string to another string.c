#include<stdio.h>
int main()
{
    char a[]="Ashish kushwah";
    char b[100];
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    printf("%s",b);
    return 0;
}
