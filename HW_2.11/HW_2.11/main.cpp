//
//  main.cpp
//  HW_2.11
//
//  Created by Vladimir on 20.03.2023.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    setlocale(LC_ALL, "");
    
    double a;
    double b;
    char menu;
    
    while (true)
    {
        
        std::cout << "Выберете математическую операцию:\n";
        std::cout << "1. Сложение.\n";
        std::cout << "2. Вычитание.\n";
        std::cout << "3. Умножение.\n";
        std::cout << "4. Деление.\n";
        std::cout << "5. Факториал.\n";
        std::cout << "6. Возведение в степень.\n";
        std::cout << "q. Выход.\n";
        std::cin >> menu;
        
        {
            switch (menu)
            {
                case '1':
                    std::cout << "Сложение.\n";
                    std::cout << "Введите два числа через пробел:\n";
                    std::cin >> a >> b;
                    std::cout << a << " + " << b << " = " << (a + b) << std::endl;
                    break;
                    
                case '2':
                    std::cout << "Вычитание.\n";
                    std::cout << "Введите два числа через пробел:\n";
                    std::cin >> a >> b;
                    std::cout << a << " - " << b << " = " << (a - b) << std::endl;
                    break;
                    
                case '3':
                    std::cout << "Умножение.\n";
                    std::cout << "Введите два числа через пробел:\n";
                    std::cin >> a >> b;
                    std::cout << a << " * " << b << " = " << (a * b) << std::endl;
                    break;
                    
                case '4':
                    std::cout << "Деление.\n";
                    std::cout << "Введите два числа через пробел:\n";
                    std::cin >> a >> b;
                {
                    if (b == 0)
                    {
                        std::cout << "Деление на 0.\n";
                        continue;
                    }
                }
                    std::cout << a << " / " << b << " = " << (a / b) << std::endl;
                    break;
                    
                case '5':
                    std::cout << "Вычисление факториала.\n";
                    std::cout << "Введите число:\n";
                    std::cin >> a;
                {
                    int i = 1;
                    int f = 1;
                    while (i <= a)
                    {
                        f *= i++;
                    }
                    std::cout << "Факториал числа " << a << " = " << f << std::endl;
                }
                    break;
                    
                case '6':
                    std::cout << "Введите число которое возводится в степень:\n";
                    std::cin >> a;
                    std::cout << "Введите степень числа:\n";
                    std::cin >> b;
                {
                    double power = a;
                    if (b == 0)
                    {
                        std::cout << "Любое число в степени 0 равно 1.\n";
                        continue;
                    }
                    for (int i = 1; i < b; i++)
                    {
                        power = power * a;
                    }
                    std::cout << "Чмсло " << a << " в степени " << b << " = " << power << std::endl;
                }
                    break;
                    
                default:
                    if (menu == 'q')
                    {
                        return 0;
                    }
            }
        }
    }
}

