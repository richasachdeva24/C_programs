#include<iostream>
using namespace std;

struct Dnode{
		Dnode *b;
		int data;
		Dnode *f;
	}*head, *tail;

void insert(int item){
		Dnode *t;
		t=new Dnode;
		t->data = item;	
		if(head==NULL){
			t->f = NULL;
			t->b = NULL;
			head = tail = t;
		}
		else{
			t->b = NULL;
		
			t->f = head;
			head->b=t;
			head = t;
		}
}

void traverse(){

	Dnode *t;
	t=tail;
	while(t!=NULL){
		cout<<t->data<<" ";
		t=t->b;
	}
}

int main(){
	head=tail=NULL;
	char c;
	int item;
	cin>>c;
	while(c=='y'){
		cin>>item;
		insert(item);
		cin>>c;
	}
	
	traverse();	
}#include<iostream>
using namespace std;

int main()


