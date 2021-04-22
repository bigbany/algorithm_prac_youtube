#include <stdio.h>

int main(void){
	
	int array[10]={3,1,6,4,7,8,5,9,2,10};
	
	int i,j, temp;
	for (i=0;i<9;i++){
		for(j=i;j>=0;j--){
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;	
			}
		}
	}
	for(int i=0;i<10;i++){
		
			printf("%d ", array[i]);
	
	}
}
