#include <stdio.h>

int main()

{

	char c ;

	printf("donner un caractére \n");

	scanf("%c",&c);

	if((c>="A")&&(c<="Z"))

	{	printf("c'est un caractere alphabetique majuscule \n");}

	else if((c>="a")&&(c<="z"))

		{printf("c'est caractere alphabetique minuscule \n");}



	else if((c>="0")&&(c<="9"))

	{	printf("c'est un chiffre \n");}

			else

				printf("c'est un symbole \n");
  return 0;
}
