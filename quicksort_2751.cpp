#include <stdio.h>


int data[1000001];


void quickSort(int *data, int start, int end){
	if(start>=end){
		return;
	}
	int key= start;
	int i= key+1, j=end, temp;
	while(i<=j){// 여기서 실제로 돌아감.  
		while(data[i]<=data[key]){
			
			i++;
		}
		while(data[j]>=data[key]&&j> start){
			j--;
		}
		if(i>j){// 엇갈린 상태라면,  
			temp= data[j];
			data[j]=data[key];
			data[key]=temp; 
		}else{
			temp= data[i];
			data[i]=data[j];
			data[j]=temp;
			
		}
	} 
	quickSort(data,start,j-1);
	quickSort(data,j+1,end);
}

int main(void){
	
int number;
	
	scanf("%d",&number);
	for(int i=0;i<number;i++){
		scanf("%d",&data[i]);
	}
	quickSort(data,0,number-1);
	
	for(int i=0;i<number;i++){
		printf("%d\n" , data[i]);
	}
	
}
