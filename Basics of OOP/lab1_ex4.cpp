//
//  main.cpp
//  lab1_ex4
//
//  Created by User on 07.03.2019.
//  Copyright © 2019 Marek_Antoszewski. All rights reserved.
//

#include <iostream>
using namespace std;
void fun1(int a){
    a=a+5;
    cout<<"a in fun1: "<<a<<endl;
}
void fun2(int *a){
    cout<<a<<endl;
    a=a+5;
    cout<<"a in fun2: "<<a<<endl;
}
void fun3(int &a){
    a=a+5;
    cout<<"a in fun3: "<<a<<endl;
}
int main() {
    int num=10;
    cout<<"before: "<<num<<endl;
    fun1(num);
    cout<<"after: "<<num<<endl;
    cout<<"before: "<<num<<endl;
    fun2(&num);
    cout<<"after: "<<num<<endl;
    cout<<"before: "<<num<<endl;
    fun3(num);
    cout<<"after: "<<num<<endl;
}

