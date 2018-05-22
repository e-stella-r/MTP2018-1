//Stella Aragão Araújo 11721ETE014

#include <stdio.h>

int main ()
{
	int x, i, number [64], *num;
	char mensagem[256], *msg;
	for (i=0;i<256; i++)
	mensagem[i]='\0';
	printf("\tCodificar\n\tDecodificar\n\tEscolha uma:");
	scanf("%d",&x);
	getchar();
	switch(x) {
		case 1:{
			printf("Digite a frase com maximo de 255 caracteres:\n\n\t");
			gets(mensagem);
			char*msg=mensagem;
			printf("\n\t A frase codificada eh: \n\t\t");;
			for(i=0;mensagem[i]; i++){
				num=(int*) msg;
				if (num[i]!=0)
				printf("%d,",num[i]);
				if (num[i+1]!=0)
				printf(",");}
				break;
			}
			case 2:
				{
					printf("\t Digite os numeros com maximo de 64, sendo o ultimo(64) entre 1 e ""4095!!! \n \t obs: Apos inserir o numero digite 0 \n\n");
					for (i=0; i<64; i++)
					{
						printf("\t\n %d: \t", i+1);
						scanf("%d", &number[i]);
						msg = (char*)number;
						if(number[i]==0)
						break;
					}
					printf("\n\n\t A frase decodificada eh: %s", msg);
				}
		}
		return 0;
	}
