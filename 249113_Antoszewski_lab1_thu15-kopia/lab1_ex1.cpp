//
//  main.cpp
//  christmas tree
//
//  Created by User on 07.03.2019.
//  Copyright © 2019 Marek_Antoszewski. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
    int exiting=1;
    cout << "Hello, and welcome in my lozenge shape program!\n";
    while(exiting!=0){
    char treeSign=0;
    int treeHeight=0,spacesNumber=0,signsNumber=0;
    cout<<"specify the height of lozenge:"<<endl;
    cin>>treeHeight;
    if(treeHeight>=15 || treeHeight<=3){
        while(treeHeight>15 || treeHeight<3){
            cout<<"you entered wrong height:"<<endl<<"enter valid height:"<<endl;
            cin>>treeHeight;
        }
        
    }
    cout<<"very well, now specify the sign to create the tree from"<<endl;
    cin>>treeSign;
    for (int i=0;i<treeHeight;i++){
        spacesNumber=(treeHeight-i);
        signsNumber=(2*i)+1;
        string spaces(spacesNumber,' ');
        string signs(signsNumber,treeSign);
        cout<<spaces<<signs<<spaces<<endl;
    }
    spacesNumber=treeHeight-1;
    for (int i=1;i<treeHeight;i++){
        spacesNumber=i+1;
        signsNumber=(treeHeight-i-1)*2+1;
        string spaces(spacesNumber,' ');
        string signs(signsNumber,treeSign);
        cout<<spaces<<signs<<spaces<<endl;
    }
        char escape=0;
        while(escape!='N' && escape!='n' && escape!='y' && escape!='Y'){
        cout<<"do you want to finish?(Y/N)"<<endl;
        cin>>escape;
        if(escape=='y' || escape=='Y'){
            exiting=0;
        }
        if(escape!='n' && escape!='N' && escape!='y' && escape!='Y'){
            
                cout<<"Wrong input."<<endl;
            }
        }
    }
    return 0;
}
