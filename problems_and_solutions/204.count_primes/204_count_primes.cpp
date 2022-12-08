#include <iostream>
#include <cmath>
using namespace std;

int countPrimes(int n) {
    if(n <= 2) 
    {
        return 0;
    }
    bool prime [n];
    int i,j,c=0;
    for(i=2;i<n;i++)
    {
        prime[i] = true;
    }
    for(i=2; i<=sqrt(n); i++)
    {
        if(prime[i])
        {
            for(j=i+i; j<n; j+=i)
            {
                prime[j] = false;
            }
            
        }
    }
     for(int i=2; i<n; i++)
         {
                if(prime[i])
                 {
                        c++;
                 }
            }

        
    
    return c;
}
int main()
{
    int n = 10;
    cout << countPrimes(n) << endl;
    return 0;
}