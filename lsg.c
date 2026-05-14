#include<stdio.h>
int main()

{
	int i;
	GT:
		if(i <= 10){
			printf("%d", i);
			i++;
			goto GT;
		}
}