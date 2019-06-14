#include <iostream>
using namespace std;
struct structure
{
        int s_var_int;
        long s_var_long;
        double s_var_double;

};
union union1
{
    int u_var_int;
    long u_var_long;
    double u_var_double;
} ;
void print_addresses(structure one, union1 two){
        cout<<"hexadecimal:"<<endl;
        cout<<&one.s_var_int<<endl;
        cout<<&one.s_var_double<<endl;
        cout<<&one.s_var_long<<endl;
        cout<<&two.u_var_double<<endl;
        cout<<&two.u_var_int<<endl;
        cout<<&two.u_var_long<<endl;
        cout<<"decimal"<<endl;
        cout<<int(&one.s_var_int)<<endl;
        cout<<int(&one.s_var_double)<<endl;
        cout<<int(&one.s_var_long)<<endl;
        cout<<int(&two.u_var_double)<<endl;
        cout<<int(&two.u_var_int)<<endl;
        cout<<int(&two.u_var_long)<<endl;
    }
int main()
{
    structure one;
    union1 two;
    print_addresses(one,two);

    return 0;

}
