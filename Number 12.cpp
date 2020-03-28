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

void consume(node *&front1,node*&front2)
{
    node *temp;
    temp=front1;
    if(!front1)
    {
        front1=front2;
    }
    else
    {
        while(temp->next)
        {
            temp=temp->next;
        }
        temp->next=front2;
    }
    front2=0;

}
int main()
{
    node *front1=0;
    node *front2=0;
    create(front1,1);
    insert_value(front1,3);
    insert_value(front1,5);
    insert_value(front1,7);


    create(front2,2);
    insert_value(front2,4);
    insert_value(front2,6);

    consume(front1,front2);
    cout<<"list1-> ";
    display(front1);
    cout<<endl<<"list2-> ";
    display(front2);




}




