#include<iostream>
using namespace std;
int main()
{
   /* int arr[20]={11,22,33,44,55};
    int i, size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    //for(i=0;i<size;i++)
    {
       // cin>>arr[i];
    }
   // cout<<"the values in your arrays are"<<endl;
   // for(i=0;i<size;i++)
    {
       // cout<<arr[i]<<endl;
    }
    //now i will insert the value at start of array
  /*int value;
    cout<<"enter the value you want to insert in array"<<endl;
    cin>>value;
    for(i=size-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=value;
    size++;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    //now i wiil insert the value at any random position in an array
    int num,position,j;
    cout<<"enter the number you want to insert"<<endl;
    cin>>num;
    cout<<"enter the position at which you want to insert number at"<<endl;
    cin>>position;
    for(j=size-1;j>=position-1;j--)
    {
        arr[j+1]=arr[j];
    }
    arr[position-1]=num;
    size++;
    for(j=0;j<size;j++)
    {
        cout<<arr[j]<<endl;
    }*/
    //now i will insert at the end of an array
    int value;
    cout<<"enter the value you want to insert in an array"<<endl;
    cin>>value;
    arr[size]=value;
    size++;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    //deletion in an array
    /*for(i=position-1;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    //for unsorted array
    {arr[size]=arr[position-1];
    arr[position-1]=value;}*/




    return 0;
}