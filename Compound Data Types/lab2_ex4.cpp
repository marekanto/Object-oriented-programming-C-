#include <iostream>
using namespace std;
enum Answers{
    Yes=1,
    No=0,
    Maybe=3,
};
int main()
{
    Answers answer;
    int number;
    number = No;
    cout<<number<<endl;
    number= 1+Maybe;
    cout<<number<<endl;
    cout<<"answer=1 we will obtain error"<<endl;
    answer= Yes;
    cout<<answer<<endl;
    number= 1+ answer;
    cout<<number<<endl;
    return 0;

}
