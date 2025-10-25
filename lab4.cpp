
#include <cmath>
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int mn1 = 9;
    int mn2 = 9;
    const int size = 4;
    int massiv[size];
    for (int i = 0; i < size; i++) {
        std::cin >> massiv[i];
    }
    int temp0 = massiv[0];
    int temp3 = massiv[3];
    while (temp0 > 0) {
        int mod = abs(temp0);
        int digit = temp0 % 10;
        if (digit < mn1) {
            mn1 = digit;
        }
        temp0 /= 10;
    }
    while (temp3 > 0) {
        int mod = abs(temp3);
        int digit = temp3 % 10;
        if (digit < mn2) {
            mn2 = digit;
        }
        temp3 /= 10;
    }
    if (mn1 == mn2) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (massiv[j] > massiv[j + 1]) {
                    int temp = massiv[j];
                    massiv[j] = massiv[j + 1];
                    massiv[j + 1] = temp;
                }
            }
        }
    }
    for (int i = 0; i < size; i++) {
        std::cout << massiv[i] << std::endl;
    }

    int massiv2[3][4];
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 4; y++) { 
            std::cin >> massiv2[x][y];
            if (massiv2[x][y] < 0) {
                std::cout << "В матрице присутствует отрицательное число\n";
                return 0;
            }
        }
    }
    int minsum = INT_MAX;
    int minstroka = 0;
    for (int x = 0; x < 3; x++) {
        int sum = 0;
        for (int y = 0; y < 4; y++) {
            std::cout << massiv2[x][y] << " ";
            sum += abs(massiv2[x][y]);
        }
        if (sum < minsum) {
            minsum = sum;
            minstroka = x;
        }
        std::cout << std::endl;
    }
    for (int y = 0; y < 4; y++) {
        massiv2[minstroka][y] = 0;
    }
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 4; y++) {
            std::cout << massiv2[x][y] << " ";
        }
        std::cout << std::endl;
    }


}




