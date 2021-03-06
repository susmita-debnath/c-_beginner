#include<stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct node{
    int roll;
    node *next;
};

struct node *root = NULL;

void insert_list(int roll)
{
    if(root==NULL) //If the list is empty
	{
		root=new node();
		root->roll=roll;
		root->next=NULL;
	}
	else
	{
		node *current_node=root; //make a copy of root node
		while(current_node->next!=NULL) //Find the last node
		{
			current_node=current_node->next; //go to next address
		}
		node *newnode = new node(); //create a new node
		newnode->roll=roll;
		newnode->next=NULL;

		current_node->next=newnode; //link the last node with new node
	}
}

void print()
{
    node *current_node=root;
		while(current_node!=NULL) //loop until you reach null
		{
            printf("%d\n",current_node->roll);
			current_node=current_node->next;
		}
}

void delete_item(int n)
{
    node *for_delete = root;
    node *previous = NULL;
    while ( for_delete->roll != n ){
        previous = for_delete;
        for_delete = for_delete->next;
    }
    if(for_delete==root){
        node *temp = root;
        root = root->next;
        delete(temp);
    }
    else {
        previous->next = for_delete->next;
        delete(for_delete);
    }
}
int main()
{
    int roll;

    insert_list(6);
    insert_list(4);
    insert_list(2);
    insert_list(3);
    insert_list(9);
    delete_item(2);
    print();
}
