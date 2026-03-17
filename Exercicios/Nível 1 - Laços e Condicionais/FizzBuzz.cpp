#include <iostream>

int main() {

    std::string txt;

    for (int i = 1; i <= 100; i++){

        if (i % 5 == 0 && i % 3 == 0) {
            txt = "FizzBuzz\n";

        }
        else if (i % 5 == 0) {
            txt = "Buzz\n";

        }
        else if (i % 3 == 0) {
            txt = "Fizz\n";

        }else {
            std::cout << i << std::endl;
            continue;
        }
        
        std::cout << i << " - " << txt;
    }

    system("Pause");
    return 0;
}