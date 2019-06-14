#ifndef CIRCLE_H
#define CIRCLE_H
#include <string>
#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
    string color;

public:
    Circle();
    /**/
    Circle(double r,string tone);/**/
    Circle& compare_area(Circle& circle);
    double getRadius(){return radius;};
    string getColor(){return color;};
    void setColor(string tone){color=tone;};
    void setRadius (double r){radius=r;};
    void describe();
};

#endif // CIRCLE_H_INCLUDED
