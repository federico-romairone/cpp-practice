#include <iostream>
#include <ctime>

#define UPPER 10

int main() {
    int guess, num;
    bool stop = false;

    srand(time(0));
    do {
        std::cout << "Type a number between 1 and " << UPPER << " (out of bound to exit):\n>> ";
        std::cin >> guess;
        if (guess < 1 || guess > UPPER) stop = true;
        else {
            num = rand() % UPPER + 1;
            if (num == guess) std::cout << "You nailed it!" << std::endl;
            else std::cout << "You failed, the correct answer was " << num << std::endl;
        }
    } while (!stop);
    std::cout << "Closing program..." << std::endl;

    return 0;
}