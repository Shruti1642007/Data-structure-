#include<iostream>
using namespace std;

class Queue{
	int arr[100];
	int front, rear;
	
public:
    Queue(){
    	front = -1;
    	rear = -1;
	}
	void enqueue(int value){
		if(rear >= 99){
			cout<<"Queue Overflow! cannot insert " << value <<endl;
		}
		else{
			if(front == -1)
			    front = 0;
			arr[++rear] = value;
			cout << value <<" inserted into queue" << endl;    
		}
	}
	
	void dequeue(){
		if(front == -1 || front > rear){
			cout << "Queue is empty" << endl;
		}
		else{
			cout << arr[front++] <<"deleted from queue" << endl;
		}
	}
	
	void display(){
		if(front == -1 || front > rear){
			cout << "queue is empty" <<endl;
		}
		else{
			cout << "Queue elements are:";
			for(int i = front; i <= rear; i++){
				cout << arr[i] << " ";
			}
			cout << endl;
		}
	}	
};

int main(){
	Queue q;
	int choice, value;
	
	while(true){
		cout << "\n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit\nEnter youe choice: ";
		cin >> choice;
		
		switch(choice){
			case 1:
				cout << "Enter value to insert: ";
				cin >> value;
				q.enqueue(value);
				break;
				
			case 2:
			    q.dequeue();
				break;
			
			case 3:
			    q.display();
				break;
				
			case 4:
			     cout << "Exit" << endl;
				 return 0;
				 
			default:
			    cout << "Invalid choice! Try Again." << endl;	 			
		}
	}
}
