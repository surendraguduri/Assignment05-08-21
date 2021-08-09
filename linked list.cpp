#include<stdio.h>
	#include<stdlib.h>
	struct ll //linked list
	{
		int data;
		struct ll *next;
	};
	typedef struct ll node;
	node *first = NULL, *last = NULL;
	void create_node(int ele)
	{
		node *new = (node*)malloc(sizeof(node));
		if(first == NULL)
		{
			new -> data = ele;
			new-> next = NULL;
			first = last = new;
		}
		else
		{
			new -> data = ele;
			new -> next = NULL;
			last -> next = new;
			last = new;
		}
	}
	void display()
	{
		node *temp = first;
		if(temp==NULL)
		{
		    printf("List is empty\n");
		}
		else
		{
		    while(temp!=NULL)
		    {
			    printf("%d->",temp->data);
			    temp=temp->next;
		    }
		}
		
	}
	int main()
	{
		create_node(100);
		create_node(200);
		create_node(300);
		display();
		return 0;
	}

