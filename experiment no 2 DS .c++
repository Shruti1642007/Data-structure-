#include <iostream>
using namespace std;
int main()
{
	int r1,r2,c1,c2,choice;
	int A[10][10], B[10][10],c[10][10];
	
	cout <<"Enter rows and columns of matrix A:";
	cin>>r1>>c1;
	cout <<"Enter rows and columns of matrix B:";
	cin>>r2>>c2;
	
	cout <<"Enter elements of matrix A:" <<endl;
	for(int i=0;i<r1;i++)
	   for(int j=0; j<c1;j++)
	     cin >> A[i][j];
	     
	cout<<"Enter elements of matrix B:" <<endl;
	for(int i=0;i<r2;i++)
	   for(int j=0;j<c2;j++)
	      cin >> B[i][j];
		  
	do{
		cout<<"-----Matrix Operation------" <<endl;
		cout<<"1.Addition"<<endl;
		cout<<"2.Substraction"<<endl;
		cout<<"3.Multiplication"<<endl;
		cout<<"4.Exit"<<endl;
		cout<<"Enter your Choice:";
		cin>>choice;
		
		switch(choice){
			case 1:
				if(r1 == r2 && c1 == c2){
					cout<<"Result of Addition:"<<endl;
					for (int i=0;i<r1;i++){
						for(int j=0;j<c1;j++){
							c[i][j]=A[i][j]+B[i][j];
							cout<<c[i][j]<<"";
						}
						cout<<endl;
					}
				}else{
					cout<<"Addition not possible due to different dimension"<<endl;
				}
				break;
			case 2:
				if(r1 == r2 && c1 == c2){
					cout<<"Result of Substraction:"<<endl;
					for (int i=0;i<r1;i++){
						for(int j=0;j<c1;j++){
							c[i][j]=A[i][j]-B[i][j];
							cout<<c[i][j]<<"";
						}
						cout<<endl;
					}
				}else{
					cout<<"substraction not possible due to different dimension"<<endl;	
		}
		break;
		    case 3:
				if(c1 == r2){
					cout<<"Result of Multiplication:"<<endl;
					for (int i=0;i<r1;i++){
						for(int j=0;j<c1;j++){
						c[i][j]=0;
						for(int k=0;k<c1;k++){
							c[i][j]=A[i][j]*B[k][j];
						}
						cout<<c[i][j]<<" ";
						}
						cout<<endl;
					}
				}else{
					cout<<"Multiplication not possible due to different dimension"<<endl;
	}
	break;
	case 4:
	cout<<"Exiting...."<<endl;
	break;
	
	default:
	cout<<"Invalid Choice!" <<endl;	    
}

}while (choice!=4);
return 0;
}
