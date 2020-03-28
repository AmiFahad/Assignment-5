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
void chopbothside(node *&front,int index)
{
    node *temp,*temp1,*previous=0,*current=0,*A;
    temp=front;
    temp1=temp;
    int length=0,i,j=0;
    if(front==0)
    {
        return;
    }
    while(temp)
    {

        temp=temp->next;
        length++;

    }
    i=length-(index*2);
    if(i<0)
    {
        return;
    }
    while(j<(i+index))
    {
        previous=temp1;
        temp1=temp1->next;
        if(j<index)
        {
            delete previous;
        }
        else
        {
            if(!current)
                current=previous;
        }
        j++;
    }
    previous->next=0;
    while(temp!=0)
    {
        A=temp1;
        temp1=temp1->next;
        delete A;

    }
    front=current;



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
int main()
{
    node *front=0;
    create(front,10);
    insert_value(front,20);
    insert_value(front,30);
    insert_value(front,40);
    insert_value(front,50);
    insert_value(front,60);
    insert_value(front,70);
    insert_value(front,80);
    insert_value(front,90);
    insert_value(front,100);
    insert_value(front,110);
    chopbothside(front,3);
    chopbothside(front,1);

    display(front);



}
