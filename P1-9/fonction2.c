#include<stdio.h>
#include<stdlib.h>

double conversion(double francs)
{
	return francs / 6.55957;
}

int main(int argc, char *argv[])
{
	printf("10 francs = %f€\n", conversion(10));
	printf("50 francs = %f€\n", conversion(50));
	printf("100 francs = %f€\n", conversion(100));
	printf("200 francs = %f€\n", conversion(200));

	return 0;
}
