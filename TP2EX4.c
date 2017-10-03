#include <stdio.h>

#include <math.h>

int main()

{

	int a;

	printf("donner une anne");

	scanf("%d",&a);

	if(a%4==0)
   {
    printf("%d est bissxctil",a);
   }

	else
   { 
    printf("%d est non bissxtil",a);
   }
  return 0;
}
