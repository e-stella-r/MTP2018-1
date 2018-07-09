//Stella Aragão Araújo 11721ETE014
#include<stdio.h>

int main ()
{
	
int operacao, s, num=0, bin;

char bits[256];

       printf("Conversor de numeros :\n\n");
       printf("1) Binario converte para Decimal;\n");
       printf("2) Decimal converte para Octal.\n");
       printf("3) Binario converte para Hexadecimal;\n");
       printf("4) Hexadecimal converte para Decimal;\n");
       printf("5) Hexadecimal converte para Binario;\n");
       printf("6) Decimal converte para Binario;\n");
       printf("7) Decimal converte para Hexadecimal;\n");
       printf("8) Octal converte para Decimal;\n");
       printf("9) Decimal converte para Octal.\n");
       printf("\nSua escolha foi a: ");
       scanf("%d", &operacao);	getchar();
if(operacao==1){
	   scanf("%s", bits); getchar();
	for(s=0; bits[s] != '\0'; s++)
	   num = num*2 + (bits[s] - '0');	
	   printf("%d", num);
}else if(operacao==2){
	   scanf("%s", bits); getchar();
	for(s=0; bits[s] != '\0'; s++)
	   num = num*2 + (bits[s] - '0');	
	   printf("%x", num);
}else if(operacao==3){
       scanf("%x", &num); getchar();
	   printf("%d", num);
}else if(operacao==4){
	   scanf("%x", &num); getchar();
	for(bin = 0; num >= (1 << bin); bin++){
	}	
	char binario[bin];
	for(s=0; s<bin; s++){
		if(num%2==0){
			binario[s]=0;
		}else{
			binario[s]=1;
		}
		num=num/2;
	}
	for(s=bin-1; s>=0; s--){
		printf("%i", binario[s]);
	}
}else if(operacao==5){
	   scanf("%d", &num); getchar();
	for(bin = 0; num >= (1 << bin); bin++){
	}	
	char binario[bin];
	for(s=0; s<bin; s++){
		if(num%2==0){
			binario[s]=0;
		}else{
			binario[s]=1;
		}
		num=num/2;
	}
	for(s=bin-1; s>=0; s--){
		printf("%i", binario[s]);
	}
}else if(operacao==6){
    	scanf("%d", &num); getchar();
    	printf("%x", num);
}else if(operacao==7){
	    scanf("%o", &num); getchar();
	    printf("%d", num);
}else if(operacao==8){
	    scanf("%d", &num); getchar();
	    printf("%o", num);
}

	return 0;
}
