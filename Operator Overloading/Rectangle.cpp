//
//  Rectangle.cpp
//  lab7prototype
//
//  Created by User on 15.04.2019.
//  Copyright © 2019 Marek_Antoszewski. All rights reserved.
//

#include "Rectangle.h"
Rectangle::Rectangle(){
    length = 0;
    breadth = 0;
}
Rectangle::Rectangle(double le, double br){
    length=le;
    breadth=br;
}
Rectangle operator + (Rectangle const &r1,Rectangle const &r2){
    return Rectangle(r1.length + r2.length,r1.breadth + r2.breadth);
}
bool operator > (Rectangle const &r1,Rectangle const &r2){
    int area1=r1.length*r1.breadth;
    int area2=r2.length*r2.breadth;
    if (area1>area2){
        return true;
    }else{
        return false;
    }}

Rectangle operator * (Rectangle const &r1, Rectangle const &r2){
    return Rectangle(r1.length*r2.length,r2.breadth*r1.breadth);
}
