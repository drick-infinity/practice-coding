#include<bits/stdc++.h>
using namespace std;
//trapping rain water harvesting
int rain_water(vector<int> a){
	stack<int> st;
	int n = a.size(),ans=0;
	for(int i=0;i<n;i++){
		while(!st.empty() and a[st.top()] < a[i]){
		int cur = st.top();
		st.pop();
		if(st.empty()){
			break;
		}
		int diff = i - st.top() - 1;
		ans += (min(a[st.top()],a[i]) - a[cur]) * diff;
		}
		st.push(i);
		}
	return ans;
}
int main(){
	vector<int> a = {0,1,0,2,1,0,1,3,2,1,2,1};
	cout<<rain_water(a);
	
	return 0;
}

//Largest Rectangle in a histogram
//Given an array.Each element represents the height to the histogram bar and the width of each bar is 1,find the area of largest rectangle in histogram

//#include<bits/stdc++.h>
////#include<stack>
//using namespace std;

//int get_max_Area(vector<int> a){
//	int n =  a.size(), ans =0,i=0;
//	stack<int> st;
//	a.push_back(0);
//	while(i<n){
//		while(!st.empty() and a[st.top()] > a[i]){
//			int t = st.top();
//			int h = a[t];
//			st.pop();
//			if(st.empty()){
//				ans=max(ans,h*i);
//			}
//			else{
//				int len = i -st.top() - 1;
//				ans = max (ans ,h*len);
//			}
//		}
//		st.push(i);
//		i++;
//	}
//	return ans; 
//} 
//
//int main(){
//	
//	vector<int> a = {2,1,5,6,2,3};
//	cout<<get_max_Area(a);
//	return 0;
//}