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

void spaces(int symbols) {
    for (int i = 0; i < (symbols); i++) {
        std::cout << " ";
    }
}

void stars(int symbols, char symbol) {
    for (int i = 0; i < symbols*2-1; i++) {
        std::cout << symbol;
    }
}

int main()
{
    setlocale(LC_ALL, "RU");
    std::cout << "Введите количетсво пирамидок: " << std::endl;
    unsigned int pyramides = 0;
    std::cin >> pyramides;
    pyramides = intCheck(pyramides);
    pyramides++;
    std::cout << "Введите символ для заполнения: " << std::endl;
    char symbol{ '*' };
    std::cin >> symbol;
    for (int i = 0; i < pyramides; i++) {
        for (int j = 0; j < pyramides-1; j++) {
            spaces(pyramides - i);
            stars(i, symbol);
            spaces(pyramides - i);
        }
        std::cout << std::endl;
    }
    return 0;
}
