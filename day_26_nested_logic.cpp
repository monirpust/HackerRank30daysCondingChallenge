#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int returnDay, returnMonth, returnYear;
    int dueDay, dueMonth, dueYear, fine=0;

    cin>>returnDay>>returnMonth>>returnYear;
    cin>>dueDay>>dueMonth>>dueYear;


    if(returnYear > dueYear)
    {
        fine = 10000;
        cout<<fine;
        return 0;
    }
    if((returnMonth > dueMonth) && (returnYear == dueYear))
    {
        fine = (returnMonth - dueMonth)*500;
        cout<<fine;
        return 0;

    }
    if((returnDay > dueDay) && (returnYear == dueYear) && (returnMonth == dueMonth))
    {
        fine = (returnDay - dueDay)*15;
        cout<<fine;
        return 0;
    }

    cout<<fine;

    return 0;
}

