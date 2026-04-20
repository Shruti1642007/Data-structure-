#include<iostream>
using namespace std;

class Stack{
	int arr[100];
	int top;
	
public:
   stack(){
   	 top=-1;
   }	
   
   void push(int value){
   	if(top>=99){
   		cout<<"Stack Overflow! Cannot push" <<value <<endl;
	   } else {
	   	arr[++top]=value;
	   	cout<<value<<"pushed into stack"<<endl;
	   }
   }
   void pop(){
   	if(top<0){
   		cout<<"Stack is empty" <<endl;
	   }else{
	   	cout<<arr[top--]<<"popped from stack"<<endl;
	   }
   }
   
   void display(){
   	if(top<0){
   		cout<<"Stack is empty";
	   }else{
	   	cout<<"Stack element are:";
	   	for(int i=0;i<=top;i++){
	   		cout<<arr[i]<<"";
		   }
		   cout<<endl;
	   }
   }
};
int main(){
	Stack s;
	int choice, value;
	
	while(true){
		cout<<"\n1.push\n2.pop\n3.Display\n4.Exit\nEnter your choice:";
		cin>>choice;
		
		switch(choice){
			case 1:
				cout<<"Enter valye to push:";
				cin>>value;
				s.push(value);
				break;
				
		    case 2:
		    	s.pop();
		    	break;
		    	
		    case 3:
			    s.display();
				break;
				
			case 4:
			    cout<<"Exit" <<endl;
				
			default:
			  cout<<"Invalid choice!Try again" <<endl;			
		}
	}
	return 0;
}
