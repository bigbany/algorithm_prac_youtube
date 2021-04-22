#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	int a[10]=	{9,3,5,4,1,10,8,6,7,2};
	sort(a, a+10); // 배열 자체는 메모리 주소를 의미한다.  
	// 마지막 메로리 주소가 있는거로 하면된다.3
	for(int i=0; i<10;i++){
		cout << a[i] << ' ';
	}
}
