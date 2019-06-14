#include "Circle.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    Circle *c;
    int n;
    char first;
    cout<<"specify size of array of objects:"<<endl;
    cin>>n;
    c=new Circle[n];
    for(int i=0;i<n;i++){
        cout<<"object number "<<i<<endl<<endl;
        cout<<"do you want to skip instance ?if no press 1"<<endl<<" if yes press any other character "<<endl;
        cin>>first;
        if(first=='1'){
            double r;
            cout<<"enter radius of the circle: ";
            cin>>r;
            c[i].setRadius(r);
            cout<<"enter color of the circle: ";
            string col;
            cin>>col;
            c[i].setColor(col);
        }else{
            cout<<"instance skipped."<<endl;
        }
        c[i].describe();
    }
    delete[] c;
    return 0;
}
