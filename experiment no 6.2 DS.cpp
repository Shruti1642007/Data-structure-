#include<iostream>
using namespace std;
#define SIZE 10

class HashTable{
	int table[SIZE];
	
public:
    HashTable(){
  	    for(int i=0;i<SIZE;i++){
  		    table[i]= -1;
	    }
    }	
  
    int hashFunction(int key){
  	    return key % SIZE;
    }
    void insert(int key){
        int index = hashFunction(key);
  	
  	    if(table[index] == -1){
	  		table[index] = key;
	  		cout<<key<<"inserted at index"<<index<<endl;
	    }else{
	  		cout<<"Collision occured at index"<<index<<endl;
	  	}
  	}
  	void display(){
        cout<<"\nHash Table:\n";
    	for(int i=0; i<SIZE; i++){
            if(table[i] == -1){
              cout<<i<<"-> empty"<<endl;
        }else{
            cout<<i<<"->"<<table[i]<<endl;
      
	 	 }
 	 }
  }
};

int main(){
	HashTable h;
	int choice, key;
	
	while(true){
		cout<<"\n1.insert\n2.Display\n3.Exit\nEnter your choice:";
		cin>>choice;
		
		switch(choice){
			case 1:
				cout<<"Enter key to insert :";
				cin>>key;
				h.insert(key);
				break;
				
		    case 2:
		    	h.display();
		    	break;
			
			case 3:
			    cout<<"Exit" <<endl;
				
			default:
			  cout<<"Invalid choice!Try again. \n";			
		}
	}
}
