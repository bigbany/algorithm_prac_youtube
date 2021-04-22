#include <stdio.h>
#include <vector> // ㄷ단순배열이라고 생각하자.  
#include <algorithm>
#include <iostream> //c++ 헤더역할  


using namespace std;

bool compare(pair<string, pair<int,int> > a,
			 pair<string, pair<int,int> > b){
	if(a.second.first==b.second.first){
		return a.second.second > b.second.second;
	}
	else{
		return a.second.first > b.second.first; 
	}
}


int main(void){
	vector<pair<string,pair<int,int> > > v; // 쌍으로 데이터를 받을 것이다.  
	v.push_back(pair<string, pair<int,int> >("박현강",pair<int,int>(90,19970208)));
	v.push_back(pair<string, pair<int,int> >("박청이",pair<int,int>(92,19960608)));
	v.push_back(pair<string, pair<int,int> >("박현남",pair<int,int>(80,19981208)));
	v.push_back(pair<string, pair<int,int> >("박현정",pair<int,int>(90,19930606)));
	v.push_back(pair<string, pair<int,int> >("박현현",pair<int,int>(95,19970708)));

	// .push_back은 list의 마지막에 집어넣는걸 의 미 
	for(int i=0;i<v.size();i++){
		cout<< v[i].first << ' '; 
		if(i==v.size()-1){
			printf(" \nbefore sorting\n");
		}
	}
	sort(v.begin(),v.end(),compare);
		for(int i=0;i<v.size();i++){
		cout<< v[i].first << ' '; 
		if(i==v.size()-1){
			printf(" \nafter sorting");
		}
	}
	return 0;
} 
