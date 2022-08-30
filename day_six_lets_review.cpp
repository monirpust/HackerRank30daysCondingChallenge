#include <cmath>
#include <cstdio>
#include<cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int t;
    
    cin>>t;

    string s[t];
    
    for(int i=0; i<t; i++)
    {
        cin>>s[i];
    }
    
    for(int i = 0; i<t; i++)
    {
        int n = s[i].length();
 
        // declaring character array
        char char_array[n + 1];
        strcpy(char_array, s[i].c_str());
        
        for(int j = 0; j<n; j++)
        {
            if((j % 2 == 0) ) cout<<char_array[j];
            if(j==(n-1)) cout<<" ";
        }
        
        for(int j = 0; j<n; j++)
        {
            if((j % 2 != 0) ) cout<<char_array[j];
        }
        cout<<endl;

    }
      
    return 0;
}
