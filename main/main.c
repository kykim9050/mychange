#include <stdio.h>
#include "weight.h"
#include "pressure.h"
#include "volume.h"
#include "length.h"
#include "temp.h"


int main(){
	int i;
	printf("what kind of unit do you want? press number\n");
	printf("1.length 2.weight 3.pressure 4.volume 5.temperature\n");
	scanf("%d",&i);

	if(i==1){
		 length();
	}
	else if(i==2){
		 weight();
	}
	else if(i==3){
		 pressure();
	}
	else if(i==4){
		 volume();
	}
	else if(i==5){
		 temp();
	}
	else{
		printf("wrong number\n");
	}

	return 0;
}
