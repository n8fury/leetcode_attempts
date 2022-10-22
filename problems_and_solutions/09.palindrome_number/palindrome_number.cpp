#include <iostream>
using namespace std;

int modder(int x)
{
    int ans = 0;
    while (x)
    {
        ans = ans * 10 + x % 10;
        x /= 10;
    }
    return ans;
}
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
        y = modder(x);
        if (y == x){
            cout<<"true"<<endl<<y<<endl;
            }
        else{
            cout <<  "false";
    }
    }

    return 0;
}

