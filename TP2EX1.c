#include<stdio.h>
int main ()
 {
   int x;
   printf ("donner un entier");
   scanf("%d",&x);
   if(x%3==0)
   {
	  printf("cet entier est devisible par 3");
   }
	 else
	 {
		printf("cet entier n'est pas devisible par 3");
	 }
  return 0;
}
