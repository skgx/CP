#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

struct node{
	int data;
	node *next;
}*first=NULL;

void create(int a[],int n)
{
	int i;
	node *t,*last;
	first=new node;
	first->data=a[0];
	first->next=NULL;
	last=first; //address of first is copied to last

	for(int i=1;i<n;i++)
	{
		t=new node; // a new node is created everytime
		t->data=a[i];
		t->next=NULL;
		last->next=t; //last has copy of previously created ll and it 
		  //stores address of currently created ll in "next" of previous ll
		last=t;
	}
}

void display(node *p)
{
	if(p!=NULL)
	{
		cout<<p->data<<" ";
		display(p->next);
	}
}

int main()
{
int a[5];
for(int i=0;i<5;i++)
cin>>a[i];
create(a,5);
display(first);
}