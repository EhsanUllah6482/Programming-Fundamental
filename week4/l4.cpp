#include <iostream>
using namespace std;
void addition(int n1,int n2)
{
    int result=n1+n2;
    cout<<"The addition of two numbers is: "<<result<<endl;
}
void subtraction(int n1,int n2)
{
    int result=n1-n2;
    cout<<"The subtraction of two numbers is: "<<result<<endl;
}
void multiplication(int n1,int n2)
{
    int result=n1*n2;
    cout<<"The multiplication of two numbers is: "<<result<<endl;
}
void division(int n1,int n2)
{
    int result=n1/n2;
    cout<<"The division of two numbers is: "<<result<<endl;
}
int main()
{
    char operation;
    int n1,n2;
    cout<<"Enter 1st number: ";
    cin>>n1;
    cout<<"Enter 2nd number: ";
    cin>>n2;
    cout<<"Enter the operator (+,-,*,/): ";
    cin>>operation;
    if(operation=='+')
    {
        addition(n1,n2);
    }
    if(operation=='-')
    {
        subtraction(n1,n2);
    }
    if(operation=='*')
    {
        multiplication(n1,n2);
    }
    if(operation=='/')
    {
        division(n1,n2);
    }
    return 0;
}