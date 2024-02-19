#include<iostream>
using namespace std;
int main()
{   //selection sort
	int arr[]={11,33,17,55,21,1,79,65,48,0,99,23,4};
	int size=sizeof(arr)/sizeof(arr[0]);
	int i,j;
	for(i=0;i<size;i++)
	{
		int min=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			swap(arr[i],arr[min]);
		}
		
	}
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
	//bubble sort
	int array[]={13,4,11,17,2,1,68,23,19,0};
	int size=sizeof(array)/sizeof(array[0]);
	cout<<size<<endl;
	int i,j,k;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(array[j]>array[j+1])
			{
				swap(array[j],array[j+1]);
			}
		}
	}
	for(k=0;k<size;k++)
	{
		cout<<array[k]<<endl;
	}
	//insertion sort
	int arr[]={22,11,43,4,2,6,8,99,101,78,21,29,33};
	int size=sizeof(arr)/sizeof(arr[0]);
	int i,j;
	for(i=1;i<size;i++)
	{
		int current=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>current)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=current;
	}
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	

	return 0;
}