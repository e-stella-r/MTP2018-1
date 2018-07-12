//Stella Aragão Araújo
//11721ETE014
#include <stdio.h>

 int main ()
{
int posi = 0;
int est = 0;
char v[256];

  printf ("Declare o numero desejado (em binario): ");
scanf ("%s", &v[posi]);

while (v[posi] != '\0')
    {

if (v[posi] != '0' && v[posi] != '1')
	{
printf ("Esta errado digite novamente :(");
	  return 1;
	}

if (est == 0 && v[posi] == '0')
	{

est = 0;}

      else if (est == 0 && v[posi] == '1')
	{

        est = 1;
	}

      else if (est == 1 && v[posi] == '0')
	{

        est = 2;
	}

      else if (est == 2 && v[posi] == '1')
	{

        est = est;
	}

      else if (est == 2 && v[posi] == '0')
	{

        est = 1;
	}

      else if (est == 1 && v[posi] == '1')
	{

        est= 0;
	}

      else
	{

        est=est;

}

posi++;
    }


printf ("A sequencia original e: %s", v);

printf ("\nO estado e =%d\n", est);

 if (est == 0)
 {
     printf("E multiplo de 3\n");
 }
 else
 {
     printf("Nao e multiplo de 3");
 }

return 0;
}
