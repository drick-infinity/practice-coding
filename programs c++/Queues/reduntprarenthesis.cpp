#include<bits/stdc++.h>
using namespace std;
//int main(){
//	string s;
//	cin>>s;
//	stack<char> st;
//	bool ans = false;
//	for(int i=0;i<s.size();i++){
//		if(s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/'){
//			st.push(s[i]);
//		}
//		else if(s[i] == '('){
//			st.push(s[i]);
//		}
//		else if(s[i] == ')'){
//			if(st.top() == '('){
//				ans = true;
//			}
//			while(st.top() == '+' or st.top() == '-' or st.top() == '*' or st.top() == '/'){
//				st.pop();
//			}
//			st.pop();
//		}
//	}
//	cout<<ans;
//	return 0;
//	}
//stock span problem
//vector<int> stockspan(vector<int> prices){
//	vector<int> ans;
//	stack<pair<int,int>> s;
//	for(auto price: prices){
//		int days = 1;
//		while(!s.empty() and s.top().first <= price){
//			days += s.top().second;
//			s.pop();
//		}
//		s.push({price,days});
//		ans.push_back(days);
//	}
//	return ans;
//}
//
//int main(){
//	vector<int> a = {100,80,60,70,60,75,85};
//	vector<int> res = stockspan(a);
//	for(auto i: res)
//		cout<<i<<" "<<endl;
//	return 0;}

//three sum problem
//int main(){
//	int n;
//	cin>>n;
//	int target;
//	cin>>target;
//	
//	vector<int> a(n);
//	for(auto &i :a)
//	cin>>i;
//	bool found = false;
//	sort(a.begin(), a.end());
//	
//	for(int i=0;i<n;i++){
//		int lo = i+1,hi = n-1;
//		while(lo<hi){
//			int current = a[i] + a[lo] + a[hi];
//		
//			if(current == target){
//				found = true;
//			}
//			if(current < target){
//				lo++;
//			}
//			else{
//				hi--;
//			}
//		}
//	}
//	if(found)
//		cout<<"true";
//	else{
//		cout<<"false";
//	}
//	return 0;
//}	

//maximum consecutive ones
//int main(){
//	int n;
//	cin>>n;
//	int k;
//	cin>>k;
//	vector<int> a(n);
//	for(auto &i : a)
//	cin>>i;
//	 int zerocnt = 0, i=0,ans =0;
//	 for(int j=0;j<n;j++){
//	 	if(a[j] == 0)
//	 	zerocnt++;
//	 	while(zerocnt>k){
//	 		if(a[i] == 0){
//	 			zerocnt--;
//			 }
//			 i++;
//		 }
//		 ans = max(ans,j-i+1);
//	 }
//	 cout<<ans;
//	return 0;
//}


//longest substring without repeating characters
//int main(){
//	string s;
//	cin>>s;
//	vector<int> dict(256,-1);
//	
//	int maxLen = 0 ,start = -1;
//	for(int i=0;i<s.size();i++){
//		if(dict[s[i]] > start)
//		start = dict[s[i]];
//		dict[s[i]] = i;
//		maxLen = max(maxLen,i-start);
//	}
//	cout<<maxLen;
//	return 0;
//}