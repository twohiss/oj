#include<stdio.h>
int main(){
	int a,b,t = 0,s = 0;
	while(~scanf("%d %d",&a,&b)){
		if(a<b){
		for(int i = a;i<=b;i++){
			t+=i;
		}	
		printf("%d\n",t);
		t = 0;
	}
	else{
		s = a;
		a = b;
		b = s;
		while(a<=b){
			t+=a;
			a++;
		}
		printf("%d\n",t);
	}
}
	}
