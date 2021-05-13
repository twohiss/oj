#include<stdio.h>
int main(){
int n,arry[100];
while(~scanf("%d",&n)){
	for(int i = 0;i < n;i++){
	    scanf("%d",&arry[i]);
	}
	for(int i = n-1;i >= 0;i--){
		printf("%d ",arry[i]);
		
	}
	printf("\n");
}
}
