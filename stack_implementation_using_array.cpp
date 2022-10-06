#include<bits/stdc++.h>

using namespace std;

int mypush(int element);
int mypop();
int mytop();
int mysize();
void myisempty();

	int top = -1;
	int mystack[5];

int main()
{

	cout<<mypush(5)<<endl;
	cout<<mypush(6)<<endl;
	cout<<mypush(9)<<endl;
	cout<<mypush(3)<<endl;
	cout<<mypush(7)<<endl;
	
	cout<<"Pop operation: "<<mypop()<<" popped out"<<endl;
	cout<<"Pop operation: "<<mypop()<<" popped out"<<endl;
	
	cout<<mypush(10)<<endl;
	
	cout<<"Current size is : "<<mysize()<<endl;
	
	cout<<"Stack elements: "<<endl;
	
	for(int i = 4; i >= 0; i--)
	{
		cout<<mystack[i]<<endl;
	}
	
}

int mypush(int element)
{
		top = top + 1;
		mystack[top] = element;
		
		return mystack[top];
}

int mypop()
{
	if(top > -1)
	{
		int destroyed = mystack[top];
		mystack[top] = 0;
		top = top-1;
		
		return destroyed;
	}
	
	else
	{
		cout<<"Can't delete from empty stack"<<endl;
	}
}

int mytop()
{
	if(top > -1)
		return mystack[top];
	else
		return 0;
}

int mysize()
{
	if(top > -1)
	{
		return top + 1;
	}
	
	else
	{
		return 0;
	}
}

void myisempty()
{
	if(top > -1)
	{
		cout<<"No"<<endl;
	}
	
	else
	{
		cout<<"Yes"<<endl;
	}
}
