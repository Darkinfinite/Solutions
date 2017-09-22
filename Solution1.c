#include<stdio.h>
int main(){

    int sum = 0;
    int n1 = 3;
    int n2 = 5;

    int i;
    int index = 0;
    int amount;
    printf("Enter a number above 0: ");
    scanf("%d", &amount);
    int values[amount];

    for(i = 1; i < amount; i++){
        if(i % n1 == 0 | i % n2 == 0){
            sum += i;
            values[index] = i;
            index++;
        }
    }
    printf("The sum of the multiples is: %d\n", sum);
    printf("The multiples are: ");

    for(i = 0; i < index; i++){
        printf("%d ", values[i]);
    }
    printf("\nAmount of numbers: %d", index);
    return 0;
}
