#include <stdio.h>
#include <time.h>
#include <conio.h>

void delay(int number_of_seconds)
{
    int milli_seconds = 200 * number_of_seconds;
 
    clock_t start_time = clock();
 
    while (clock() < start_time + milli_seconds);
}
int main(){
	int i;
	int j;
	int a[4],b[4],c[4];
	int k=0;
	int win=0;
	
	printf("quanti punti ti giochi? ");
	scanf("%d", &j);
	
	printf("a b c\n");
	printf("-----\n");
	
	while (k <= j-1){
	printf("spin n'=%d\n",k+1);
	for(i=0;i<5;i++){
		delay(1);
		a[i]=1+rand()%3;
		b[i]=1+rand()%3;
		c[i]=1+rand()%3;
		printf("%d ",a[i]);
		printf("%d ",b[i]);
		printf("%d \n",c[i]);
	}
	if (a[4] == b[4] == c[4]){
		printf("hai vinto\n\n");
		win + 1;
	}
	else{
		printf("hai perso\n\n");
	}
	/*if (k == j){
		printf("you won: %d",win);}*/
	k++;
	}
	return 0;
	}
