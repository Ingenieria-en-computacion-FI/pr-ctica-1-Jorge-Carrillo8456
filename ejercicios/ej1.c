#include <stdio.h> 

int main() {
    int a[6];
    for(int i = 0; i < 6; i++ ){
        printf("El elemento a[%d] tiene la direccion : %x\n", i, &a[i]);
    }
    return 0; 
}
