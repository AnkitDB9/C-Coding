#include <iostream>

using namespace std;
struct Node{
   int data;
   Node* next;
   
   Node(int x){
      data=x;
      next=NULL;
   }
};

int intersection(Node *head1, Node* head2)
{  
   int l1=0,l2=0;
   Node *curr1=head1;
   Node *curr2=head2;
   while(curr1!=NULL){
      l1++;
      curr1=curr1->next;
   }
   
   while(curr2!=NULL){
      l2++;
      curr2=curr2->next;
   }
   curr1=head1;
   curr2=head2;
   int diff=abs(l1-l2);
   if(l1>l2){
      for(int i=0;i<diff;i++){curr1=curr1->next; }}
   else{
      for(int i=0;i<diff;i++){curr2=curr2->next; }}

   while(curr1!=NULL && curr2!=NULL){
      if(curr1->data==curr2->data)
         return (curr1->data);
      else
         {curr1=curr1->next; curr2=curr2->next;}
   }
   return -1;
}




int main()
{
   Node *head=new Node(10);
   head->next=new Node(20);
   head->next->next=new Node(30);
   head->next->next->next=new Node(40);
   head->next->next->next->next=new Node(50);
   Node* head1=new Node(30);
   head1->next=new Node(40);
   head1->next->next=new Node(50);
   int ans=intersection(head,head1);
   cout<<ans;
   return 0;
}
