#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	int a[10]=	{9,3,5,4,1,10,8,6,7,2};
	sort(a, a+10); // �迭 ��ü�� �޸� �ּҸ� �ǹ��Ѵ�.  
	// ������ �޷θ� �ּҰ� �ִ°ŷ� �ϸ�ȴ�.3
	for(int i=0; i<10;i++){
		cout << a[i] << ' ';
	}
}
