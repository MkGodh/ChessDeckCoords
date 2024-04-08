#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;
int main() {

    setlocale(LC_ALL, "RUS");

    cout << "Введите координаты шахматной доски: \n";
    char x, y;
    cin >> x >> y;
    if (((x >= 'A' && x <= 'H') || (x >= 'a' && x <= 'h')) && y >= '1' && y <= '8') {
        cout << "Да, координаты попадают под шахматное поле!\n";
    }
    else {
        cout << "Координаты не верны!\n";
    }



}