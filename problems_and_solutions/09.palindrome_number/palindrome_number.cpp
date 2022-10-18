#include <iostream>
using namespace std;

int main()
{
    int x, y, z = 0;
    cin >> x;
    if (x < 0)
    {
        cout <<  "false";
    }
    else
    {
        y = x;
        while (y != 0)
        {
            z = z * 10 + y % 10;
            y /= 10;
        }
        if (z == x){
            cout<<"true"<<endl<<z;
            }
        else{
            cout <<  "false";
    }
    }
}