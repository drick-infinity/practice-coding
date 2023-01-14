#include<iostream>
using namespace std;


class student{
		string name;
	public:
		int age;
		bool gender;
		
		//copy constructer
		student(student &a){
	cout<<"Copy constructor"<<endl;
			name = a.name;
			age = a.age;
			gender = a.gender;
		}	
		//defautlt constructor
		student(){
			cout<<"Default Constructor"<<endl;
		}
		
		// parametreized construcotr
		student(string s, int a,int g){
		cout<<"Parameterizes Constructor"<<endl;
			name = s;
			age = a;
			gender = g;
		}
		~student(){
			cout<<"DEestructore called"<<endl;
		}
		void setName(string s){
			name = s;
		}
		void getName(){
			cout<<name<<endl;
			}

		void printInfo(){
		cout<<"name =";
		cout<<name<<endl;
		cout<<"Age = ";
		cout<<age<<endl;
		cout<<"Gender = ";
		cout<<gender<<endl;}
		
		bool operator == (student &a){
			if(name == a.name && age == a.age && gender == a.gender){
				return true;
			}
			return false;
		}
};
int main(){
//	student arr[3];
//	for(int i=0;i<3;i++){
//		string s;
//		cout<<"name =";
//		cin>>s;
//		arr[i].setName(s);
//		//cin>>arr[i].name;
//		cout<<"Age = ";
//		cin>>arr[i].age;
//		cout<<"Gender = ";
//		cin>>arr[i].gender;
//	}
//	for(int i=0;i<3;i++){
//		arr[i].printInfo();
//	}

	 student a("Urvi",20,1);
	 //a.printInfo();
	 student b;
	 student c = a;
	 
	 if(c == a){
	 	cout<<"Same"<<endl;
	 }
	 else{
	 	cout<<"Not Same"<<endl;
	 }
	return 0;
}