#include<iostream>
#include<string.h>
using namespace std;

int size=15;
char s[15];
int top=-1;
char token[30];
 
 void push(char item){
   if(top +1 == size)
   {
     cout<<"Stack overflow";
   }
   else
   {
     top++;
     s[top]=item;
     cout<<item<<" is pushed."<<endl;

   }
 }

 int pop(){
   char item;
   if(top==-1){
     cout<<"Stack underflow";}
   else
   {
     item=s[top];
     top--;
     cout<<item<<" is popped."<<endl;
   }
   return item;
}

class tokenize{
	public:
		char e[100];
		int l,i;
		
		tokenize(char exp[100]){
			strcpy(e,exp);
			l=0;
		}
		
		char *toNextToken(){
			i=0;
			char *token= new char[30];
			if(e[l]=='\0'){
				token[i]='\0';
			}
			else if(e[l]=='+' || e[l]=='-' || e[l]=='/' || e[l]=='*'){
				token[i]=e[l];
				token[i+1]='\0';
				l++;
			}
			
			else{
				while(e[l]>='0' && e[l]<='9'){
					token[i]=e[l];
					i++;
					l++;
				}
				token[i]='\0';
				
			}
			return token;
		}
};

class Oper{
	public:
		char op[5];
		int prior[5];
		
		Oper(){
			strcpy(op, "+-*/%");	
			prior[0]=0;
			prior[1]=0;
			prior[2]=1;
			prior[3]=1;
			prior[4]=1;
		}
		
		int getpriority(char s){
		int i=0;
		while(i<=4)
		{
			if(s==op[i])
				return prior[i];
			i++;
		}
		return -1;
	}
};

char getTopelement()
{
	return (s[top]);
}

char* add(char p[],char k)
{
	int l = strlen(p);
	p[l]=k;
	p[l+1]='\0';
	return p;
}

int main(){
	int len;
	char infix[100],p[100],k[100],c, ch;
	p[0]='\0';
	cin.getline(infix,100);
	len=strlen(infix);
	Oper o;
	infix[len]=')';
	infix[len+1]='\0';
	push('(');
	
	cout<<infix<<endl;
	
	tokenize t = tokenize(infix);
	
	strcpy(k,t.toNextToken());
	cout<<k[0]<<endl;
		
	/*
	while(k[0]!='\0')
	{
		if(k[0]=='('){
			push(k[0]);
		}
		
		if(k[0]>='0' && k[0]<='9'){
			if(strlen(p)!=0)
				add(p,' ');
			strcat(p,k);
		}
		
		if(k[0]==')'){
			c=pop();
			cout<<"l";
			while(c!='('){
				add(p,',');
				add(p,c);
			}	
		}
		
		if(k[0]=='+' || k[0]=='-' || k[0]=='*' || k[0]=='/' || k[0]=='%')
		{
			ch=getTopelement();
			while(o.getpriority(ch)>=o.getpriority(k[0]))
			{
				ch=pop();
				add(p,ch);
				add(p,',');
				ch=getTopelement();
			}
			push(k[0]);
		}
	strcpy(k,t.toNextToken());
	}*/
	cout<<p;
}


