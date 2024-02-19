#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4};
    int x=7;
    int n=4;
    int i=0;
    int j=n-1;
    bool found=false;
    while(i<j)
    {
        if(a[i]+a[j]==x)
        {
            found=true;
            break;

        }else if(a[i]+a[j]<x)
        {
           i++;
        }else{
            j--;
        }
    }
    if(found==true)
    {
        cout<<"YES"<<endl;

    }else{
        cout<<"NO"<<endl;

    }
    return 0;
  
}