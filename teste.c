#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, j, i;
    
    printf("Entre com um n maior que 0: ");
    scanf("%d", &n);

    printf("Entre com J > 0 e i > 0: ");
    scanf("%d %d", &j, &i);

    if (n % j == 0 || n % i == 0) {
        printf("%d\n", n);
    }



    return 0;
} 