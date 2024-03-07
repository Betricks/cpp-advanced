#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>



uint64_t sum(uint16_t x){
    printf("x: %d adress of x: %p\n", x, &x);

    if (x <= 1) return x;

    return (sum(x - 1) + x);
}



int main(void){
    char a = 'H';
    char b = 'i';

    printf("address of a: %p\n", &a);
    printf("address of b: %p\n", &b);

    uint16_t a = 1; // it takes 2 bytes of memory.
    uint16_t b = 2;

    printf("Address of a: %p\n", &a);
    printf("Address of b: %p\n", &b);

    double a = 18.2;
    double b = 10.23;

    printf("Address of a: %p\n", &a);
    printf("Address of b: %p\n", &b);

    printf("sum of 3:  %lu\n", sum(32));

    char name = 'i';
    printf("adress of name: %p\n", &name);
    printf("derefrencing the address of name: %c\n", *&name);

    int numbers[] = {10, 20, 30, 40, 50};
    int index = 5;
    
    if (index == 0){ 
        printf("%d\n", *numbers); 
    }else
        printf("%d\n", *(numbers + index));
    
    exit(0);

}
