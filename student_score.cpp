#include  <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

class Student{
public:
	string name;
	int score;
	Student(string name, int score){// 생성자 
		this->name =name;
		this->score = score; 
	}
	// 정렬 기준은 점수가 작은 순서 
	bool operator < (Student &student){
		return this->score <student.score;
	}
	
};

int main(void){
	Student student[]={
		Student("박현강",90),
		Student("박현청",91),
		Student("박현은",92),
		Student("써니",93),
		Student("강건",94) 
	};
	
	sort(student, student+5);
	for(int i=0;i<5;i++){
		cout << student[i].name << ' '; 
	}
}
