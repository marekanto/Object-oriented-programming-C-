//
//  Rectangle.h
//  lab7prototype
//
//  Created by User on 15.04.2019.
//  Copyright © 2019 Marek_Antoszewski. All rights reserved.
//

#ifndef Rectangle_h
#define Rectangle_h
class Rectangle{
private:
    double length;
    double breadth;
public:
    const double Area(){
        double area = length*breadth;
        return area;
    }
    const double get_length(){
        return length;
    }
    const double get_breadth(){
        return breadth;
    }
    void set_length(double l){
        length=l;
    }
    void set_breadth(double b){
        breadth=b;
    }
    Rectangle();
    Rectangle(double le,double br);
    
    bool operator < (Rectangle &r1)
    {
        double area1=r1.Area();
        double area2=this->Area();
        if (area2<area1){
            return true;
        }else{
            return false;
        }
            }
    bool operator > (Rectangle &r1)
    {
        if (this->Area()>r1.Area()){
            return true;
        }else{
            return false;
        }
    }
    
    friend Rectangle operator + (Rectangle const &r1,Rectangle const &r2);
    //friend bool operator < (Rectangle const &r1,Rectangle const &r2);
    friend bool operator > (Rectangle const &r1,Rectangle const &r2);
    friend Rectangle operator * (Rectangle const &r1,Rectangle const &r2);
};

#endif /* Rectangle_h */
