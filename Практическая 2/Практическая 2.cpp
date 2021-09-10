#include <iostream>
void zadanie2()
{
    int m;
    std::cout << "Введите номер месяца:" << std::endl;
    std::cin >> m;
    switch (m)
    {
        case 1: std::cout << "Январь" << std::endl;
            break;
        case 2: std::cout << "Февраль" << std::endl;
            break;
        case 3: std::cout << "Март" << std::endl;
            break;
        case 4: std::cout << "Апрель" << std::endl;
            break;
        case 5: std::cout << "Май" << std::endl;
            break;
        case 6: std::cout << "Июнь" << std::endl;
            break;
        case 7: std::cout << "Июль" << std::endl;
            break;
        case 8: std::cout << "Август" << std::endl;
            break;
        case 9: std::cout << "Сентябрь" << std::endl;
            break;
        case 10: std::cout << "Октябрь" << std::endl;
            break;
        case 11: std::cout << "Ноябрь" << std::endl;
            break;
        case 12: std::cout << "Декабрь" << std::endl;
            break;
        default: std::cout << "Увы! Такого месяца нет." << std::endl;
    }
}

//Создаю функцию, выполняющую первое задание
void zadanie1()
{
    //Объявляю переменные
    int a, b, c;
    //Получаю переменные
    std::cout << "Введите три переменные:" << std::endl;
    std::cin >> a >> b >> c;
    if (a % b == 0 && b < c)
    {
        std::cout << a / b - c << std::endl;
    }
    else
    {
        std::cout << (a + b) * c << std::endl;
    }
}

int main()
{
    //Русский язык в консоли
    setlocale(LC_ALL, "Rus");
    
    int i = 0;
    do
    {
        std::cout << "Какое задание проверяете? (1 или 2)" << std::endl;
        short nomerzad;
        std::cin >> nomerzad;
        if (nomerzad == 1)
        {
            //Задание 1
            zadanie1();
            i = -12345;
        }
        else if (nomerzad == 2)
        {
            //Задание 2
            zadanie2();
            i = -12345;
        }
        else
        {
            std::cout << "Ошибка, заданий всего 2!" << std::endl;
            i = -12345;
        }
        std::cout << "Хотите выйти? Введите 1, чтоб выйти, или любое другое, чтоб продолжить." << std::endl;
        int zanovo;
        std::cin >> zanovo;
        if (zanovo == 1)
        {
            return 0;
        }
        else
        {
            
        }
    } while (i == -12345);
    

}
