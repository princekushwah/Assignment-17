#include<stdio.h>
int main()
{
    char a[]="Ashish";
    int i,j;
    char temp;
    for(i=0,j=strlen(a)-1;i<=j;i++,j--)
      {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
      }
      printf("%s",a);
    return 0;
}
