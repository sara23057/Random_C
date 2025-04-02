#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicialitzar la llavor per a la generació de nombres aleatoris
    srand(time(NULL));
    
    // Generar un nombre aleatori
    int nombre_aleatori = rand();
    
    // Imprimir el nombre aleatori
    printf("Nombre aleatori: %d\n", nombre_aleatori);
    
    return 0;
}
