#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={3,1,4,3,5,9,2};
	int n=7;
	int i,j;
	for(i=0;i<n;i++)
	{
		int min=i;
		
		for( j=i+1;j<n;j++)
		{ 
			 if (arr[j]<arr[min])
			{
				min=j;
			}
		}if(min!=i)
		{
			swap(arr[min],arr[i]);
		}
		
	}
	//to remove the duplicates in array
	n = unique(arr, arr + n) - arr;


	//traversal
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
		
	}
	
return 0;
}