#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int multiplication(int x, int y)
{
	return x*y;
}

main()
{
	int x;
	x = 0xAB78;
	/*printf("Input a character");
	int ch = getchar();
        for (; ch!='q'?1:0;)
		printf("Enter a character");
		ch = getchar();
	*/

	/* while (x <= 3)
		{printf("The start of iteration %d of the outer loop. \n.", x);
		int y = 1;
		do {
		printf("%-8c The start of iteration %d of the inner loop. \n.",' ', y);
		y++;
		}while (y <= 4);
		x++;
		printf("The end of iteration %d of the outer loop. \n.", x);
		} */

	unsigned int y = 0xAB78; 
	printf("The result of x in decimal is %d and in hexdecimal is %u\n",x,x);
	printf("The result of y in decimal is %d and in hexdecimal is %u\n",y,y);	
	signed int i = 7000;
	signed int j = 12000;
	int k = -23456;
	float angel = 30 * 3.14/180;
	/*float sin_value = sin(angel);
	float tan_value = tan(angel);*/
	printf("The result of i x j is %ld\n",i*j);
	printf("The hex value of -120 is 0x%X and the signed int value is %d\n.",k,k);
	//printf("The sine value of 30 is %f and the tan value is %f\n.",sin_value,tan_value);
	/*printf("The result of x >> y is %u\n",i >> j);*/
	printf("The result of short int is %d\n",sizeof(short int));
	printf("The result of long int is %d\n",sizeof(long int));
	printf("The result of long double is %d\n",sizeof(long double));
	float fahr, celsius; 
 	float lower, upper, step; 
 	lower = 0; /* lower limit of temperatuire scale */ 
 	upper = 300; /* upper limit 		*/ 
 	step = 20; /* step size */ 
 	celsius = lower; 
	printf("Celcius   Fahrenheit\n");
 	while (celsius <= upper) {	 
 	fahr = (9.0/5.0) * celsius+32.0; 
 	printf("%8.0f %6.1f\n", celsius, fahr); 
 	celsius = celsius + step; 
 	} 
	return 0;
}
