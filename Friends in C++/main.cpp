//
//  main.cpp
//  lab6prototype
//
//  Created by User on 11.04.2019.
//  Copyright © 2019 Marek_Antoszewski. All rights reserved.
//

#include <iostream>
#include "Tv.h"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Tv Samsung;
    Samsung.onoff();
    Samsung.chandown();
    Samsung.chanup();
    if (Samsung.ison()){
        cout<<"Tv is on"<<endl;
    }else{
        cout<<"Tv is off"<<endl;
    }
    Samsung.set_input();
    Samsung.set_mode();
    Samsung.voldown();
    Samsung.volup();
    Samsung.settings();
    Remote Lg;
    Lg.settings(Samsung);
    
    Lg.set_chan(Lg);
    return 0;
}
