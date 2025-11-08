#include <iostream>
#include <algorithm>

int func(int a, int b) {
    int result = (a + (2 * b) + 3);
    return result;
}

int func(int a, int b, int c) {
    int result1 = a + b;
    int result2 = a + c;
    int result3 = b + c;
    int final = std::max(result1, std::max(result2, result3));
    return final;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int nomer_punkta;
    std::cin >> nomer_punkta;
    if (nomer_punkta == 1) {
        std::cout << "Выполняется первый пункт:\n";
        int a;
        int b;
        int c;
        std::cin >> a;
        std::cin >> b;
        std::cin >> c;
        int count_zero = 0;
        if (a == 0) {
            count_zero++;
        }
        if (b == 0) {
            count_zero++;
        }
        if (c == 0) {
            count_zero++;
        }
        if (count_zero >= 2) {
            std::cout << "Недостаточно чисел для выполения функции" << std::endl;
        }
        else if (count_zero == 1) {
            if (a == 0) {
                std::cout << func(b, c) << std::endl;
            }
            else if (b == 0) {
                std::cout << func(a, c) << std::endl;
            }
            else {
                std::cout << func(a, b) << std::endl;
            }
        }
        else {
            std::cout << func(a, b, c) << std::endl;
        }
    }

    system("pause");
    return 0;
}

