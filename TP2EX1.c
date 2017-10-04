/*
 ============================================================================
 Name        : TP2ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include<stdio.h>
int main ()
 {
   int x;
   printf ("donner un entier \n");
   scanf("%d",&x);
   if(x%3==0)
   {
	  printf("%d est devisible par 3",x);
   }
	 else
	 {
		printf("%d n'est pas divésible par 3",x);
	 }
  return 0;
}
