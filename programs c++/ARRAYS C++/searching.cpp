#include<iostream>
using namespace std;

//linerar search function

int linearSearch(int arr[], int n, int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
}

int main(){
	
	//{12,18,20,42,,8,10}
	
	int n;
	cin>>n;
	//input of array
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	
	cout<<linearSearch(arr,n,key)<<endl;
	return 0;
}