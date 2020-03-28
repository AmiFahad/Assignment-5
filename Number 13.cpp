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

bool contains(node *&front,int key)
{
    node *temp;
    temp=front;
    while(temp!=0)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}
int main()
{
    node *front=0;
    create(front,1);
    insert_value(front,4);
    insert_value(front,3);
    insert_value(front,7);
    insert_value(front,8);
    insert_value(front,4);
    insert_value(front,6);
    insert_value(front,12);
    insert_value(front,22);
    insert_value(front,10);
    cout<<"Search :"<<contains(front,4);







}




