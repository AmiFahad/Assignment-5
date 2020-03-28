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
void partionsort(node *&front)
{
    node *temp,*temp1;
    temp=front;
    temp1=temp->next;
    while(temp1!=0)
    {
        if((temp1->data)<(temp->data))
           {
              temp->next=temp1->next;
              temp1->next=front;
              front=temp1;
              temp1=temp;
           }
           else
           {
               temp=temp1;
               temp1=temp1->next;
           }
    }
}
int main()
{
    node *front=0;
    create(front,0);
    insert_value(front,0);
    insert_value(front,-3);
    insert_value(front,3);
    insert_value(front,-5);
    insert_value(front,7);
    insert_value(front,-9);
    insert_value(front,-10);
    insert_value(front,10);
    insert_value(front,-11);
    insert_value(front,-11);
    insert_value(front,11);
    insert_value(front,-11);
    insert_value(front,12);
    insert_value(front,-15);
    cout<<"Orginal list :"<<endl;
    display(front);

    cout<<endl<<endl<<"After Partionsort list :"<<endl;
    partionsort(front);
    display(front);

}



