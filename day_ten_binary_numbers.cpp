#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    int remainder, count=0;
    stack<int> s;
    vector<int> v;

    while(n != 0)
    {
        remainder = n % 2;
        //cout<<remainder<<endl;
        s.push(remainder);
        n = n/2;

        //cout<<n<<endl;
    }

 /*   while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
*/

    while(!s.empty())
    {
        if(s.top()==1)
        {
           count++;
           s.pop();

           if(s.empty()){
             v.push_back(count);
           }

           //cout<<"from while and if"<<endl;
        }
        else
        {
            v.push_back(count);
            count = 0;
            s.pop();
            //cout<<"from while and else"<<endl;
        }

    }

   /* int vector_size = v.size();
    for(int i=0; i<vector_size; i++){
        cout<<v[i]<<endl;
    }
    */

    cout<<*max_element(v.begin(), v.end())<<endl;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
