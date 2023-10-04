#include <iostream>
#include <cmath>

int main() {
    double a, b, h, x, y;

    std::cout << "Введіть початок відрізка (a): ";
    std::cin >> a;
    std::cout << "Введіть кінець відрізка (b): ";
    std::cin >> b;
    std::cout << "Введіть крок (h): ";
    std::cin >> h;

    std::cout << "-------------------\n";
    std::cout << ":  X  :  Y  :\n";
    std::cout << "-------------------\n";

    for (x = a; x <= b; x += h) {
        if (x != 4) {
            y = 1 / pow(x - 4, 2) + 6;
            std::cout << ": " << x << " : " << y << " :\n";
        } else {
            std::cout << "Значення x = 4 не належить області визначення функції.\n";
            break;
        }
    }

    std::cout << "-------------------\n";

    return 0;
}
