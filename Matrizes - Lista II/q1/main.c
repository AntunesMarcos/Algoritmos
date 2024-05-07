#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lista[2][4], ta[4][2];

    for(int cont = 0; cont < 2; cont++){
        for(int quant = 0; quant < 4; quant++){
            printf("Informe um numero: ");
            scanf("%i", &lista[cont][quant]);
            ta[quant][cont] = lista[cont][quant];
        }
    }
    for(int cont = 0; cont < 2; cont++){
        for(int quant = 0; quant < 4; quant++){
            printf("%i", lista[cont][quant]);
        }
        printf("\n");
    }
printf("\n");

    for(int cont = 0; cont < 4; cont++){
        for(int quant = 0; quant < 2; quant++){
            printf("%i", ta[cont][quant]);
        }
        printf("\n");
    }
    return 0;
}
