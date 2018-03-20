#include<stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct node{
    char val;
    node *next;
    node *prev;
};

node *base = NULL;
node *top_item = NULL;

void push(char val)
{
    if(base==NULL) //If the list is empty
    {
        base=new node;
        base->val=val;
        base->next=NULL;
        base->prev=NULL;
        top_item = base;

    }
    else
    {
        node *temp = top_item;
        top_item->next = new node;
        top_item = top_item->next;
        top_item->val = val;
        top_item->next = NULL;
        top_item->prev = temp;
    }
}

char pop()
{
   if ( top_item == NULL ) return NULL;
    char val = top_item->val;
    node *temp = top_item;
    if ( top_item->prev == NULL ){
        top_item = NULL;
        base = NULL;
    }
    else {
    top_item = top_item->prev;
    top_item->next = NULL;
    }
    delete(temp);
    return val;
}

char top()
{
   // if ( top_item == NULL ) return NULL;
    return top_item->val;
}

int is_emp()
{
    if ( top_item == NULL ) return 1;
    else return 0;
}


bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}
bool AreParanthesesBalanced(string exp)
{
	for(int i =0;i<exp.length();i++)
	{
		if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			push(exp[i]);
		else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			if(is_emp() || !ArePair(top(),exp[i]))
				return false;
			else
				pop();
		}
	}
	return is_emp() ? true:false;
}


int main()
{

  string expression;
	cout<<"Enter an expression:  "; // input expression from STDIN/Console
	cin>>expression;
	if(AreParanthesesBalanced(expression))
		cout<<"Balanced\n";
	else
		cout<<"Not Balanced\n";
    return 0;
}
