#include <iostream>
using namespace std;
void calculatePayableAmount(string day,int purchase)
{
    int discount;
    if(day=="Sunday")
    {
        discount=purchase-((10.0/100.0)*purchase);
        cout<<"Payable amount after discount is: $"<<discount;
    }
    if(day!="Sunday")
    {
        cout<<"Payable amount is: $"<<purchase;
    }
}
int main()
{
    cout<<"Enter the day of purchase: ";
    string day;
    cin>>day;
    int purchase;
    cout<<"\nEnter the price of item: $";
    cin>>purchase;
    calculatePayableAmount(day,purchase);
    return 0;
}