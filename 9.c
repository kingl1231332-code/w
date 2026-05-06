#include<stdio.h>
int main()

{
	int a = 490, b =  90, c = 100;
	
	if(a > b) {
		if(a > c){
			printf("A is Max");
		}else{
			printf("C is Max");
       }
	}else{
		if(b > c){
				printf("B is Max");
		}else{
			printf("C is Max");
		}
		
	}
}
