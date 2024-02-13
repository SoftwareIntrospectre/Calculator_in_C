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

int main(){
    // Add(1,2);
    // Subtract(1,2);
    // Multiply(12,12);
    // Divide(1,0);
    // Divide(10,5);
    // Divide(5,12);    

    int sum = Add(12,12);
    printf("%d ---> sum\n", sum);
    int difference = Subtract(19, sum);
    printf("%d ---> difference\n", difference);
    int product = sum * difference;
    printf("%d ---> product\n", product);
    float quotient = product / product;
    printf("%f ---> quotient\n", quotient);

    printf("-----------\n");
    printf("%d = sum\n", sum);
    printf("%d = difference\n", difference);
    printf("%d = product\n", product);
    printf("%f = quotient\n", quotient);

    return 0;
}