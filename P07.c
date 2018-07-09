//Stella Aragão Araújo 11721ETE014
#include <stdio.h>

int ackerman(int m, int n)
{
	if(m==0) return n + 1;
	else if(m>0 && n==0) return ackerman(m-1, 1);
	else if(m>0 && n>0)  return ackerman(m-1,ackerman(m, n-1));
  	return 0;
}

int main(){
	int i, j;
		printf("Digite o valor desejado de m:\n>");
		scanf("%d",&i);
		printf("Digite o valor desejado de n:\n>");
		scanf("%d",&j);
		printf("Ackermann Function: (%d, %d) = %d\n", i, j, ackerman(i,j));
	return 0; 
}

