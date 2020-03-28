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

bool Issorted(node *&front)
{
    node *temp,*temp1;
    temp=front;
    temp1=temp->next;
    while(temp1!=0)
    {
        if(temp->data>=temp1->data)
            return false;
        temp=temp1;
        temp1=temp->next;
    }
    return true;


}
int main()
{
    node *front=0;
    create(front,1);
    insert_value(front,2);
    insert_value(front,3);
    insert_value(front,4);
    insert_value(front,5);
    cout<<"Is the list sorted (true/false)?"<<endl<<Issorted(front)<<endl;

    create(front,5);
    insert_value(front,8);
    insert_value(front,6);
    insert_value(front,4);
    insert_value(front,5);
    cout<<"Is the list sorted (true/false)?"<<endl<<Issorted(front);


}

