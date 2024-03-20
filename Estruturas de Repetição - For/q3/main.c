#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    for(int f = 50; f <= 100; f+=5){
        c = (5.0/9.0) * (f - 32);
        printf("\nFarenheit: %d\nCentigrados: %.2f ", f, c);
    }
    return 0;
}
