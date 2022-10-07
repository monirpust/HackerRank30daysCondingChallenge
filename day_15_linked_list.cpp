#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
      	//cout<<" insert function"<<endl;
          //Complete this method
          if(head == NULL)
          {
                head = new Node(data);
                //cout<<"inside if of insert function"<<endl;
                return head;
          }
          
          Node *temp = head;
          
          while(temp->next != NULL)
          {
              temp = temp->next;
              //cout<<"inside while of insert function"<<endl;
          }
          
           temp->next = new Node(data);
           
           //head = temp->next;
           
           return head;
      }

      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
        //cout<<"inside while of main"<<endl;
    }	
	mylist.display(head);
		
}
