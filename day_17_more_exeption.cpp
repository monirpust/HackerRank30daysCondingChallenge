#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

//Write your code here
class Calculator
{
    public:
        int power(int x, int n)
        {
            if(x<0 || n<0)
            {
                throw invalid_argument("n and p should be non-negative");
            }
            else
            {
                int result = 1;
                for(int i = 0; i < n; i++)
                {
//                	if(n==0)
//                	{
//                		result = 1;
//                		break;
//					}
                    result = result*x;
                    cout<<"inside loo result = "<<result<<endl;
                }
                cout<<"result = "<<result<<endl;
                return result; 
            }
            
              
        }
};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}
