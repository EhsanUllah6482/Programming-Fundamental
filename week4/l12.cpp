#include <iostream>
using namespace std;
void calculatePayableAmount(string day,int purchase)
{
    int discount;
    if(day=="Sunday")
    {
        discount=purchase-(10.0/100.0*purchase);
        cout<<"The payable amount is: "<<discount<<endl;
    }
    if(day!="Sunday")
    {
        discount = purchase - (5.0 / 100.0 * purchase);
        cout << "The payable amount is: " << discount << endl;
    }
}
int main()
{
    string day;
    int purchase;
    while(true)
    {

    cout<<"Enter the day of purchase: ";
    cin>>day;
    cout<<"Enter the amount of purchase: ";
    cin>>purchase;
    calculatePayableAmount(day,purchase);
    }
    return 0;
}