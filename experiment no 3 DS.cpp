# include<iostream>
using namespace std;

int main(){
	int n, key, choice;
	int arr[100];
	
	cout<<"enter number of elements:";
	cin >>n;
	
	cout<<"elements of an array:";
	for(int i=0;i<n;i++){
        cin>>arr[i];
}

cout<<"enter element for search:";
cin>>key;

cout<<"\n Choose search method:\n";
cout<<"1.Linear Search\n";
cout<<"2.Binary search\n";
cout<<"enter your choice:";
cin>>choice;

switch(choice)
{
	case 1:
		{
			int found=0;
			for (int i=0;i<n;i++){
				if (arr[i]==key) {
					cout<<"Element found at position: "<<i+1 <<endl;
					found = 1;
					break;
				}
		}
		if (!found) {
			cout<<"Element is not found" <<endl;
		}
		break;
}
    case 2:
    	{
    		int low = 0, high = n-1, mid;
    		int found = 0;
    		
    		while(low <= high){
    			mid = (low+high) / 2;
    			
    			if(arr[mid] == key) {
    				cout <<"Element found at position: " <<mid+1 <<endl;
    				found = 1;
    				break;
				}
				
				else if (arr[mid]<key){
					low = mid+1;
				}
				else {
					high = mid-1;
				}
			}
			if (!found){
				cout <<"Element not found"<<endl;
			}
			break;
		}
		default:
			cout<<"Invalid Choice" <<endl;
		}
		return 0;
}
