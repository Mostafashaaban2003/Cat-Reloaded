#include <stdio.h>
#define NUMBER_OF_INT_BITS 32
int main() {
    int input;
    int number_of_int_bits = 32;
    int zero_bit = 0;
    int one_bit = 0;
    printf("Enter any number: ");
    scanf("%d", &input);
    while(number_of_int_bits--){
        if(input&(1<<number_of_int_bits)){
            one_bit++;
        }
        else{
            zero_bit++;
        }
    }
    printf("Total zero bit is %d\n", zero_bit);
    printf("Total one bit is %d", one_bit);

}