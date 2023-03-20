//
//  main.cpp
//  HW
//
//  Created by Vladimir Solobuev on 20.12.2022.
//

#include <iostream>

int main(int argc, const char * argv[])

{
    setlocale(LC_ALL, "");
    
    float a, b;

    std::cout << "Введите два числа через пробел:\n";
    std::cin >> a >> b;
    
    std::cout << "Сложение:\n";
    std::cout << a << " + " << b << " = " << (a + b) << std::endl;
    
    std::cout << "Вычитание:\n";
    std::cout << a << " - " << b << " = " << (a - b) << std::endl;
    
    std::cout << "Умножение:\n";
    std::cout << a << " * " << b << " = " << (a * b) << std::endl;
    
    std::cout << "Деление:\n";
    std::cout << a << " / " << b << " = " << (a / b) << std::endl;
    
    std::cout << "Операция И:\n";
    std::cout << a << " & " << b << " = " << ((int) a & (int) b) << std::endl;
    
    std::cout << "Операция ИЛИ:\n";
    std::cout << a << " | " << b << " = " << ((int) a | (int) b) << std::endl;
    
    std::cout << "Операция исключающее ИЛИ:\n";
    std::cout << a << " ^ " << b << " = " << ((int) a ^ (int) b) << std::endl;
    
    return 0;
}
