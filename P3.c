//Stella Aragão Araújo 
//11721ETE014
#include <stdio.h>


void bits(unsigned int num, int s)

{

	if(s != 0)
	{
	bits(num/2, s-1);
	printf("%d", (num % 2));
	}
}

int main()
{
	int z , x, y, resultado;
	printf(" 1 = NOT \n 2 = AND \n 3 = OR \n 4 = XOR \n 5 = Right Shift \n 6 = Left Shift");
	printf("\n\n Escolha uma das opcoes: ");
	scanf("%d", &z);
	switch(z)
	{

		case 1:

			printf("\n Digite o numero: ");
			scanf("%d", &x);
			getchar();
			printf("\n ARGUMENTO NOT %d", x);
			printf("[");
			bits(x, 32);
			printf("]");
			resultado=~x;
			printf(" : %d", resultado);
			printf("[");
			bits(resultado, 32);
			printf("]");
			break;



		case 2:

			printf("\n Digite o numero: ");
			scanf("%d", &x);
			getchar();
			printf(" Digite o segundo numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x );
			printf("[");
			bits(x, 32);
			printf("]");
			printf(" ARGUMENTO AND %d", y);
			printf("[");
			bits(y, 32);
			printf("]");
			resultado=x&y;
			printf(" : %d", resultado);
			printf("[");
			bits(resultado, 32);
			printf("]");
			break;

		case 3:

			printf("\n Digite o numero: ");
			scanf("%d", &x);
			getchar();
			printf(" Digite o segundo numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("[");
			bits(x, 32);
			printf("]");
			printf(" ARGUMENTO OR %d", y);
			printf("[");
			bits(y, 32);
			printf("]");
			resultado=x|y;
			printf(" : %d", resultado);
			printf("[");
			bits(resultado, 32);
			printf("]");
			break;

		case 4:

			printf("\n Digite o numero: ");
			scanf("%d", &x);
			getchar();
			printf(" Digite o segundo numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("[");
			bits(x, 32);
			printf("]");
			printf(" ARGUMENTO XOR %d", y);
			printf("[");
			bits(y, 32);
			printf("]");
			resultado=x^y;
			printf(" : %d", resultado);
			printf("[");
			bits(resultado, 32);
			printf("]");
			break;

		case 5:

			printf("\n Digite o numero: ");
			scanf("%d", &x);
			getchar();
			printf(" Digite o segundo numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("[");
			bits(x, 32);
			printf("]");
			printf(" ARGUMENTO RIGHT SHIFT >> %d", y);
			printf("[");
			bits(y, 32);
			printf("]");
			resultado=x>>y;
			printf(" : %d", resultado);
			printf("[");
			bits(resultado, 32);
			printf("]");
			break;

		case 6:

			printf("\n Digite o numero: ");
			scanf("%d", &x);
			getchar();
			printf(" Digite o segundo numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("[");
			bits(x, 32);
			printf("]");
			printf(" ARGUMENTO LEFT SHIFT << %d", y);
			printf("[");
			bits(y, 32);
			printf("]");
			resultado=x<<y;
			printf(" : %d", resultado);
			printf("[");
			bits(resultado, 32);
			printf("]");
			break;
	}
	getchar();
	return 0;
}
