//============================================================================
// Name        : okay.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void mergeSort(int arr[],int size);
void mergeS(int arr[], int low, int high);
void merge(int arr[], int low, int mid, int high);

int main() {
	int a[]={15,9,60,44,12,1,4};
	mergeSort(a,7);
	for(int i=0;i<7;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
void mergeSort(int arr[],int size){
	mergeS(arr,0,size-1);
}
void mergeS(int arr[], int low, int high){
	if(low<high){
		int mid=(low+high)/2;
		mergeS(arr,low,mid);
		mergeS(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
void merge(int arr[], int low, int mid, int high){
	int n1=mid-low+1;
	int n2=high-mid;
	int l[n1];
	int r[n2];
	for(int i=0;i<n1;i++){
		l[i]=arr[low+i];
	}
	for(int i=0;i<n2;i++){
		r[i]=arr[mid+i+1];
	}
	int i=0;
	int j=0;
	int k=low;
	while(i<n1&&j<n2){
		arr[k++]=(l[i]<r[j])?l[i++]:r[j++];
	}
	while(i<n1){
		arr[k++]=l[i++];
	}
	while(j<n2){
		arr[k++]=r[j++];
	}



}
