//Stella Aragão Araújo
//11721ETE014
#include <stdio.h>
#include <locale.h>


int main()
{
	int x , i, cod[64], *numeros;
	char msg[256], *mensagem;

	for(i = 0; i < 256; i++) msg[i] = '\0';
	printf("\t1. Codificar\n\t2. Decodificar\n\n\t");
	scanf("%d",&x);
	getchar();

	switch(x)
	{

		case 1:{
			printf("\n\tDigite uma frase (ate 255 caracteres): \n\t");
			scanf("%s", msg);
			char *mensagem= msg;
			printf("\n\tFrase codificada:\n\t");

			for(i = 0; msg[i] ;i++)
			{
				numeros = (int*)mensagem;
				if(numeros[i]!= 0) printf("%d",numeros[i]);
				if(numeros[i+1]!= 0) printf(", ");}
			break;
		}

		case 2:
		{
			printf("\t\nDigite os numeros (max.=64), (ultimo numero >=1 e <=4095).\n   \t\t Para finalizar a entrada digite 0\n\n");

			for(i = 0; i < 64; i++)
			 {
				printf("n%d:\t ", i+1);
				scanf("%d", &cod[i]);
				mensagem = (char*)cod;
				if(cod[i]==0)
				break;
			 }

			 printf("\n\n\tFrase decodificada: %s", mensagem);
	    }

	}
	return 0;
}
