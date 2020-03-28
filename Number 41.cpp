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
        cout<<temp->data<<endl;
        temp=temp->next;
    }

}

void switcheven(node *&front1,node*&front2)
{
    node *temp,*temp1;
    temp=front1;
    temp1=front2;
    while(temp!=0)
    {
        if((temp->data%2==0) && (temp1->data%2==0))
        {
            temp=temp1;
            cout<<temp->data<<" ";
            temp1=temp;
            cout<<endl<<temp1->data<<" ";

        }
        temp=temp->next;
        temp1=temp1->next;
    }
}
int main()
{
    node *front1=0;
    node *front2=0;
    create(front1,2);
    insert_value(front1,4);
    insert_value(front1,3);
    insert_value(front1,7);
    insert_value(front1,8);
    insert_value(front1,4);
    insert_value(front1,6);
    insert_value(front1,12);
    insert_value(front1,22);
    insert_value(front1,10);

    create(front2,66);
    insert_value(front2,55);
    insert_value(front2,16);
    insert_value(front2,43);
    insert_value(front2,8);
    insert_value(front1,4);
    insert_value(front1,39);
    insert_value(front1,12);

    switcheven(front1,front2);
    /*cout<<"front1->";
    display(front1);
    cout<<endl<<"front2->";
    display(front2);*/




}



