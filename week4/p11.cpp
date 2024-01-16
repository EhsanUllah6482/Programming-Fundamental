#include <iostream>
using namespace std;
void flowerShop(int red,int white,int tulip)
{
    float price=red*2.00+white*4.10+tulip*2.50;
    if(price>200)
    {
        float discount=price-(20.0/100.0*price);
        cout<<"Original price: $"<<price<<endl;
        cout<<"Price after discount is: $"<<discount;
    }
    if(price<=200)
    {
        cout<<"Orginal Price: $"<<price<<endl;
        cout<<"No dicount applied.";
    }
}
int main()
{
    int red,white,tulip;
    cout<<"Red roses: ";
    cin>>red;
    cout<<"White roses: ";
    cin>>white;
    cout<<"Tulips: ";
    cin>>tulip;
    flowerShop(red,white,tulip);
    return 0;
}