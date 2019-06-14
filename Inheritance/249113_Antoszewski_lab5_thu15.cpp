//
//  main.cpp
//  lab5
//
//  Created by User on 04.04.2019.
//  Copyright © 2019 Marek_Antoszewski. All rights reserved.
//

#include <iostream>
#include "Animal.h"
using namespace std;
class Animal{
private:
    std::string name;
    unsigned int age;
    unsigned int weight;
public:
    Animal(){
    name = "none";
    age = 0;
    weight = 0;
};
    void setName(std::string name_set);
    void setAge(unsigned int age_set);
    void setWeight(int weight_set);
    unsigned int getAge(){return age;};
    string getName(){return name;};
    unsigned int getWeight(){return weight;};
    virtual void age_check() = 0;
    virtual void condition_check() = 0;
    Animal(std::string n,unsigned int a,unsigned int w){
        age=a;
        name=n;
        weight = w;
    };
};
class Cat: public Animal
{
    string color;
public:
    Cat(){
        color = "none";
    };
    Cat(std::string n,unsigned int a,unsigned int w,string color_der):Animal(n,a,w){
        color_der=color;
    }
    void age_check(){
        if (getAge()>0 || getAge()<5){
            cout<<getName()<<" Cat is young"<<endl;
        }else if (getAge()>=5 || getAge()<=10){
            cout<<getName()<<" cat is quite old"<<endl;
        }else if (getAge()==0){
            cout<<getName()<<" is very young"<<endl;
        }else {
            cout<<getName()<<" is very old"<<endl;
        }
    };
    void condition_check(){
        if (getWeight()<10){
            cout<<getName()<<" is a good kitty"<<endl;
        }else if (getWeight()>=10|| getWeight()<20){
            cout<<"One more kilogram and it won't be able to scratch"<<endl;
        }else if (getWeight()>20)
            cout<<"we are going to the vet"<<endl;
    };
    void scratching(){
        cout<<getName()<<" is scratching"<<endl;
    }
};
class Dog: public Animal
{
    string breed;
public:
    Dog(){
        breed="some";
    };
    Dog(string n,unsigned int a,unsigned int w,string breed_der):Animal(n,a,w){
        breed_der=breed;
    }
    void age_check(){
        if (getAge()>0 || getAge()<5){
            cout<<getName()<<" dog is young"<<endl;
        }else if (getAge()>=5 || getAge()<=10){
            cout<<getName()<<" dog is quite old"<<endl;
        }else if (getAge()==0){
            cout<<getName()<<" dog is very young"<<endl;
        }else {
            cout<<getName()<<" dog is very old"<<endl;
        }
    };
    void condition_check(){
        if (getWeight()<10){
            cout<<getName()<<" is skinny"<<endl;
        }else if (getWeight()>=20|| getWeight()<50){
            cout<<" I could cook pretty nice hot pot from this dog "<<endl;
        }else if (getWeight()>50)
            cout<<"no meat anymore"<<endl;
    };
    void barking()
    {
        cout<<getName()<<" is barking"<<endl;
    }
    
};


int main() {
    cout << "Hello, World!\n";
    Cat *on;
    on = new Cat;
    Animal *two;
    two = on;
    two->age_check();
    //two->scratching(); its derived class atribute
    two->condition_check();
    delete on;
    return 0;
}
