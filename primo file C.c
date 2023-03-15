#include<stdio.h>
#include<stdlib.h>
#define N 5
void spin(){
	int ingresso = 0;
	scanf("%d",&ingresso);
	int a[N],b[N],c[N];
	int win=0;
	int lose=0;
	for(int d=0;d<ingresso;d++){
		printf("\n----%d---\n",(d+1));
		for(int e=0;e<N;e++){
			a[e]=1+(rand()%3);
			b[e]=1+(rand()%3);
			c[e]=1+(rand()%3);
			printf("  %d,%d,%d\n",a[e],b[e],c[e]);	
		}
		if(a[4]==b[4] && b[4]==c[4]){
			printf("you win\n");
			win++;
		}
		else{
			printf("you lose\n");
			lose++;
		}
	}
	printf("\nyou won for :%d , you lose for :%d \n",win,lose);
	win=0;
	lose=0;
}
int main(){
	while(1){
		printf("int the number of spin : ");
		spin();
	}
	return 0;
}
