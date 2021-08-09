#include<stdio.h>
	#include<stdlib.h>
	struct cll //circular linked list
	{
		char ch;
		struct cll *next;
	};
	typedef struct cll node;
	node *first = NULL, *last = NULL;
	void create_node(char vowels)
	{
		node *new = (node*)malloc(sizeof(node));
		if(first==NULL)
		{
			new -> ch=vowels;
			new-> next = first;
			first = last = new;
		}
		else
		{
			new -> ch = vowels;
			new -> next = first;
			last -> next = new;
			last = new;
		}
	}



	void display()
	{
		node *temp = first;
		do
		{
			printf("%c ", temp -> ch);
			temp = temp -> next;
		}while(temp!= first);
	}
	int main()
	{
		create_node('a'); 
		create_node('e'); 
		create_node('i'); 
		create_node('o'); 
		create_node('u'); 
		display();
		return 0;
	}

