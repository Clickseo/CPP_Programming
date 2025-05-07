#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(void)
{
    Rectangle	r1;
    r1.showRectangle();
    cout << "너비: " << r1.getWidth() << endl;
    cout << "높이: " << r1.getHeight() << endl;
    cout << "면적: " << r1.getArea() << endl;

    r1.setRectangle(10, 20, 30, 40);
    r1.showRectangle();
    cout << "너비: " << r1.getWidth() << endl;
    cout << "높이: " << r1.getHeight() << endl;
    cout << "면적: " << r1.getArea() << endl;

    Rectangle	r2(50, 60, 70, 80);
    r2.showRectangle();
    cout << "너비: " << r2.getWidth() << endl;
    cout << "높이: " << r2.getHeight() << endl;
    cout << "면적: " << r2.getArea() << endl;

    Rectangle	r3(Point(10, 20), Point(30, 40));
    r3.showRectangle();
    cout << "너비: " << r3.getWidth() << endl;
    cout << "높이: " << r3.getHeight() << endl;
    cout << "면적: " << r3.getArea() << endl;

    return 0;
}
