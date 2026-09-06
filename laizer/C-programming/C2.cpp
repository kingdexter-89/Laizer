#include<stdio.h>
int main(){
	int marks[]={1,2,3,4,5,6,7};
	int sum=0;
	for (sum=0; i<7; i++){
		sum += marks[sum];
	}
	printf("sum is: %d\n", sum);
	return 0;
}
