#include<iostream>
using namespace std;             //Required Headers

struct node{
  char data;
  node *next;
  node *pre;
};  
                             //Structure to create a new node of Stack
bool isEmpty(node *TOP){
    if(TOP==NULL){
      return true;
    }
    else{return false;}
}                         //function to check if the stack is empty

  void push(node *&TOP,node *&BOT,char data){
    if(isEmpty(TOP)){
      node *new_node = new node;
      new_node->data=data;
      new_node->pre=NULL;
      new_node->next=NULL;
      TOP=new_node;
      BOT=new_node;
    }
    else{
      node *new_node = new node;
      new_node->data=data;
      TOP->next=new_node;
      new_node->next=NULL;
      new_node->pre=TOP;
      TOP=new_node;
    }
    
  }                                //function to inset elements in stack.

  char pop(node *&TOP,node *&BOT){
    if(isEmpty(TOP)){return 0;}
    else if(TOP==BOT){
      int data = TOP->data;
      delete(TOP);
      TOP=BOT=NULL;
      return data;
    }
    else{
      int data=TOP->data;
      TOP=TOP->pre;
      delete(TOP->next);
      return data;
    }
  }                             //function to pop elements in stack.


int main(){
  int T;                         //Number of test cases
  string str;                    //String input;
  cin>>T;
  cin.ignore(100, '\n');         //To ignore the 'ENTER' pressed during cin being read as empty string;
  while(T!=0){
    T--; 
    node *TOP=NULL;
    node *BOT=NULL;
    getline(cin,str);
    int len =str.length();

    for(int i=0;i<len;i++){

      char sym = str[i];
      
      if(sym==')'){                         // if closing brackets pop all elements while we encounter opening bracket in stack
	char p= pop(TOP,BOT);
	while(p!='('){
	  cout<<p;
	  p=pop(TOP,BOT);
	}
	
      }

      else if((sym>=40&&sym<=47) || sym==94){ //if elements having ascii in between 40 to 47 that is '(' to '/' or ^ put in stack.
	push(TOP,BOT,sym);
      }
      else{cout<<sym;}
    }
    cout<<endl;
  }
}
