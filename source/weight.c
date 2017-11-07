#include <stdio.h>

void weight(){
 if(w=1){
	printf("what 'mg'?\n");
	scanf_s("$lf",$a);
	printf("%lf mg is %lf g, %lf kg, %lf t, %lf gr, %lf oz, %lf lb\n ",a,0.001*a,
	a/1000000,a/1000000000,0.015432*a,0.000035*a,2.2046*a/1000000);
	}
 else if(w=2){
	printf("what 'g'?\n");
        scanf_s("$lf",$a);
        printf("%lf g is %lf mg, %lf kg, %lf t, %lf gr, %lf oz, %lf lb\n ",a,1000*a,
	0.001*a,a/1000000,15.432358*a,0.035274*a,0.002205*a);
        }
 else if(w=3){
	printf("what 'kg'?\n");
        scanf_s("$lf",$a);
        printf("%lf kg is %lf mg, %lf g, %lf t, %lf gr, %lf oz, %lf lb\n ",a,1000000*a,
	1000*a,0.001*a,15432.3584*a,35.273962*a,2.204623*a);
        }
 else if(w=4){
        printf("what 't'?\n");
        scanf_s("$lf",$a);
        printf("%lf t is %lf mg, %lf g, %lf kg, %lf gr, %lf oz, %lf lb\n ",a,1000000000*a,
	1000000*a,1000*a,15432358.4*a,35273.9619*a,2204.62262*a);
        }
 else if(w=5){
        printf("what 'gr'?\n");
        scanf_s("$lf",$a);
        printf("%lf gr is %lf mg, %lf g, %lf kg, %lf t, %lf oz, %lf lb\n ",a,64.79891*a,
	0.064799*a,0.000065*a,6.4799*a/100000000,0.002286*a,0.000143*a);
        }
 else if(w=6){
        printf("what 'oz'?\n");
        scanf_s("$lf",$a);
        printf("%lf oz is %lf mg, %lf g, %lf kg, %lf t, %lf gr, %lf lb\n ",a,284349.5231*a,
	28.349523*a,0.02835*a,0.000028*a,437.5*a,0.0625*a);
        }
 else if(w=7){
        printf("what 'lb'?\n");
        scanf_s("$lf",$a);
        printf("%lf lb is %lf mg, %lf g, %lf kg, %lf t, %lf gr, %lf oz\n ",a,453592.37*a,
	453.59237*a,0.454592*a,0.000454*a,7000*a,16*a);
        }
 else
	printf("wrong number!!\n");


}
