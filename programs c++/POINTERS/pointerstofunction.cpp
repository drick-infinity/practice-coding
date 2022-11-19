#include<iostream>
using namespace std;

//swapping two numbers...
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int a = 2;
	int b = 4;
	int *aptr = &a;
	swap(a,b);
	cout<<a<<" "<<b<<endl;
	return 0;
}

//void increment(int a){
//	a++;
//}
//int main(){
//	int a = 2;
//	increment(a);
//	cout<<a<<endl;
//	return 0;
//}