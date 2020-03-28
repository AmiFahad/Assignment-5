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

void remove(node *&front, int index)
{

   if (front== NULL)
      return;

    node *temp;
    temp=front;

    if (index==0)
    {
        front= temp->next;
        delete temp;
        return;
    }

    for (int i=0;temp!=0 && i<index-1; i++)

      {
          temp = temp->next;
      }
    if (temp == 0 || temp->next == 0)
    {
        return;
    }

    node *next = temp->next->next;
    delete temp->next;

    temp->next = next;


}
int main()
{
    node *front=0;
    create(front,8);
    insert_value(front,23);
    insert_value(front,19);
    insert_value(front,7);
    insert_value(front,102);
    remove(front,2);
    display(front);

}


