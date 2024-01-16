#include <iostream>
#include <Windows.h>
using namespace std;
void discount(string country, float price)
{
    float discount;
    if (country == "Pakistan")
    {
        discount = price - (5.0 / 100.0 * price);
        cout << "Ticket price after discount is: $" << discount;
    }
    if (country == "Ireland")
    {
        discount = price - (10.0 / 100.0 * price);
        cout << "Ticket price after discount is: $" << discount;
    }
    if (country == "India")
    {
        discount = price - (20.0 / 100.0 * price);
        cout << "Ticket price after discount is: $" << discount;
    }
    if (country == "England")
    {
        discount = price - (30.0 / 100.0 * price);
        cout << "Ticket price after discount is: $" << discount;
    }
    if (country == "Canada")
    {
        discount = price - (45.0 / 100.0 * price);
        cout << "Ticket price after discount is: $" << discount;
    }
}
int main()
{
    float price;
    string name;
    while (true)
    {
        system("cls");
        cout << "Enter your country name: ";
        cin >> name;
        cout << "Enter your ticket price: $";
        cin >> price;
        discount(name, price);
    }
    return 0;
}