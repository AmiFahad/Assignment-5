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
node passby(node *&A,int I)
{
	int i=0;
	while(A)
	{
		if(i==I)
		break;
        A=A->next;++i;
	}

	if(i!=I)
	return ;
	return A;
}
void combineDuplicates(node *& front)
{
	node *temp;
	temp=front;
	node *previous=0,*Next;
	int sum=0;
	if(front==0)
    {
      return;
    }

	while(temp)
	{
		next=skipby(temp,1);
		sum=temp->data;
		while(Next)
		{
			if(temp->data==Next->data)
			{
				sum+=Next->data;
				temp->next=Next->next;

				delete Next;
				Next=passby(temp,1);
				if(!Next)
				temp->data=sum;
			}
			else
			{
				temp->data=sum;
				break;
			}
		}
		cout<<endl;
		temp=temp->next;
    }
}
int main()
{
    node *front=0;
    create(front,3);
    insert_value(front,3);
    insert_value(front,4);
    insert_value(front,4);
    insert_value(front,4);
    insert_value(front,4);
    insert_value(front,-1);
    insert_value(front,-1);
    insert_value(front,4);
    insert_value(front,12);
    insert_value(front,12);
    insert_value(front,12);
    insert_value(front,12);
    insert_value(front,48);
    insert_value(front,-5);
    insert_value(front,-5);
    combineduplicate(front);
    display(front);

}
