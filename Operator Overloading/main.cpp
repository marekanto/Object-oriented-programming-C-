//
//  main.cpp
//  lab7prototype
//
//  Created by User on 15.04.2019.
//  Copyright © 2019 Marek_Antoszewski. All rights reserved.
//

#include <iostream>
#include "Rectangle.h"
using namespace std;
int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    Rectangle one(4,3),two(3,6);
    Rectangle three= one+two;
    cout<<three.get_length()<<endl;
    if (one<two){
        cout<<"smaller"<<endl;
    }else {
        cout<<"greater"<<endl;
    }
    if (one>two){
        cout<<"greater"<<endl;
    }else {
        cout<<"smaller"<<endl;
    }
    
    return 0;
}
