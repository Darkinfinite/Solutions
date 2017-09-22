#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first = 0;
    int second = 1;
    int terms = 50;
    int sum = 0;
    int i;
    int values[terms];
    int values2[terms];
    int index = 0;
    int total = 0;
    int total2 = 0;

    for(i = 0; i < terms; i++){
        sum = first + second;
        first = second;
        second = sum;
        if(second > 4000000){
            break;
        }
        if(i % 2 == 0){
            values[index] = second;
            total += values[index];
            index++;
        }
        if(second % 2 == 0){
            values2[index] = second;
            total2 += values[index];
            index++;
        }
        printf("i: %d  value: %d\n", i, second);
    }
    for(i = 0; i < index; i++){
        printf("Values even terms: %d\n", values[i]);
        printf("Even values: %d\n", values2[i]);
    }
    printf("Sum of all even values = %d", total);
    return 0;
}
