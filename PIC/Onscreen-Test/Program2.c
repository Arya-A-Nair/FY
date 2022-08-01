#include<stdio.h>
//Code by Arya Nair
int main() {
	int num;
	printf("Decimal Number: ");
        //Getting decimal value from User
	scanf("%d",&num);
	printf("Converted to HexaDecimal: %X",num);//Using %X format specifier to print HexaDecimal
	return 0;
}