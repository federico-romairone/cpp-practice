#include <iostream>

int main() {
    // If-else statement
    int score = 85;
    std::cout << "Score: " << score << std::endl;
    
    if (score >= 90) {
        std::cout << "Grade: A" << std::endl;
    } else if (score >= 80) {
        std::cout << "Grade: B" << std::endl;
    } else if (score >= 70) {
        std::cout << "Grade: C" << std::endl;
    } else {
        std::cout << "Grade: F" << std::endl;
    }
    
    // For loop
    std::cout << "\nCounting from 1 to 5:" << std::endl;
    for (int i = 1; i <= 5; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    // While loop
    std::cout << "\nCounting down from 5 to 1:" << std::endl;
    int countdown = 5;
    while (countdown > 0) {
        std::cout << countdown << " ";
        countdown--;
    }
    std::cout << std::endl;
    
    // Switch statement
    char operation = '+';
    std::cout << "\nOperation: " << operation << std::endl;
    
    switch (operation) {
        case '+':
            std::cout << "Addition selected" << std::endl;
            break;
        case '-':
            std::cout << "Subtraction selected" << std::endl;
            break;
        case '*':
            std::cout << "Multiplication selected" << std::endl;
            break;
        case '/':
            std::cout << "Division selected" << std::endl;
            break;
        default:
            std::cout << "Unknown operation" << std::endl;
    }
    
    return 0;
}
