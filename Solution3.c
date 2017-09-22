#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool primeNumber(unsigned long int number){
        int index;
        for(index = 2; index < sqrt(number); index++){
            if(number % index == 0){
                return false;
            }
        }
        return true;
}
int main()
{
    unsigned long int prime;
    scanf("%lu", &prime);
    int i;
    int highest = 0;

    for(i = 2; i < 100; i++){
        if(prime % i == 0){
            if(primeNumber(i)){
                highest = i;
            }

        }
    }
    printf("%d", highest);

    return 0;
}
