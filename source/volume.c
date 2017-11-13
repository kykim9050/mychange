#include <stdio.h>

void volume(){
 int v;
 double a;


 printf("type number (1.cc 2.ml 3.m^3 4.in^3 5.ft^3 6.yd^3 7.gal) : \n");
 scanf("%d",&v);

 if(v=1){
 printf("what 'cc'?\n");
 scanf("%lf",&a);
 printf("%lf cc is %lf ml, %lf m^3, %lf in^3, %lf ft^3, %lf yd^3, %lf gal\n",a,a,a/1000000,0.061024*a,0.000035*a,1.308*a/1000000,0.000264*a);
 }
 else if(v=2){
 printf("what 'ml'?\n");
 scanf("%lf",&a);
 printf("%lf ml is %lf cc, %lf m^3, %lf in^3, %lf ft^3, %lf yd^3, %lf gal\n",
 a,a,a/1000000,0.061024*a,0.000035*a,1.308*a/1000000,0.000264*a);
 }
 else if(v=3){
 printf("what 'm^3'?\n");
 scanf("%lf",&a);
 printf("%lf m^3 is %lf cc, %lf ml, %lf in^3, %lf ft^3, %lf yd^3, %lf gal\n",
 a,1000000*a,1000000*a,61023.7441*a,35.314667*a,1.307951*a,264.172052*a);
 }
 else if(v=4){
 printf("what 'in^3'?\n");
 scanf("%lf",&a);
 printf("%lf in^3 is %lf cc, %lf ml, %lf m^3, %lf ft^3, %lf yd^3, %lf gal\n",
 a,16.387064*a,16.387064*a,0.000016*a,0.000579*a,0.000021*a,0.004329*a);
 }
 else if(v=5){
 printf("what 'ft^3'?\n");
 scanf("%lf",&a);
 printf("%lf ft^3 is %lf cc, %lf ml, %lf m^3, %lf in^3, %lf yd^3, %lf gal\n",
 a,28316.8466*a,28316.8466*a,0.028317*a,1728*a,0.037037*a,7.480519*a);
 }
 else if(v=6){
 printf("what 'yd^3'?\n");
 scanf("%lf",&a);
 printf("%lf yd^3 is %lf cc, %lf ml, %lf m^3, %lf in^3, %lf ft^3, %lf gal\n",
 a,764554.858*a,764554.858*a,0.764555*a,46656*a,27*a,201.974026*a);
 }
 else if(v=7){
 printf("what 'gal'?\n");
 scanf("%lf",&a);
 printf("%lf gal is %lf cc, %lf ml, %lf m^3, %lf in^3, %lf ft^3, %lf yd^3\n",
 a,3785.41178*a,3785.41178*a,0.003785*a,231*a,0.133781*a,0.004951*a);
 }
 else
	printf("wrong number!!\n");

}
