#include<iostream>

using namespace std;

void merge(int arr[],int l,int m,int r){
	int nl = m - l + 1;
	int nr = r - m;
	int left[nl];
	int right[nr];
	int i,j,k=l;
	for(i=0;i<nl;i++){
		left[i]=arr[l+i];
	}
	
	for(j=0;j<nr;j++){
		right[j]=arr[m+1+j];
	}
	i=0;
	j=0;
	while(i< nl && j < nr){
		if (left[i]<=right[j]){

			arr[k]=left[i];
			i++;
		}
		else{
			arr[k]=right[j];
			j++;
		}
		k++;
	}
	
	while(i<nl){
		arr[k]=left[i];
		i++;
		k++;
	}
	
	while(j<nr){
		arr[k]=right[j];
		j++;
		k++;
	}
}	

void merge_sort(int arr[],int l,int r){
	if(l<r){
		int m = l+(r-l)/2;
		merge_sort(arr,l,m);
		merge_sort(arr,m+1,r);
		merge(arr,l,m,r);
	}	
}

int main(){

	int arr[] = {7,5,6,2,1,4}; 
	cout<<"The array before sorting is "<<endl;
	int i,n;
	n = sizeof(arr)/sizeof(arr[0]);
	for (i=0;i<n;i++){
		cout<<arr[i]<<" ";	
	}
	cout<<endl;
	
    	merge_sort(arr,0,n-1);

	cout<<"The array after sorting is "<<endl;
	for (i=0;i<n;i++){
		cout<<arr[i]<<" ";	
	}
	cout<<endl;

}
