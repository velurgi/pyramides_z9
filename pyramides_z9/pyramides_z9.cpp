//Пирамидки
#include <iostream>

int intCheck(int integer) { 
    while (std::cin.fail() || integer < 0) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Ошибка, вы должны ввести целое неотрицательное число." << std::endl << "Введите ещё раз: " << std::endl;
        std::cin >> integer;
    }
    return integer;
}

int main()
{
    std::cout << "Введите количетсво пирамидок: " << std::endl;
    unsigned int n = 0;
    n = intCheck(n);

    return 0;
}
