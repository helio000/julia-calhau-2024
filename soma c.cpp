#include <stdio.h>
int main(){
	//defini��o de variaveis
	int a, b, c, d, e;
	
	printf("digite tres numeros inteiro:/n");
	//entrada
	scanf("%d %d %d", &a, &b, &d);
	
	//processamento
     c = a + b;
     e = c * d;
	printf ("A soma de a + b = %d" , c);
	printf ("A multiplica��o de c *d =%d",e);
	return 0;
}
