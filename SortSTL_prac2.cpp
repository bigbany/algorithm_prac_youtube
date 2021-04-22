#include <stdio.h>
#include <vector> // ㄷ단순배열이라고 생각하자.  
#include <algorithm>
#include <iostream> //c++ 헤더역할  

using namespace std;

int main(void){
	vector<pair<int,string> > v; // 쌍으로 데이터를 받을 것이다.  
	v.push_back(pair<int, string>(90,"박한울"));//먼저 받는 건 int, 그 후는 stirng 
	v.push_back(pair<int,string>(85,"박현"));
	v.push_back(pair<int,string>(80,"박현방"));
	v.push_back(pair<int,string>(89,"박수현"));
	v.push_back(pair<int,string>(70,"박청현"));
	// .push_back은 list의 마지막에 집어넣는걸 의 미 
	for(int i=0;i<v.size();i++){
		cout<< v[i].second << ' '; 
		if(i==v.size()-1){
			printf(" \nbefore sorting\n");
		}
	}
	sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++){
		cout<< v[i].second << ' '; 
		if(i==v.size()-1){
			printf(" \nafter sorting");
		}
	}
	return 0;
} 
