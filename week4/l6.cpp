#include <iostream>
using namespace std;
void checkresult(int marks)
{
    if(marks>=50)
    {
        cout<<"You are pass.";

    }
    if(marks<50)
    {
        cout<<"You are fail.";
    }
}
int main()
{
    int marks;
    cout << "Enter your Marks: ";
    cin >> marks;
    checkresult(marks);
    return 0;
}