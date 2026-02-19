//Declara:
//int a[6];

//1. Imprime direcciones de todos los elementos.
//2. Calcula diferencia entre direcciones consecutivas.
//3. Escribe fórmula general para dirección de a[i].
#include <stdio.h> 

int main() {
    int a[6];
    for(int i = 0; i < 6; i++ ){
        printf("El elemento a[%d] tiene la direccion : %x\n", i, &a[i]);
    }
    return 0; 
}
