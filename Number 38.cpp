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
node display(node *&front)
{
    node *temp;
    temp=front;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

void split(node *&front)
{
    node*current,*next=0,*prev=0;
    current=front;
    while(current!=0)
    {
        if((current->data)<0)
        {
            next=current->next;
            current->next=front;
            front=current;

            prev->next=next;
            current=prev;


        }
        prev=current;
        current=current->next;
    }
}
int main()
{
    node *front=0;
    create(front,8);
    insert_value(front,7);
    insert_value(front,-4);
    insert_value(front,19);
    insert_value(front,0);
    insert_value(front,43);
    insert_value(front,-8);
    insert_value(front,-7);
    insert_value(front,2);
    cout<<"Orginal list :"<<endl;
    display(front);

     cout<<endl<<endl<<"After split function :"<<endl;
    split(front);
    display(front);

}



