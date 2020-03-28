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
void removeall(node *&front, int key)
{

    node *temp,*temp1;
    temp=front;
    while (temp !=0 && temp->data==key)
    {
        front=temp->next;
        delete temp;
        temp =front;
    }
    while (temp!=0)
    {
        while (temp !=0&& temp->data != key)
        {
            temp1 = temp;
            temp = temp->next;
        }
        if (temp==0)
        {
            return;
        }

        temp1->next = temp->next;
        delete temp;
        temp =temp1->next;
    }
}

int main()
{
    node *front=0;
    create(front,3);
    insert_value(front,9);
    insert_value(front,4);
    insert_value(front,2);
    insert_value(front,3);
    insert_value(front,18);
    insert_value(front,17);
    insert_value(front,4);
    insert_value(front,3);
    insert_value(front,8);
    removeall(front,3);
    display(front);

}

