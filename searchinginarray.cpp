#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,1,3,4,2};
    int i,count=0,m;
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter number you want to find"<<endl;
    cin>>m;
    for(i=0;i<size;i++)
    {
        if(arr[i]==m)
        {
            cout<<"number is found at position"<<i+1<<""<<endl;
            count++;
            
        }
       
    }
    cout<<"number is found"<<""<<count<<"times in array"<<endl;
        return 0;
}