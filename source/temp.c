#include <stdio.h>

void temp()

{

int t;
double c;

printf("type number(1.℃  2.℉ ,3. K) : \n");
scanf("%d", &t);

if(t=1)
{
	printf("what '℃ '?\n");
	scanf("%lf", &c);
	printf("%lf ℃  is\n%lf ℉ \n%lf K",c, 1.8*c+32, c+273);
}
else if(t=2){
	printf("what '℉ '?\n");
	scanf("%lf", &c);
	printf("%lf ℉  is\n%lf ℃ \n%lf K",c, (c-32)/1.8, ((c-32)/1.8)+273);
}
else if(t=3){
	printf("what 'Kel'?\n");
	scanf("%lf", &c);
	printf("%lf K is\n%lf ℃ \n%lf ℉ ",c, c-273, ((c-273)*1.8+32));
}
else
	printf("wrong number!\n");
}
