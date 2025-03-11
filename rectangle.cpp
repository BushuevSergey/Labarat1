#include <iostream>
#include <cmath> // Для функции sqrt

using namespace std;

int main() {
    double a, b;
    
    // Ввод длины и ширины прямоугольника
    cout << "Введите длину прямоугольника: ";
    cin >> a;
    cout << "Введите ширину прямоугольника: ";
    cin >> b;
    
    // Вычисления
    double perimeter = 2 * (a + b);
    double area = a * b;
    double diagonal = sqrt(a * a + b * b);
    
    // Вывод результатов
    cout << "Периметр: " << perimeter << endl;
    cout << "Площадь: " << area << endl;
    cout << "Длина диагонали: " << diagonal << endl;
    
    return 0;
}

