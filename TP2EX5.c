#include <stdio.h>

#include <math.h>

int main()

{

	int c,d,n,u;

	printf("donner un nombre inferieur à 999 : \n");

	scanf("%d",&n);

	if ((n<100))||(n>999)
  {
	 printf("erreur verifier le nombre entrer \n");
  }
	else
	{

		u= n%10;

		d= (n%100)/10;

		c= n/100;

		printf("%d/%d/%d",u,d,c);

	}
  return 0;
}
