#include <iostream>
 using namespace std;
 
 int main() {
     double radius, angle;
     const double PI = 3.14;
 
     cout << "Введите радиус окружности: ";
     cin >> radius;
 
     cout << "Введите угол сектора (в градусах): ";
     cin >> angle;
 
     // Вычисление длины окружности, площади круга и площади кругового сектора
     double lencircle = 2 * PI * radius;
     double circleArea = PI * radius * radius;
     double sectorArea = (angle * PI / 180.0) * (radius * radius) / 2;
 
     cout << "Длина окружности: " << lencircle << endl;
     cout << "Площадь круга: " << circleArea << endl;
     cout << "Площадь кругового сектора: " << sectorArea << endl; 
 
     return 0;
 }