#include <iostream>
 using namespace std;
 
 int main() {
     double radius, angle;
     const double PI = 3.14;
 
     cout << "Введите радиус окружности: ";
     cin >> radius;
     cout << "Введите угол сектора (в градусах): ";
     cin >> angle;
    if  (angle >=0 && angle <= 360 && radius >= 0){
        double lencircle = 2 * PI * radius;
        double circleArea = PI * radius * radius;
        double sectorArea = (angle * PI / 180.0) * (radius * radius) / 2;
    
        cout << "Длина окружности: " << lencircle << endl;
        cout << "Площадь круга: " << circleArea << endl;
        cout << "Площадь кругового сектора: " << sectorArea << endl;

    }
    else{
        cout << "Такого окружности не существует" << endl;
    }
 
     return 0;
 }