#include <iostream>
using namespace std;
int main()
{
    int sizeofBag,costofBag,areainSquareFeet,costPerPound,costPerSquarefeet;
    cout<<"Enter size of fertilizer bag: ";
    cin>>sizeofBag;
    cout<<"\nCost per pound of fertilizer: $";
    cin>>costofBag; 
    cout<<"Enter area in square feet: ";
    cin>>areainSquareFeet;
    costPerPound = costofBag/sizeofBag;
    costPerSquarefeet= sizeofBag*areainSquareFeet;
    cout<<"\nThe cost per pound of fertilizer is: $" << costPerPound;
    cout<< "\nCost per square feet is: $"<<costPerSquarefeet;
    return 0;
}