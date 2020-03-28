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
int min(node *&front)
{
    node *temp;
    int min;

    min=front->data;
    temp=front->next;

    while(temp!=0)
    {
       if(min>temp->data)
       {
           min=temp->data;
       }
      temp=temp->next;

    }
    return min;
}

int main()
{
    node *front=0;
    create(front,-2);
    insert_value(front,0);
    insert_value(front,8);
    insert_value(front,7);
    insert_value(front,102);
   cout<<"The minimum value is :"<< min (front);

}

