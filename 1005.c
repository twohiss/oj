#include<stdio.h>
int main(){
    float a,b,t = 0;
    int c = 0;
    scanf("%f %f",&a,&b)
    	t = a + b;
    	c = int(t);
    	if(t - c == 0){
    		printf("这是一个伪整数，它的值为：%d",c);
		}
		else{
			printf("这是一个浮点数，它的值为：%.2f",t);
		}
}	
