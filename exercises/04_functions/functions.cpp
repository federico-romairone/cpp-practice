#include <iostream>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

// Function to check if a number is even
bool is_even(int num) {
    return num % 2 == 0;
}

// Function to greet a person
void greet(const std::string& name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}

// Function with default parameters
double calculate_area(double length, double width = 1.0) {
    return length * width;
}

int main() {
    // Using addition function
    int sum = add(5, 3);
    std::cout << "5 + 3 = " << sum << std::endl;
    
    // Using multiplication function
    int product = multiply(4, 7);
    std::cout << "4 * 7 = " << product << std::endl;
    
    // Using is_even function
    int number = 10;
    if (is_even(number)) {
        std::cout << number << " is even" << std::endl;
    } else {
        std::cout << number << " is odd" << std::endl;
    }
    
    // Using greet function
    greet("C++ Developer");
    
    // Using function with default parameters
    std::cout << "Area of 5x3: " << calculate_area(5, 3) << std::endl;
    std::cout << "Area of 5x1 (default): " << calculate_area(5) << std::endl;
    
    return 0;
}
