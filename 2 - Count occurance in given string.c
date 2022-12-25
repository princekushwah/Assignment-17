#include<stdio.h>
int main()
{
  char a[]="Ashish";
  char b[123]={0};
  int i,length=0;
  for(i=0;a[i]!='\0';i++)
  {
      b[a[i]]++;
  }
  for(i=0;i<123;i++)
  {
      if(b[i]==2)
      {
          printf("%c ---> %d \n",i,b[i]);
         // break;
      }
  }

}
