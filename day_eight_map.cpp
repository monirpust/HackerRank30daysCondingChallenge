#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, phone;
    string name;
    map <string, int> phonebook;
    
    cin>>n;
    
    for(int i = 0; i<n; i++)
    {
        cin>>name>>phone;
        phonebook[name] = phone;
    }
    

    
    map <string, int>::iterator point = phonebook.begin();
    
    while(cin>>name)
    {
  
        if(phonebook[name]){
            //cout<<name<<endl;
            point = phonebook.find(name);
            cout<<point->first<<"="<<point->second<<endl;
        }
        
        else
            cout<<"Not found"<<endl;
        
        //point++;
        
    }
    
    return 0;
}
