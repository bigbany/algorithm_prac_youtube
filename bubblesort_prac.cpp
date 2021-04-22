#include <stdio.h>

int main(void){
		int array[10]={1,3,6,4,7,8,5,9,2,10};
	
	
	int i,j,max,index,temp ;
	
	for(i=0; i<10;i++){
		
		
		for(j=0;j<9-i;j++){
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j+1]=array[j];
				array[j]=temp;
			}
		}
		}
		
		for(int i=0; i<10;i++){
			printf("%d ", array[i]);
		}
	}


