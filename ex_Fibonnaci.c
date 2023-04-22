#include <stdio.h>


int main(){
    int fibo , n1 = 0, n2 = 1, auxiliar;
    int i = 0;
   

    printf("Informe o numero de elementos para a sequencia: ");
    scanf("%d", &fibo); 
    printf("\nSequencia de Fibonacci: %d %d ",n1,n2);

    for ( i = 0; i < fibo - 2; i++) {
        auxiliar = n1 + n2;
        n1 = n2;
        n2 = auxiliar;

        printf("%d ",auxiliar);
    }

    return 0;
}