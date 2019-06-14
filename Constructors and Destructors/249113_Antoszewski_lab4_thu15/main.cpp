//
//  main.cpp
//  lab 4
//
//  Created by User on 31.03.2019.
//  Copyright © 2019 Marek_Antoszewski. All rights reserved.
//

#include "List.h"
#include <iostream>

using namespace std;

int main()
{
   
    int size=0;
    char menu=0;
    int joystick=0;
    cout<<"initialize the object"<<endl;
    cout<<"enter size of an array"<<endl;
    cin>>size;
    List object(size);
    while(menu!='1')
    {cout<<"~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~"<<endl;
    cout<<"1. Add elements"<<endl;
    cout<<"2. Check whether array is empty"<<endl;
    cout<<"3. Change precised element"<<endl;
    cout<<"4. Display size of the array"<<endl;
    cout<<"5. Display elements of the array"<<endl;
    cin>>joystick;
        switch (joystick){
            case 1 : object.add(); break;
            case 2 : object.isempty(); break;
            case 3 : object.change(); break;
            case 4 : object.displaysize(); break;
            case 5 : object.displayelements(); break;
        }
        cout<<"do you want to finish?(enter 1 for exit, enter 0 for continuing"<<endl;
        cin>>menu;
        if(menu=='1'){
            cout<<"correct input"<<endl;
        }while(menu!='0' && menu!='1')
        {
            cout<<"wrong input"<<endl;
            cout<<"do you want to finish?(enter 1 for exit, enter 0 for continuing)"<<endl;
            cin>>menu;
        }
    }
    return 0;
}
