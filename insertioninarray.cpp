#include<iostream>
using namespace std;
int main()
{
	int arr[6]={1,2,3,4,5,6};
	int size=sizeof(arr)/sizeof(arr[0]);
	int number,i;
	
	int s=6;
	int ub=s-1;
	int lb=0;
	if(ub==-1){
		cout<<"array is empty"<<endl;
        return 0;
	}else if(ub==size)
	{
		cout<<"array is full"<<endl;
        return 0;
	}else{
        cout<<"the number you want to insert"<<endl;
	cin>>number;
	
	for(i=ub;i<s;i++)
	{
		arr[i+1]=number;
	}
	ub++;
	cout<<"after insertion your array is"<<endl;
	for(i=lb;i<=ub;i++)
	{
		cout<<arr[i]<<endl;
		
	}
}
	return 0;
}