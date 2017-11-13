#include <stdio.h>
#include "weight.h"
#include "pressure.h"
#include "volume.h"

int main(){
	int i;
	printf("what kind of unit do you want? press number\n");
	printf("1.length 2.weight 3.pressure 4.volume 5.temperature\n");
	scanf("%d",&i)

	if(i==1){

	}
	else if(i==2){
		void weight();
	}
	else if(i==3){
		void pressure();
	}
	else if(i==4){
		void volume();
	}
	else if(i==5){

	}
	else{
		printf("wrong number\n");
	}

	return 0;
}
