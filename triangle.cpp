#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double side1, side2, side3;
	cout << "Введите стороны треугольника: ";
	cin >> side1 >> side2 >> side3;
        // Проверка, существует ли треугольник
	if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
		cout << "Такого треугольика не существует" << endl;
		return 1;
	}
        // Считаем периметр
	double trianglePerimetr = side1 + side2 + side3;
        // Считаем полупериметр для формулы Герона
	double semiPerimetr = trianglePerimetr / 2;
        // Считаем площадь по формуле герона
	double triangleArea = sqrt(semiPerimetr * (semiPerimetr - side1) * (semiPerimetr - side2) * (semiPerimetr - side3));
        // Проверка на равнобедренность
	double isIsosceles = 0;
	if (side1 == side2 || side1 == side3 || side2 == side3) {
		isIsosceles = 1;
	}

	if (isIsosceles == 1) {
		cout << "Треугольник равнобедренный." << endl;
	}
	else {
		cout << "Треугольник не является равнобедренным." << endl;
	}

	cout << "Периметр треугольника: " << trianglePerimetr << endl;
	cout << "Площадь треугольника: " << triangleArea << endl;

}
