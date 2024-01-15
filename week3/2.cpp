#include <iostream>
using namespace std;
int main()
{
    string name;
    int rollnumber;
    float aggregate;
    char section;
    cout<<"Enter your name...";
    cin>>name;
    cout<<"\nEnter your roll number...";
    cin>>rollnumber;
    cout<<"\nEnter your aggregate...";
    cin>>aggregate;
    cout<<"\nEnter your section...";
    cin>>section;
    cout<<"\nName : "<<name<<endl;
    cout<<"Roll Number : "<<rollnumber<<endl;
    cout<<"Aggregate Marks : "<<aggregate<<endl;
    cout<<"Section : "<<section<<endl;
    return 0;
}