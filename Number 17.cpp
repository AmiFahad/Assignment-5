#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void create(node *&front,int value)
{
    node *A=new node;
    if(front==0)
    {
        A->data=value;
        A->next=0;
        front=A;
    }
}
void addback(node *&front ,int A)
{
    node *temp,*temp1;
    temp=new node;
    temp->data=A;
    temp->next=0;
    if(front==0)
    {
        front=temp;
    }
    else
        {
          temp1=front;
          while(temp1->next!=0)
          {
              temp1=temp1->next;
          }
          temp1->next=temp;
        }

}
void insert_value(node *&front,int value)
{
    node *A=new node;
    node *temp;
    temp=front;
    A->data=value;
    A->next=0;
    while(temp->next!=0)
    {
       temp=temp->next;
    }
    temp->next=A;

}
node display(node *&front)
{
    node *temp;
    temp=front;
    while(temp!=0)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }

}
void doublelist(node *&front)
{
   node *current=0,*previous=0;
   node *temp;
   temp=front;
   while(temp)
   {
       previous=temp;
       addback(current,temp->data);
       temp=temp->next;

   }
   if(previous)
   {
       previous->next=current;
   }


}
int main()
{
    node *front=0;
    create(front,8);
    insert_value(front,23);
    insert_value(front,19);
    insert_value(front,7);
    insert_value(front,102);
    doublelist(front);
    display(front);

}

