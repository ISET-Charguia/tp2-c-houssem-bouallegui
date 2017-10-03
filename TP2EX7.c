#include <stdio.h>

int main()

{

	char c ;

	printf("donner un caractére");

	scanf("%c",&c);

	if((c>="A")&&(c<="Z"))

	{	printf("c'est un caractere alphabetique majuscule");}

	else if((c>="a")&&(c<="z"))

		{printf("c'est caractere alphabetique minuscule");}



	else if((c>="0")&&(c<="9"))

	{	printf("c'est un chiffre");}

			else

				printf("c'est un symbole");
  return 0;
}
