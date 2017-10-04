#include <stdio.h>

#include <math.h>

int main()

{

	int a;

	printf("donner une année \n");

	scanf("%d",&a);

	if(a%4==0)
   {
    printf("%d est bissexctil \n",a);
   }

	else
   { 
    printf("%d est non bissextil \n",a);
   }
  return 0;
}
