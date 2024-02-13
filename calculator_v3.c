#include <stdio.h>

int Add(int firstOperand, int secondOperand){
    int sum = firstOperand + secondOperand;
    printf("Addition: Sum of %d and %d is %d\n", firstOperand, secondOperand, sum);
    return sum;
}

int Subtract(int firstOperand, int secondOperand){
    int difference = firstOperand - secondOperand;
    printf("Multiplication: Product of %d and %d is %d\n", firstOperand, secondOperand, difference);
    return difference;
}

int Multiply(int firstOperand, int secondOperand){
    int product= firstOperand * secondOperand;
    printf("Multiplication: Product of %d and %d is %d\n", firstOperand, secondOperand, product);
    return product;
}

float Divide(int firstOperand, int secondOperand){
    if(secondOperand == 0){
        printf("Division: Cannot divide %d by %d. This is a divide by zero error.\n", firstOperand, secondOperand);
        return 0;
    }

    float quotient = (float)firstOperand / (float)secondOperand;
    printf("Division: Quotient of %d and %d is %f\n", firstOperand, secondOperand, quotient);
    return quotient;
}

float Calculate(char operation, int firstOperand, int secondOperand){
    switch(operation){
        case '+':
            return Add(firstOperand, secondOperand);

        case '-': 
            return Subtract(firstOperand, secondOperand);

        case '*': 
            return Multiply(firstOperand, secondOperand);

        case '/': 
            return Divide(firstOperand, secondOperand);

        default: 
            printf("Invalid operation.\n");
            return 0.0;
    }
}

int main(){

    char validCalculations[] = {'+','-','*','/'};
    printf("Select one of the following operations\n Addition: +\n Subtraction: -\n Multiplication: *\n Division: / \n");
    char calculationType;
    scanf("%c", &calculationType);

    printf("Plase select the first whole number to calculate.\n");
    int firstOperand;
    scanf("%d", &firstOperand);

    printf("Plase select the second whole number to calculate.\n");
    int secondOperand;
    scanf("%d", &secondOperand);

    Calculate(calculationType, firstOperand, secondOperand);

    return 0;
}