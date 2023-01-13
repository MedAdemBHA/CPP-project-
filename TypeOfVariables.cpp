
#include <iostream>
using namespace std;
// Global variable declaration
int var = 5;

void test();

void stati()
{
    // var is a static variable
    static int var = 0;
    ++var;

    cout  <<"static variable  :  "<< var << endl;
}
int main() 
{
    // local variable to main()
    
    cout   <<"********* #first local: "<< endl;
    test();
    cout  <<"********* #second local: "<< endl;
    test();

     cout <<"local variable:  " << var << endl;
    // illegal: var1 not declared inside main()
    cout  <<"********* #first staic : "<< endl;
    stati();
    cout  <<"*********#second staic: "<< endl;
    stati();

}

void test()
{ 
  int c = 12;

    ++c;

    // Outputs 14
    cout <<"gloabal variable: " << c << endl;;
}