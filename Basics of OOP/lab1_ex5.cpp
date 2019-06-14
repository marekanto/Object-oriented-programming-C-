//
//  main.cpp
//  lab1_ex5
//
//  Created by User on 08.03.2019.
//  Copyright © 2019 Marek_Antoszewski. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void menu(){
    cout<<"         MENU"<<endl;
    cout<<"1. display reverse order"<<endl;
    cout<<"2. display elements"<<endl;
    cout<<"3. display addresses"<<endl;
    cout<<"4. change value of given element"<<endl;
    cout<<"5. save elements to text file"<<endl;
    cout<<"Your choice : ";
}
void display(float array [],int size ){
    cout<<"elements of arrray in reverse order: "<<endl;
    for(int i=size-1;i>=0;i--){
        cout<<i<<". "<<array[i]<<endl;
    }
}
void display_dec(float array[],int size ){
    int precision;
    cout<<"enter the precision, elements should be displayed with: (if you enter for instance 2,you will obtain 2 significant numbers)"<<endl;
    cin>>precision;
    for(int i=0;i<size;i++){
        cout<<i<<". "<<setprecision(precision)<<array[i]<<endl;
    }
}
void address(float array[],int size){
    cout<<"addresses of elements in decimal and hexadecimal base format: "<<endl;
    for(int i=0;i<size;i++){
        cout<<i<<". ";
        cout<<(long)&array[i];
        cout<<"   ";
        cout<<hex;
        cout<<&array[i]<<endl;
    }
}
void change_value(float array[],int size){
    int i=0;
    cout<<"which element would you like to choose: ( from 0 to "<<size-1<<" )"<<endl;
    cin>>i;
        while(i<0 || i>size){
            cout<<"Wrong input. Try again: "<<endl;
            cin>>i;
        }
    cout<<"previous content: "<<array[i]<<" , enter new content :"<<endl;
    cin>>array[i];
    
}
void save_elements(float array[],int size){
    float temp;
    cout<<"adding 2 and multipling each element by 4: "<<endl;
    fstream save_file;
    for (int i=0;i<size;i++){
        array[i]=(array[i] + 2)*4;
    }
    cout<<"saving elements in external file"<<endl;
    save_file.open("my_file.txt",ios::out);
    for (int i=0;i<size;i++){
        save_file<<array[i];
    }
    for (int i=0;i<10;i++){
        for (int j = i + 1; j < 10; j++){
            if (array[i] < array[j])
            { temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (int i=0;i<size;i++){
        save_file<<setprecision(2)<<array[i]<<endl;
    }
    save_file.close();
}
int main() {
    float* array = NULL;
    int size;
    int menuc=1;
    int choice=0;
    cout<<"enter size of your array(size should be [2,20]"<<endl;
    cin>>size;
    while(size>20 || size<2){
        cout<<"wrong input, enter size again: "<<endl;
        cin>>size;
    }
    array= new float[size];
    cout<<"enter content of array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<i<<". ";
        cin>>array[i];
    }
    while (menuc!=0){
    menu();
    cin>>choice;
    while(choice>5 || size<0){
            cout<<"wrong input, enter your choice again: "<<endl;
            cin>>choice;
    }
        switch (choice){
            case 1:display(array,size);break;//done
            case 2:display_dec(array,size);break;//done
            case 3:address(array,size);break;//not done
            case 4:change_value(array,size);break;//done
            case 5:save_elements(array,size);break;//done
        }  char escape=0;
        while(escape!='N' && escape!='n' && escape!='y' && escape!='Y'){
            cout<<"do you want to finish?(Y/N)"<<endl;
            cin>>escape;
            if(escape=='y' || escape=='Y'){
                menuc=0;
            }
            if(escape!='n' && escape!='N' && escape!='y' && escape!='Y'){
                
                cout<<"Wrong input."<<endl;
            }
        }}
    delete [] array;
    return 0;
}
