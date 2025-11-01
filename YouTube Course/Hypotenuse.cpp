#include <iostream>
#include <cmath>

#define CAT_DEF 10

void handleErrorDouble(double *var, double defaultValue) {
    std::cout << "Error: invalid inpud, setting default value of " << CAT_DEF << std::endl;
    *var = defaultValue;
}

double hypotenuse(double a, double b) {
    return std::sqrt(a*a+b*b);
}

int main() {
    double c1, c2, h;

    std::cout << "Enter cathetus 1: ";
    std::cin >> c1;
    if (c1 <= 0) handleErrorDouble(&c1, CAT_DEF);
    std::cout << "Enter cathetus 2: ";
    std::cin >> c2;
    if (c2 <= 0) handleErrorDouble(&c1, CAT_DEF);

    h = hypotenuse(c1, c2);
    std::cout << "Hypotenuse: " << h << std::endl;

    return 0;
}