#include <stdio.h>
#include <algorithm>


// github 개새끼야 

int main(void){
	
	int number = 9;
	int heap[9]= {7,6,5,8,3,5,9,1,6};  
	
	for(int i=1; i<number;i++){ // 1부터 8까지 돌겠구만!  
		int c =i;
		do{
			int root = (c-1)/2; //root 의 값은 0, 0, 1, 1,2,2,3,3  
			if(heap[root]<heap[c]){ //만약 루트에 있는 값이  
				int temp = heap[root];
				heap[root]= heap[c];
				heap[c]= temp;
			}
			c= root;	
		}while( c!=0); 
	}
	
	for(int i=number -1; i>=0;i--){
		int temp =heap[0];
		heap[0]= heap[i];
		heap[i]=temp;
		int root =0;
		int c=1;
		
		do{
			c=2*root +1;
			
			if(c<i-1 &&heap[c]< heap[c+1]){
				c++;
			}
		
		
		if(c< i&& heap[root]<heap[c]){
			temp =heap[root];
			heap[root]= heap[c];
			heap[c]=temp;
		}
		root=c;
	}while(c<i);
}
	
	
	for(int i=0; i<number; i++){
		printf("%d", heap[i]);
	}
	
} 
