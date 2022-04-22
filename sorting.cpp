//Sorting 
#include<bits/stdc++.h>

using namespace std;
//Bubble Sort
void bubbleSort(vector<int>&v,int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(v[j]>v[j+1]){
				swap(v[j],v[j+1]);
			}
		}
	}
}
//Insertion Sort
void insertionSort(vector<int>&v,int n){
	for(int i=1;i<n;i++){
		int key=v[i];
		int j=i-1;
		while(j>=0 && v[j]>key){
			v[j+1]=v[j];
			j--;
		}
		v[j+1]=key;
	}
}

//Selection Sort
void selectionSort(vector<int>&v,int n){
	for(int i=0;i<n-1;i++){
		int minIndex=i;
		for(int j=i+1;j<n;j++){
			if(v[j]<v[minIndex]){
				minIndex=j;
			}
		} 
		swap(v[minIndex],v[i]);
		
	}
}

//Quick Sort


int partition(vector<int>&v,int lo,int hi){

	int beg=lo-1;
	int pivot=v[hi];
	for(int i=lo;i<hi;i++){
		if(v[i]<pivot){
			beg++;
			swap(v[beg],v[i]);
		}
	}
	swap(v[beg+1],v[hi]);
	return beg+1;

}
void quickSort(vector<int>&v,int lo,int hi){

	if(lo<hi){
		int pi=partition(v,lo,hi);
		quickSort(v,lo,pi-1);
		quickSort(v,pi+1,hi);
	}

}


//MergeSort

void mergeSort(vector<int>&v,int lo,int mid,int hi){
	int len1=mid-lo+1;
	int len2=hi-mid;
	int farr[len1];
	int sarr[len2];
	for(int i=0;i<len1;i++){
		farr[i]=v[i+lo];
	}
	for(int i=0;i<len2;i++){
		sarr[i]=v[i+mid+1];
	}
	int i=0,j=0,k=lo;
	while(i<len1 and j<len2){
		if(farr[i]<sarr[j]){
			v[k++]=farr[i];
			i++;
		}else{
			v[k++]=sarr[j];
			j++;
		}
	}
	while(i<len1){
	v[k++]=farr[i++];
	}
	while(j<len2){
	v[k++]=sarr[j++];
	}
}
void merge(vector<int>&v,int lo,int hi){
	if(lo<hi){
		int mid=(lo+hi)/2;
		merge(v,lo,mid);
		merge(v,mid+1,hi);
		mergeSort(v,lo,mid,hi);
	}
}
int main(){

	int n;cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	//selectionSort(v,n);
	//quickSort(v,0,n-1);
	merge(v,0,n-1);
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";                  
	}
}