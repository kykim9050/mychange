#include <stdio.h>

void length()
{
if(l=1){
	printf("what 'mm'?\n");
	scanf("$lf", &x);
	printf("%f mm is\n%f cm\n%f m\n%f km\n%f in\n%f ft\n%f yd\n%f mile\n",
		x, 0.1*x, 0.001*x, 0.000001, 0.000394*x, 0.000033*x, 0.000011*x, 0.00000062137*x);
	}
else if(l=2){
	printf("what 'cm'?\n");
	scanf("$lf", &x);
	printf("%f cm is\n%f mm\n%f m\n%f km\n%f in\n%f ft\n%f yd\n%f mile\n",
		x,10*x, 0.01*x, 0.00001*x, 0.393701*x, 0.032808*x, 0.010936*x, 0.0000062137*x);
	}
else if(l=3){
	printf("what 'meter'?\n");
	scanf("$lf", &x);
	printf("%f m is\n%f mm\n%f cm\n%f km\n%f in\n%f ft\n%f yd\n%f mile\n",
		x,1000*x, 100*x, 0.001*x, 39.370079*x, 3.28084*x, 1.093613*x, 0.000621*x);
	}
else if(l=4){
	printf("what 'km'?\n");
	scanf("$lf", &x);
	printf("%f km is\n%f mm\n%f cm\n%f m\n%f in\n%f ft\n%f yd\n%f mile\n",
		x,1000000*x, 100000*x, 1000*x, 39370.0787*x, 3280.8399*x, 1093.6133*x, 0.621371*x);
	}
else if(l=5){
	printf("what 'inch'?\n");
	scanf("$lf", &x);
	printf("%f inch is\n%f mm\n%f cm\n%f m\n%f km\n%f ft\n%f yd\n%f mile\n",
		x, 25.4*x, 2.54*x, 0.0254*x,0.000024*x, 0.08333*x, 0.027778*x, 0.000016*x);
	}
else if(l=6){
	printf("what 'ft'?\n);
	scanf("$lf", &x);
	printf("%f ft is\n%f mm\n%f cm\n%f m\n%f km\n%f in\n%f yd\n%f mile\n",
		x,304.8*x, 30.48*x, 0.3048*x, 0.000305*x, 12*x,0.3333*x, 0.000189*x);
	}
else if(l=7){
	printf("what 'yd'?\n");
	scanf("$lf", &x);
	printf("%f yd is\n%f mm\n%f cm,\n%f m\n%f km\n%f in\n%f ft\n%fmile",
		x,914.4*x, 91.44*x, 0.9144*x, 0.000914*x, 36*x, 3*x, 0.000568*x);
	}
else if(l=8){
	printf("what 'mile'?\n");
	scanf("$lf", &x);
	printf("%f mile is\n%f mm\n%f cm,\n%f m\n%f km\n%f in\n%f ft\n%f yd",
		x, 1609366*x, 160934.4*x, 1609.344*x, 1.609344*x, 63360*x, 5280*x, 1760*x);
	}
else 
	printf("wrong number!\n");

}
