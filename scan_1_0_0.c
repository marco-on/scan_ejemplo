#include <stdio.h>
#define MAX_ARR 10

int main (void)
{
	char valores1[MAX_ARR];
	printf("usuario, por favor ingrese los valores con el siguiente formato v;v1;..\n");
	scanf ("%s", valores1);
	printf("los valores ingresados son: %s\n",valores1);
}
