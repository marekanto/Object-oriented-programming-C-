#include "Circle.h"
#include <iostream>
using namespace std;
Circle::Circle()
{
        radius=0;
    color ="black";
}
Circle::Circle(double r,string tone)
{
        r=radius;
        tone=color;
}
void Circle::describe(){
double area=3.14*radius*radius;
cout<<" this is "<<color<<" circle of radius "<<radius<<", and area "<<area<<endl;
}
 Circle & Circle::compare_area( Circle& circle){
if((3.14*radius*radius)>(3.14*circle.radius*circle.radius)){
    return circle;
}
else return *this;

}
