#include<stdio.h>
int main()
{
  char a[]="Ashish";
  char b[200]={0};
  int i;
  for(i=0;a[i]!='\0';i++)
  {
      b[a[i]]++;
  }
  for(i=0;i<200;i++)
  {
      if(b[i]>0)
      {
          printf("%c ---> %d \n",i,b[i]);
      }
  }

}
