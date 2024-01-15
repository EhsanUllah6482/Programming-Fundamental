#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,addfive,subfive,multfive,result;
    cout<<"Enter number 1: ";
    cin>>n1;
    cout<<"\nEnter number 2: ";
    cin>>n2;
    cout<<"\nEnter number 3: ";
    cin>>n3;
    cout<<"Enter number 4: ";
    cin>>n4;
    cout<<"Enter number 5: ";
    cin>>n5;
    cout<<"Enter number 6: ";
    cin>>n6;
    cout<<"\nEnter number 7: ";
    cin>>n7;
    cout<<"\nEnter number 8: ";
    cin>>n8;
    cout<<"Enter number 9: ";
    cin>>n9;
    cout<<"Enter number 10: ";
    cin>>n10;
    cout<<"Enter number 11: ";
    cin>>n11;
    cout<<"\nEnter number 12: ";
    cin>>n12;
    cout<<"\nEnter number 13: ";
    cin>>n13;
    cout<<"Enter number 14: ";
    cin>>n14;
    cout<<"Enter number 15: ";
    cin>>n15;
    addfive = (n1 + n2 + n3 + n4 + n5);
    cout<<"add"<<addfive<<endl;
    multfive=(n6*n7*n8*n9*n10);
    cout << "mul" << multfive << endl;

    subfive=(n11-n12-n13-n14-n15);
    cout << "sub" << subfive << endl;

    result=addfive+multfive-subfive;
    cout<<"The final result after calculation is: "<<result;
    return 0;
}