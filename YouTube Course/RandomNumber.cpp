#include <iostream>
#include <ctime>

#define UPPER 10

int main() {
    int num;

    srand(time(0));
    num = rand() % UPPER + 1;
    std::cout << num << std::endl;

    return 0;
}