//#include<iostream>
//using namespace std;

//take user input in all
//multiplication of table

//add two matrix
//int main(){
//	int r,c,a[20][20],b[20][20],sum[50][50],i,j;
//	cout<<"Enter the number of rows and columns:";
//	cin>>r>>c;
//	cout<<"Enter the elements of first Matrix"<<endl;
//	for(i=0;i<r;i++){
//		for(j=0;j<c;j++){
//			cout<<"Enter element a"<<i+1<<j+1<<":";
//			cin>>a[i][j];
//		}
//	}
//	cout<<"Enter the elements of second Matrix"<<endl;
//	for(i=0;i<r;i++){
//		for(j=0;j<c;j++){
//			cout<<"Enter element b"<<i+1<<j+1<<":";
//			cin>>b[i][j];
//		}
//	}
//	for(i=0;i<r;i++){
//		for(j=0;j<c;j++){
//			sum[i][j] = a[i][j]+b[i][j];
//		}
//	}
//	cout<<"Sum of matrix:"<<endl;
//	for(i=0;i<r;i++){
//		for(j=0;j<c;j++){
//			cout<<sum[i][j]<<" ";
//			if(j == c-1)
//			cout<<endl;
		
//		}
//	}
//	
//}
//
//prime or not 
//int main(){
//	int n;
//	cin>>n;
//	bool flag = 0;
//	for(int i=2;i<n;i++){
//		if(n%i==0){
//			cout<<"Non-Prime"<<endl;
//			flag = 1;
//			break;
//		}
//		}
//		if(flag==0){
//			cout<<"Prime"<<endl;
//	}
//	return 0;
//}
//
//find odd or even
//int main(){
//	int n;
//	cin>>n;
//	
//	if(n%2==0){
//		cout<<"even"<<endl;
//	}
//	else{
//		cout<<"odd"<<endl;
//	}
//	return 0;
//}
//
//print fibonacci series
//int main(){
//	int n;
//	cin>>n;
//	int a1 = 0;
//	int a2 = 1;
//	int nextTerm;
//	for(int i=1;i<=n;i++){
//		cout<<a1<<endl;
//		nextTerm = a1 + a2;
//		a1 = a2;
//		a2 = nextTerm;
//		
//	}
//	return 0;
//}
//
//implement factorial of given number using function
//int fact(int n){
//	int factorial = 1;
//	for(int i=2;i<=n;i++){
//		factorial *= i;
//	}
//	return factorial;
//}
//
//int main(){
//	int n;
//	cin>>n;
//	
//	int ans = fact(n);
//	cout<<ans<<endl;
//	return 0;
//}
//
//find the largest number b\w three numbers
//int main(){
//	
//	int a,b,c;
//	cin>>a>>b>>c;
//	if(a>b){
//		if(a>c){
//			cout<<a<<endl;
//		}
//		else{
//			cout<<c<<endl;
//		}}
//		else{ 
//			if (b>c){
//			cout<<b<<endl;
//			}
//		else{
//			cout<<c<<endl;
//		}}
//	
//	return 0;
//}
//
//
//find the largest number b\w two numbers
//int main(){
//	int a,b;
//	cin>>a>>b;
//	
//	if(a>b){
//		cout<<a<<endl;
//	}
//	else{
//		cout<<b<<endl;
//	}
//	
//	
//	return 0;
//}
//
//
//find sum of digits of a given number
//int main(){
//    int n,sum=0,i;
//	cin>>n;
//	
//		
//		while(n>0){
//			i = n%10;
//			sum += i;
//			n = n/10;
//		}
//		cout<<sum<<endl;
//	return 0;
//}