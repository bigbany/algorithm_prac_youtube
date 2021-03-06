#include <stdio.h>



void quickSort(int*data, int start, int end){
	if(start>=end){
		return;
	}	
	
	
	int key = start;
	int i 	= start+1;
	int j	= end;
	int temp;
	
	while(i<=j){
		while(i<= end && data[i]<= data[key]){
			i++;
		}
		while(j>start &&data[j]>= data[key]){
			j--;
		}
		if(i>j){
			temp = data[j];
			data[j]=data[key];
			data[key]=temp;
		}
		else{
			temp =data[i];
			data[i]=data[j];
			data[j]=temp;
		}

	}
	quickSort(data,start,j-1);
	quickSort(data,j+1,end);
}



int main(void){
	int data[10]= {1,10,5,8,7,6,4,3,2,9};
	
	quickSort(data,0,9);
	
	
	for(int i=0;i<10;i++){
		printf("%d", data[i]);
	}
	
	
}
