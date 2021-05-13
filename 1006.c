#include<stdio.h>
int main(){
    int a , b , c , d ,e ;
    
    while(~scanf("%d %d",&a,&b)){
    	if(a>=90&&a<=100)
    		c = 1;
		 if(a<=89&&a>=80)
			c = 2;
		 if(a<=79&&a>=70)
			c = 3;
		 if(a<=69&&a>=60)
			c = 4;
		if(a<60&&a>=0)
			c = 5;
		
		if(b>=90&&b<=100)
    		d = 1;
		 if(b<=89&&b>=80)
			d = 2;
		 if(b<=79&&b>=70)
			d = 3;
		 if(b<=69&&b>=60)
			d = 4;
		if(b<60&&b>=0)
			d = 5;
	   e = (c+d)/2;
		switch(e){
			case 1:
			printf("A\n");
			break;
			case 2:
			printf("B\n");
			break;
			case 3:
			printf("C\n");
			break;
			case 4:
			printf("D\n");
			break;
			case 5:
			printf("E\n");
			break;
		}
	}

}	

