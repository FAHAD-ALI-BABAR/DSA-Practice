#include<iostream>
using namespace std;
int mergetwoarrays()
{
    int a[]={2,5,8,11,15};
    int b[]={1,3,6,9,13,17,19,25,27};
    int m=5,n=9;
    int i=0,j=0,k=0;
    int resultant[m+n];
    while(i<m && j<n)
    if(a[i]<b[j])
{    
      resultant[k]=a[i];
      k++;
      i++;
    }else{
        resultant[k]=b[j];
        k++;
        j++;
    }
    while(i<m)
    {
        resultant[k]=a[i];
        i++;
        k++;
    }
    while(j<n){
        resultant[k]=b[j];
        j++;
        k++;
    }
    for(k=0;k<(m+n);k++)
    {
        cout<<resultant[k]<<endl;
    }
}
int main()
{
    mergetwoarrays();
    return 0;
}