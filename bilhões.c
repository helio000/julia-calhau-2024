#include <stdio.h>
#include <locale.h>
int main (){
    setlocale (LC_ALL,"");
    int x, y;
    printf("Digite números inteiros:");
    scanf ("%d %d", &x, &y);
    printf("O numero %d multiplicado por 4 bilhões é %d", x, x * 2000000000);
    printf("o numero %d multiplicado por 4 bilhões é %d", y, y * 2000000000);
    return 0;
} 
