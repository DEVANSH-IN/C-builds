#include <stdio.h>

int main(void) {
	int amount, nohun, nofivty,noten, nofive, notwo, noone , total;
	printf("Please Enter The Amount:");
	scanf("%d",&amount);
	nohun = amount/100;
	amount = amount%100;
	nofivty = amount/50;
	amount = amount%50;
	noten = amount/10;
	amount = amount%10;
	notwo = amount/2;
	amount = amount%2;
	noone = amount/1;
	amount = amount%1;
	total = nohun + nofivty +noten +notwo + noone;
	printf("Smallest Number Of Note is...%d\n",total);
	return 0;
}


