#include <stdio.h>
#include <math.h>

 int main()

 {

  float min,max,a,b,c;

 printf("taper les troi variables:");

 scanf("%f" "%f" "%f",&a,%b,%c);
 
 max=a;

 min=a;

 if (max<b)
 {
	 max=b;
 }
 if (max<c)
 {
	 max=c;
 }
 if (min>b)
 {
	 min=b;
 }
 if (min>c)
 {
	 min=c;
 }
 printf("le max est %f et le min est %f",&max,&min);
 
 return 0;
}
