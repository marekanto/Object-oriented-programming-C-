//
//  Tv.cpp
//  lab6prototype
//
//  Created by User on 11.04.2019.
//  Copyright © 2019 Marek_Antoszewski. All rights reserved.
//

#include "Tv.h"
#include <iostream>
using namespace std;
void Tv::onoff(){
    if(state == On){
        state = Off;
        std::cout<<"Tv turned off"<<std::endl;
    }else {
        state = On;
        std::cout<<"Tv turned on"<<std::endl;
    }
}
void Tv::set_mode(){
    if(mode == Cable){
        mode = Antenna;
        cout<<"mode set to antenna"<<endl;
    }else if (mode == Antenna){
        mode = Cable;
        cout<<"mode set to cable"<<endl;
    }
}
void Tv::set_input(){
    if(input == TV){
        input = DVD;
        cout<<"input set to DVD"<<endl;
    }else if (input == DVD){
        input = TV;
        cout<<"input set to TV"<<endl;
    }
}
void Tv::volup(){
    if(volume==20){
        cout<<"vol: "<<volume<<endl;
    }else if (volume < 20){
        volume++;
        cout<<"vol: "<<volume<<endl;
    }
}
void Tv::voldown(){
    if(volume==0){
        cout<<"vol: "<<volume<<endl;
    }else if (volume>0){
        volume--;
        cout<<"vol: "<<volume<<endl;
    }
}
void Tv::chanup(){
    if(channel==maxchannel){
        
        cout<<"channel: "<<channel<<endl;
    }else if(channel<maxchannel){
        channel++;
        cout<<"channel: "<<channel<<endl;
    }
}
void Tv::chandown(){
    if(channel==0){
        cout<<"channel: "<<channel<<endl;
    }else if(channel>0){
        channel--;
        cout<<"channel: "<<channel<<endl;
    }
}
bool Tv::ison(){
    if(state == On){
        return true;
    }else {
        return false;
    }
}
void Tv::settings() const {
    cout<<"-----------SETTINGS-----------"<<endl;
    cout<<"available functions: "<<endl;
    cout<<"1. on off"<<endl<<"2. set mode"<<endl<<"3. set input"<<endl;
    cout<<"4. volume up"<<endl<<"5. volume down"<<endl<<"6. channel up"<<endl<<"7. channel down"<<endl;
    cout<<"8. is on"<<endl;
}
void Remote::set_chan(Tv &tv1){
    cout<<"enter channel: ";
    cin>>tv1.channel;
    while(tv1.channel>125 || tv1.channel<0){
        cout<<"input channel from valid range(0-125)";
        cin>>tv1.channel;
    }
    cout<<endl<<"chan: "<<tv1.channel<<endl;
}

