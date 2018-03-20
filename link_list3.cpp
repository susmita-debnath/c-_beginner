#include<stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct node{
    int roll;
    node *next;
};
struct mylist{
    node *root = NULL;
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

    double average()
    {
        int sum, n;
        double aver;
        node *temp = root;
        sum = root->roll;
        n = 1;

        while( temp->next != NULL ){
            temp = temp->next;
            sum = sum + temp->roll;
            printf("%d,", temp->roll);
            n++;
        }
        printf("n = %d %d\n", n, sum);
        aver = sum / n;
        return aver;
    }


};//end mylist


int main()
{

    mylist a, b;
    a.insert_list(2);
    a.insert_list(4);
    a.insert_list(6);
    a.insert_list(8);
    a.print();

    b.insert_list(1);
    b.insert_list(2);
    b.insert_list(3);
    b.insert_list(10);
    b.print();
    printf("%0.2lf\n%0.2lf\n", a.average(), b.average());

    return 0;
}
