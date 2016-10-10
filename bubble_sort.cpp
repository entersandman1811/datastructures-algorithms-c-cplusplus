#include<iostream>
using namespace std;


void bubble_sort(int arr[], int length){
	int i,j,temp;
	for(i=0;i<length-1; i++){
		for(j=0; j<length-1-i;j++)
			if (arr[j]>arr[j+1]){
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1]= temp;
			}
	}

}

int main(){
	int i,j;	
	int arr[] = {7,6,2,4,19};
	int length = sizeof(arr)/sizeof(arr[0]);
	cout<<"the length is"<<length<<endl;
	bubble_sort(arr,length);
	for (i=0;i<length;i++){
		cout<<arr[i]<<" ";
	}
return 0;
}
