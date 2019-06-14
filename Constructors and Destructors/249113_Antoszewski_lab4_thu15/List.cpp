//
//  list.cpp
//  lab 4
//
//  Created by User on 28.03.2019.
//  Copyright © 2019 Marek_Antoszewski. All rights reserved.
//

#include "List.h"
#include <iostream>
using namespace std;
List::List()
{
    size=0;
    array=nullptr;
}
List::List(int sizee)
{
    cout<<"initialize elements: "<<endl;
    size=sizee;
    double value=0;
    array=new double [sizee];
    for(int i=0;i<sizee;i++)
    {
        cout<<i<<". ";
        cin>>value;
        array[i]=value;
    }
    cout<<"array initalized"<<endl;
}
List::List(List &ls)
{
    size=ls.size;
    array=new double [ls.size];
    for(int i=0;i<size;i++)
    {
        array[i]=ls.array[i];
    }
}
List::~List()
{
    delete[] array;
    cout<<"object deleted"<<endl;
}
void List::add()
{
    if(array==nullptr){
        cout<<"error, array is empty"<<endl;
    }
    cout<<"enter  new (extended size)";
    int ext_size=0;
    cin>>ext_size;
    while(ext_size<size)
    {
        cout<<"error, you should enter bigger size then previous."<<endl;
        cout<<"enter  new (extended size) ";
        cin>>ext_size;
    }

    double * temp=new double [ext_size];
    for(int i=0;i<size;i++)
    {
        temp[i]=array[i];
    }
    delete[] array;
    for(int j=size;j<ext_size;j++)
    {
        cout<<"enter value of element number: "<<endl;
        cout<<j<<". ";
        cin>>temp[j];
    }
    size =ext_size;
    array = temp; //some problem with this, not working
    for(int i=0;i<size;i++)
    {
        cout<<"  "<<i<<" "<<array[i]<<endl;
    }
}
void List::isempty()
{
    if(array==nullptr)
    {
        cout<<"array is empty"<<endl;
    }
    else
    {
        cout<<"array is not empty"<<endl;
    }
}
void List::change(){
    int i=0;
    cout<<"Which element would you like to change?"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"  "<<i<<" "<<array[i]<<endl;
    }
    cin>>i;
    int value;
    cout<<"enter new value of element "<<i<<endl;
    cin>>value;
    array[i]=value;
}
void List::displaysize(){
    cout<<"size of the array is: "<<size<<endl;
}
void List::displayelements()
{
    cout<<"elements of array: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<i<<". "<<array[i]<<endl;
    }
}
