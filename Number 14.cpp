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
void counduplicate(node *&front)
{
    node *temp,*temp1;
    temp=front;
    temp1=temp->next;
    int count=0;
    while(temp1!=0)
    {
        if(temp->data==temp1->data)
        {
           count++;
           temp=temp1;
           temp1=temp->next;
        }
        else
        {
            temp=temp1;
            temp1=temp->next;
        }


    } cout<<count;

}
int main()
{
    node *front=0;
    create(front,1);
    insert_value(front,1);
    insert_value(front,1);
    insert_value(front,3);
    insert_value(front,3);
    insert_value(front,6);
    insert_value(front,9);
    insert_value(front,15);
    insert_value(front,15);
    insert_value(front,23);
    insert_value(front,23);
    insert_value(front,23);
    insert_value(front,40);
    insert_value(front,40);
    counduplicate(front);


}
