#include <stdio.h>
#include <vector> // ���ܼ��迭�̶�� ��������.  
#include <algorithm>
#include <iostream> //c++ �������  


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
	vector<pair<string,pair<int,int> > > v; // ������ �����͸� ���� ���̴�.  
	v.push_back(pair<string, pair<int,int> >("������",pair<int,int>(90,19970208)));
	v.push_back(pair<string, pair<int,int> >("��û��",pair<int,int>(92,19960608)));
	v.push_back(pair<string, pair<int,int> >("������",pair<int,int>(80,19981208)));
	v.push_back(pair<string, pair<int,int> >("������",pair<int,int>(90,19930606)));
	v.push_back(pair<string, pair<int,int> >("������",pair<int,int>(95,19970708)));

	// .push_back�� list�� �������� ����ִ°� �� �� 
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
