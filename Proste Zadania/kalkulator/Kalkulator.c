#include <stdio.h>
#include <string.h>


int calculate(char operation[]);
int main()
{
    char math_operation[20];

    printf("Give the mathematical operation: \n");
    scanf("%s", math_operation);
    printf("The result of %s = %d",math_operation,calculate(math_operation));

    return 0;
}

int calculate(char operation[]){
    int numbers[2], i=0, j=0;
    char sign = NULL;

    while(operation[i] != NULL){
        if(operation[i]>47 && operation[i]<58){
            numbers[j] = (int)operation[i] - 48;
            j++;
        }else if(operation[i] == 42 || operation[i] == 43 || operation[i] || 45 || operation[i] == 47 ){
            sign = operation[i];
        }
        i++;    
    }

    if(sign == NULL){
        printf("Not an equasion !!");
        return -1;
    }else{
        switch (sign)
        {
        case '*':
            return numbers[0] * numbers[1];
            break;
        case '+':
            return numbers[0] + numbers[1];
            break;
        case '-':
            return numbers[0] - numbers[1];
            break;        
        default:
            return numbers[0] / numbers[1];
            break;
        }
    }


}