#include<stdio.h>

int main(){
	
	int a,b,c;
	printf("Canh a : ");
	scanf("%d", &a); 
	printf("Canh b : ");
	scanf("%d", &b); 
	printf("Canh c : ");
	scanf("%d", &c); 
	
	if ( a + b >c && b + c > a && a + c > b) {
		printf("Ba canh a,b,c la mot tam giac.\n"); 
	} else
	    printf("Ba canh a,b,c khong phai la mot tam giac.\n");
		
    return 0;
} 
