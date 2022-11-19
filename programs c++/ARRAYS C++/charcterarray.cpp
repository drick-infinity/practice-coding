#include<iostream>
using namespace std;

//charcter array
//int main(){
//	char arr[100] = "apple";
//	int i=0;
//	while(arr[i]!='\0'){
//		cout<<arr[i]<<endl;
//		i++;
//		}
//		return 0;
//		
//}
//int main(){
//int n;
//cin>>n;
//
//char arr[n+1];
//cin>>arr;
//
//bool check = 1;
//
//for(int i=0; i<n; i++){
//	if(arr[i] != arr[n-1-i]){
//		check = 0;
//		break;
//	}
//}
//if(check == true){
//	cout<<"word is a palindrome"<<endl;
//}
//	else
//	{
//		cout<<"word is not palindrome"<<endl;
//	}
//return 0;
//}

int main(){
	int n;
	cin>>n;
	
	cin.ignore();
	
	char arr[n+1];
	
	cin.getline(arr,n);
	cin.ignore();
	int i=0;
	
	int currLen = 0,maxLen = 0;
	int st = 0, maxst = 0;
	while(1){
		if(arr[i] == ' ' || arr[i] == '\0')
		
		{
			if (currLen>maxLen){
				maxLen = currLen;
			maxst = st;
			}
			currLen = 0;
			st = i+1;
		}
	
	else
	currLen++;
	if(arr[i] == '\0')
	break;
	i++;}
	
	cout<<maxLen<<endl;
	for(int i=0;i<maxLen;i++)
	cout<<arr[i+maxst];
	return 0;
}