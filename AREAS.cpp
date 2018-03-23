#include <stdio.h>
#include <math.h>
int main()
{
	float radio, altura, base, area1, area2;
	int x;
	printf("Pulsa 1 para calcular el area de un triangulo y 2 para la de un circulo.\n");
	scanf("%i",&x);
	switch (x)
	{
		case 1:
		printf("Introduce la altura y la base del triangulo:\n");
		scanf("%f %f",&altura, &base);
		area1=(base*altura)/2;
		printf("El area del triangulo es %.2f.\n", area1);
		break;
		case 2:
			printf("Introduce el radio del circulo:\n");
			scanf("%f",&radio);
			area2=(2*M_PI*pow(radio,2));
			printf("El area del circulo es %.2f.\n", area2);
			break;
					}
}

