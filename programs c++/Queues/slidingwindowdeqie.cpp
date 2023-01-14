#include<bits/stdc++.h>
#include<iostream>
#include<deque>

using namespace std;
//sliding window maximum
//int main(){
//	int n,k;
//	cin>>n>>k;
//	vector<int> a(n);
//	for(auto &i: a)
//	cin>>i;
//	
//	deque<int> q;
//	vector<int> ans;
//	for(int i=0;i<k;i++){
//		while(!q.empty() and a[q.back()]< a[i]){
//			q.pop_back();
//		}
//		q.push_back(i);
//	}
//	ans.push_back(a[q.front()]);
//	for(int i=k;i<n;i++){
//		if(q.front()==i-k){
//			q.pop_front();
//		}
//		while(!q.empty() and a[q.back()]< a[i]){
//			q.pop_back();
//		}
//		q.push_back(i);
//		ans.push_back(a[q.front()]);
//	}
//	
//	for(auto i : ans)
//		cout<<i<<" ";
//time complexitty is (o(1))
//	return 0;
//}

int main(){
	//n=no. of elements in array,k=window size
	int n,k,x;
	cin>>n>>k;
	vector<int> a(n);
	for(auto &i: a)
		cin>>i;
		
	multiset<int,greater<int>> s;//so that top value always maximum
	vector<int> ans;
	
	for(int i=0;i<k;i++){
		s.insert(a[i]);
	}
	ans.push_back(*s.begin());//value
	for(int i=k;i<n;i++){
		s.erase(s.lower_bound(a[i-x]));//for erasing only one element we use lower_bound
		s.insert(a[i]);
		ans.push_back(*s.begin());
	}	
	for(auto i: a)
	cout<<i<<" "<<endl;
//time complexitty is (nlogn)
	return 0;
}


//deque
//int main(){
//	deque<int> dq;
//	dq.push_back(1);
//	dq.push_back(2);
//	dq.push_front(3);
//	dq.push_front(4);
//	
//	for(auto i : dq) printing elements
//	cout<<i<<" "<<endl;
//	
//	return 0;
//}