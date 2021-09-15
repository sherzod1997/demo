#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159;

double area(double radius);

double volume(double radius);

int main(void) {
	double radius_of_circlesphere, area_of_circle, volume_of_sphere;
 
	cout << "Enter the radius of a circle\n"
        	<< "and a sphere (in centimetres): ";
	cin >> radius_of_circlesphere;
 
	area_of_circle = area(radius_of_circlesphere);
	volume_of_sphere = volume(radius_of_circlesphere);
 
	cout << "Radius = " << radius_of_circlesphere << " centimetres\n"
        	<< "Area of circle = " << area_of_circle
        	<< " square inches\n"
        	<< "Volume of sphere = " << volume_of_sphere
        	<< " cubic centimetres\n";
 
	return 0;
}
 

double area(double radius) {
	return (PI * pow(radius, 2));
}

double volume(double radius) {
	return ((4.0 / 3.0) * PI * pow(radius, 3));
}

