#include <stdio.h>

void main(){
 int p;
 double a;

 printf("type number(1.atm 2.Pa 3.bar 4.mmHg) : \n");
 scanf("%d",&p);

 if(p=1){
	printf("what 'atm'?\n");
	scanf("%lf",&a);
	printf("%lf atm is %lf Pa, %lf bar, %lf mmHg\n",a,101325*a,1.01325*a,
	750*a);
	}
 else if(p=2){
	printf("what 'Pa'?\n");
        scanf("%lf",&a);
        printf("%lf pa is %lf atm, %lf bar, %lf mmHg\n",a,9.8692*a/1000000,
	0.00001*a,0.007501*a);
	}
 else if(p=3){
        printf("what 'bar'?\n");
        scanf("%lf",&a);
        printf("%lf bar is %lf atm, %lf Pa, %lf mmHg\n",a,0.986823*a,100000*a,
	750.061683*a);
        } 
 else if(p=4){
        printf("what 'mmHg'?\n");
        scanf("%lf",&a);
        printf("%lf mmHg is %lf atm, %lf Pa, %lf bar\n",a,0.001316*a,133.322368*a,
	0.001333*a);
        }
 else
	printf("wrong number!!\n");


}
