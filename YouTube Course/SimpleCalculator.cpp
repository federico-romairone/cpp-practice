#include <iostream>
#include <cmath>
#include <string>

std::string operators = "+-/*%";

void printMenu() {
    std::cout << "\nOperations: " << std::endl;
    for (char *c = &(operators[0]); *c != '\0'; c++) std::cout << "> " << *c << std::endl;
    std::cout << "Each other three inputs will stop the program.\n";
}

void readInput(char *cmd, double *a, double *b) {
    std::cout << "Command <operator> <operand1> <operand2>:\n>> ";
    std::cin >> *cmd;
    std::cin >> *a;
    std::cin >> *b;
}

double handleOperation(char cmd, double a, double b, bool *stop) {
    double res = 0;

    switch (cmd) {
        case '+': res = a+b; break;
        case '-': res = a-b; break;
        case '/': 
            if (b != 0) res = a/b;
            else std::cout << "Error: division by zero." << std::endl;
            break;
        case '*': res = a*b; break;
        case '%': 
            std::cout << "Casting from " << a << " (double) to " << (int)a << " (int)" << std::endl; 
            std::cout << "Casting from " << b << " (double) to " << (int)b << " (int)" << std::endl; 
            res = ((int)a)%((int)b);
            break;
        default: *stop = true;
    }

    return res;
}

int main() {
    char cmd;
    double a, b, result;
    bool stop = false;

    printMenu();
    readInput(&cmd, &a, &b);
    result = handleOperation(cmd, a, b, &stop);
    while (!stop) {
        std::cout << "Result: " << result << std::endl;
        printMenu();
        readInput(&cmd, &a, &b);
        result = handleOperation(cmd, a, b, &stop);   
    }

    std::cout << "Closing program..." << std::endl;
    
    return 0;
}