#include <iostream>
using namespace std;



int partition(int arr[],int l, int r){

	int pivot = arr[r];
	int i=l-1;
	int j;
	for(j=i+1;j<r;j++){
		if(arr[j]<pivot){
		
		} 
	}


}

void quick_sort(int arr[],int l, int r){

	if(l<r){
		int p = partition(arr,l,r)
		quick_sort(arr,l,p-1);
		quick_sort(arr,p+1,r);
	}
}



int main{}{
	int arr[] = {7,5,6,2,1,4}; 
    cout<<"The array before sorting is "<<endl;
    int i,n;
    n = sizeof(arr)/sizeof(arr[0]);
    for (i=0;i<n;i++){
        cout<<arr[i]<<" ";  
    }
    cout<<endl;
    
    quick_sort(arr,0,n-1);

    cout<<"The array after sorting is "<<endl;
    for (i=0;i<n;i++){
        cout<<arr[i]<<" ";  
    }
    cout<<endl;

}

