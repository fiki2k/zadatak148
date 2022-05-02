// Program treba sortirat silazno brojeve koristeci pokazivace.

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int *p,*q,i=1,j,k,temp;  //q for storing address of 1st number
 printf("Unesi brojeve(-1 za kraj unosa) :: \n");

 printf("\nUnesi %d broj : ",i);
 p=(int*)malloc(sizeof(int));
 scanf("%d",&p[0]);

 while(p[i-1]!=-1) //citaj dok -1 nije unesen
 {
  i++;

  p=(int*)realloc(p,sizeof(int)*i);
  q=p;
  printf("\nUnesi %d broj : ",i);
  scanf("%d",&p[i-1]);
 }

 p=q;

 //sortiranje pomocu bubble sort
 for(j=1;j<i;++j)
 {
  for(k=0;k<i-j-1;++k)
  {
   if(p[k]<p[k+1])
   {
    temp=p[k];
    p[k]=p[k+1];
    p[k+1]=temp;
   }
  }
 }

 printf("\n");

 printf("\nNakon Sortiranja, Brojevi su : ");
 for(j=0;j<i-1;++j)
 {
  printf(" %d",p[j]);
 }

 printf("\n");

 return 0;
}
