#include <stdio.h>
#include <vector> // ���ܼ��迭�̶�� ��������.  
#include <algorithm>
#include <iostream> //c++ �������  

using namespace std;

int main(void){
	vector<pair<int,string> > v; // ������ �����͸� ���� ���̴�.  
	v.push_back(pair<int, string>(90,"���ѿ�"));//���� �޴� �� int, �� �Ĵ� stirng 
	v.push_back(pair<int,string>(85,"����"));
	v.push_back(pair<int,string>(80,"������"));
	v.push_back(pair<int,string>(89,"�ڼ���"));
	v.push_back(pair<int,string>(70,"��û��"));
	// .push_back�� list�� �������� ����ִ°� �� �� 
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
