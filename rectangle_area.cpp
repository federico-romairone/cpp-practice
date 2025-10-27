#include <iostream>
#define DEFAULT_H 30

// trying overload

int compute_area(int b) {
    return b*DEFAULT_H;
}

int compute_area(int b, int h) {
    return b*h;
}

int main() {
    int b, h;
    
    std::cout << "Base: ";
    std::cin >> b;
    std::cout << "Area (default h is " << DEFAULT_H << ") = " << compute_area(b) << std::endl;

    std::cout << "Altezza: "; 
    std::cin >> h;
    std::cout << "Area = " << compute_area(b, h) << std::endl;

    return 0;
}