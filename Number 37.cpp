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
int size(node *&front)
{
    int count=0;
    node *temp;
    temp=front;
    if(front==0)
    {
        return 0;
    }
    while(temp!=0)
    {
        temp=temp->next;
        count++;
    }
    return count;
}

int main()
{
    node *front=0;
   create(front,8);
    insert_value(front,23);
    insert_value(front,19);
    insert_value(front,7);
    insert_value(front,102);
    cout<<"Number of node in the list is :"<<endl<<size(front);


}



