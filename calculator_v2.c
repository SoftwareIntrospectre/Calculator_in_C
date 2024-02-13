#include <stdio.h>

int Add(int firstOperand, int secondOperand){
    int sumOperands = firstOperand + secondOperand;
    printf("%d\n", sumOperands);
    return sumOperands;
}

int Subtract(int firstOperand, int secondOperand){
    int differenceOperands = firstOperand - secondOperand;
    printf("%d\n", differenceOperands);
    return differenceOperands;
}

int Multiply(int firstOperand, int secondOperand){
    int productOperand = firstOperand * secondOperand;
    printf("%d\n", productOperand);
    return productOperand;
}

float Divide(int firstOperand, int secondOperand){
    if(secondOperand == 0){
        printf("Cannot divide by zero.\n");
        return 0;
    }

    float quotientOperands = firstOperand / secondOperand;
    printf("%f\n", quotientOperands);
    return quotientOperands;
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

        default: return 0.0;
    }
}


int main(){
    Calculate('+', 1, 2);
    Calculate('-', 1, 2);
    Calculate('*', 6, 2);
    Calculate('/', 9, 0);

    return 0;
}