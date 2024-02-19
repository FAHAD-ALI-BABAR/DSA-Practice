#include <iostream>

// Merge two subarrays of arr[]
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temporary arrays
    int L[n1];
    int R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temporary arrays back into arr[l..r]
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Main function to perform merge sort
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Find the middle point
        int m = l + (r - l) / 2;

		 // Display unsorted subarrays
        std::cout << "Unsorted Subarray 1: ";
        for (int i = l; i <= m; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Unsorted Subarray 2: ";
        for (int i = m + 1; i <= r; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

       
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
		  // Display the sorted subarray after merging
        std::cout << "Sorted Subarray: ";
        for (int i = l; i <= r; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

   
    // Call the merge sort function
    mergeSort(arr, 0, arr_size - 1);

    std::cout << "Sorted array: ";
    for (int i = 0; i < arr_size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
//more easy merge sort algorithm
/*
#include<iostream>
using namespace std;
int merge(int arr[],int lb,int mid,int ub)
{
	int i=lb;
	int j=mid+1;
	int k=lb;
	int b[ub+1];
	while(i<=mid && j<=ub)
	{
		if(arr[i]<arr[j])
		{
			b[k]=arr[i];
			i++;
			k++;
		}else{
			b[k]=arr[j];
			j++;
			k++;
		}
	}
	while(j<=ub)
	{
		b[k]=arr[j];
		j++;
		k++;
	}
	while( i<=mid)
	{
		b[k]=arr[i];
		i++;
		k++;
	}
	//copy the new sorted array to the initial unsorted array
    for (int k = lb; k <= ub; k++) {
        arr[k] = b[k];
    }



}
int mergesort(int arr[],int lb,int ub)
{
	if(lb<ub)
	{
		int mid=(lb+ub)/2;
		mergesort(arr,lb,mid);
		mergesort(arr,mid+1,ub);
		merge(arr,lb,mid,ub);
	}
}
int main()
{
	int arr[]={11,2,17,24,19,7,13,0};
	int size=sizeof(arr)/sizeof(arr[0]);
	int lb=0;
	int ub=size-1;
	mergesort(arr,0,ub);
	 cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
	return 0;
	
}
*/