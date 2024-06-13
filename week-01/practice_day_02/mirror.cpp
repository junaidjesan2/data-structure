#include<bits/stdc++.h>
using namespace std;

int main()
{  
    int n;
    cin >> n;
    cout<<n/2;
    if (0<n<=20 && n%2==1)
    {
        for (int i = 1; i<=n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i==j||i+j==n+1)
                {
                    cout<<"\\";
                }
                else{
                    cout<<"$";
                }
                
            }
            
        }
        
    }
    
    
    return 0;
}