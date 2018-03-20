#include<stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct node{
    int val;
    node *next;
};

    node *head = NULL;
    node *tail = NULL;

    void enqueue(int val)
    {
        if(head==NULL) //If the list is empty
        {
            head=new node;
            head->val=val;
            head->next=head;
            tail = head;
        }
        else
        {
            tail->next = new node;
            tail = tail->next;
            tail->val = val;
            tail->next = head;
        }
    }

    void print()
    {
        printf("Queue: ");
        if ( head == NULL ) { printf("\n");return ;}
        node *current_node=head;
        printf("%d ", current_node->val);
        while(current_node->next!=head){
              current_node = current_node->next;
              printf("%d ", current_node->val);
        }
        printf("\n");
    }

    int dequeue()
    {
        if ( head == NULL ) return NULL;
        int val = head->val;
        node *temp = head;
        if ( head->next == head ){
            head = NULL;
        }
        else {
        head = head->next;
        }
        delete(temp);
        tail->next = head;
        return val;
    }

    int peek()
    {
        if ( head == NULL ) return NULL;
        return head->val;
    }

    int is_emp()
    {
        if ( head == NULL ) return 1;
        else return 0;
    }

    /*void delete_item(int n)
    {
        node *for_delete = root;
        node *previous = NULL;
        while ( for_delete->val != n ){
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
    }*/







int main()
{

    string s;
    int val;
    while( 1 )
    {
        cin>>s;
        if( s == "enqueue")
        {
            cin>>val;
            enqueue(val);
            print();

        }
        else if( s == "dequeue")
        {
            printf("Dequeued value : %d\n", dequeue() );
            print();

        }
        else if( s == "peek" )
        {
             printf("Peeked value : %d\n", peek() );
             print();
        }
    }

    return 0;
}
