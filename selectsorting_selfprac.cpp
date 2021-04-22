#include <stdio.h>



int main(void){
	int array[10]={1,3,6,4,7,8,5,9,2,10};
	int i,j,temp,index;

	for(i=0; i<10;i++){
		int min= 1001;
		for(j=i;j<10;j++){
			
			if(min>array[j]){
				min=array[j];
				index=j;
			}
		}
		temp= array[i];
		array[i]=array[index];
		array[index]=temp;
		
	}
	printf("this is for test \n");
	printf(" %d first index ", array[0]);
	
	for(int i=0; i<10; i++){
		printf("%d ",array[i]);
	}
	
	return 0;
}
