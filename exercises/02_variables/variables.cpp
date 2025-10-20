#include <iostream>
#include <string>

int main() {
    // Integer types
    int age = 25;
    long population = 7800000000L;
    
    // Floating point types
    float pi = 3.14f;
    double precise_pi = 3.14159265359;
    
    // Character and string types
    char grade = 'A';
    std::string name = "C++ Learner";
    
    // Boolean type
    bool is_learning = true;
    
    // Display variables
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Pi (float): " << pi << std::endl;
    std::cout << "Pi (double): " << precise_pi << std::endl;
    std::cout << "World Population: " << population << std::endl;
    std::cout << "Is Learning: " << (is_learning ? "Yes" : "No") << std::endl;
    
    return 0;
}
