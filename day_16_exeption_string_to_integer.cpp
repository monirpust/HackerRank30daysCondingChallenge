#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    int n;
    getline(cin, S);

    try 
    {
        n = stoi(S);
        cout<<n<<endl;

    }
    
    catch(...)
    {
        cout<<"Bad String"<<endl;
    }

    return 0;
}
