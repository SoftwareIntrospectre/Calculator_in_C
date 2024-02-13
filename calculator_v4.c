//standard input library for C
#include <stdio.h>

//standard library for malloc() and free() --> used for memory management.
#include <stdlib.h>

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

char GetCalculationType(){
    char validCalculationTypes[] = {'+','-','*','/'};
    printf("Select one of the following operations\n Addition: +\n Subtraction: -\n Multiplication: *\n Division: / \n");
    char calculationType;
    scanf("%c", &calculationType);

    //loop through the array and compare it to the user input
    for(int currentIndex = 0; currentIndex < sizeof(validCalculationTypes); currentIndex++){
        if(validCalculationTypes[currentIndex] == calculationType){
            return calculationType;
        }
    }

    printf("Not a valid calculation type.\n");

    // Return a character indicating an invalid calculation type
    return 'N';  
}

int* GetOperandsForCaluation(){
    printf("Plase select the first whole number to calculate.\n");    
    //assigns a pointer with Memory Allocated for the size of the input integer
    int* inputFirstOperand = malloc(sizeof(int));
    scanf("%d", inputFirstOperand);
    
    printf("Plase select the second whole number to calculate.\n");
    int* inputSecondOperand = malloc(sizeof(int));
    scanf("%d", inputSecondOperand);

    // define an integer array with 2 indeces
    int* operandsArray = malloc(2 * sizeof(int));
    operandsArray[0] = *inputFirstOperand;
    operandsArray[1] = *inputSecondOperand;

    // free allocated memory used for those operands, since I don't need those variables' data anymore
    free(inputFirstOperand);
    free(inputSecondOperand);

    return operandsArray;
}

int main(){
    char calculationType = GetCalculationType();
    if(calculationType == 'N'){
        return 0;
    }

    int* operands = GetOperandsForCaluation();
    Calculate(calculationType, operands[0], operands[1]);

    //free allocated memory used for the array since the data is not needed anymore.
    free(operands);
    return 0;
}