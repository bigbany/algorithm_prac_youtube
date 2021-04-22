#include  <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

class Student{
public:
	string name;
	int score;
	Student(string name, int score){// ������ 
		this->name =name;
		this->score = score; 
	}
	// ���� ������ ������ ���� ���� 
	bool operator < (Student &student){
		return this->score <student.score;
	}
	
};

int main(void){
	Student student[]={
		Student("������",90),
		Student("����û",91),
		Student("������",92),
		Student("���",93),
		Student("����",94) 
	};
	
	sort(student, student+5);
	for(int i=0;i<5;i++){
		cout << student[i].name << ' '; 
	}
}
