#include <iostream>
using namespace std;
class Shape{
double a, b;
public:
void get_data(double x, double y) {
a = x;
b = y;
}
double get_a() {
return a;
}
double get_b() {
return b;
}
virtual void display_area() = 0;
};
class Triangle: public Shape {
public:
void display_area() {
cout << "Area of triangle: " << 0.5 * get_a() * get_b() << endl;
}
};
class Rectangle: public Shape {
public:
void display_area() {
cout << "Area of rectangle: " << get_a() * get_b() << endl;
}
};
class Circle: public Shape {
public:
void display_area() {
cout << "Area of circle: " << 3.14 * get_a() * get_a() << endl;
}
};
int main()
{
Shape *shape;
Triangle triangle;
double base, height;
cout << "Enter base and altitude: ";
cin >> base >> height;
shape = &triangle;
shape->get_data(base, height);
shape->display_area();
cout << endl;
Rectangle rectangle;
double length, breadth;
cout << "Enter length and breadth: ";
cin >> length >> breadth;
shape = &rectangle;
shape->get_data(length, breadth);
shape->display_area();
cout << endl;
Circle circle;
double radius;
cout << "Enter the radius: ";
cin >> radius;
shape = &circle;
shape->get_data(radius, 0);
shape->display_area();
return 0;
}

