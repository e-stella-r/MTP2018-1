//Stella Aragão Araújo 11721ETE014
#include <stdio.h>

int main()
{
    int i=0, c=0;
	char bits[256];  
	scanf("%s", bits);
	getchar();
	
	while(bits[i])
	{
		if(bits[i] >= 48 && bits[i] <= 57) 
		{
			bits[i] = bits[i] - '0'; 	
			c=c*10+bits[i];
		}
		i++;
	}
	printf("O numero digitado e: %d", c);
	getchar();
	
	return 0;
}
