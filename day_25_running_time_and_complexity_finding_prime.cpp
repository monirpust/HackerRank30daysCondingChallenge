#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t, n, flag;
    cin>>t;
    
    while(t--)   
    {
        cin>>n;
        flag = 0;
        if(n < 2)
        {
             cout<<"Not prime"<<endl;
             continue;
        }
        else 
        {
            for(int i=2; i <= sqrt(n); i++)
            {
                //cout<<"value of n = "<<n<<" i = "<<i<<endl;
                //flag=0;
                if(n % i == 0)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag == 0)
        {
            cout<<"Prime"<<endl;
        }
        else 
        {
            cout<<"Not prime"<<endl;
        }


    }
    
    return 0;
}

