#include<stdio.h>
void menu (); // I define prototypes here
int min(int, int, int); // I tried first with two values than changed into 3 values
int max(int,int, int);
int square(int);
int cube(int);
int absolute(int);


int main () {
	int choose=0,x,y,z;
	menu();
	printf("Choose a number between 1 and 5: ");
	scanf("%d", &choose);
	printf("\n\n");
	switch(choose) {	// Switch case was easier to create and define what should be done step by step
		
		case 1: printf("Enter three numbers:");	//Choose 3 values to make a bit difficult
				scanf("%d%d%d", &x, &y, &z);	
				printf("Min:%d\n", min(x,y,z));
		break; 
		case 2: printf("Enter three numbers:");
				scanf("%d%d%d", &x, &y, &z);
				printf("Max:%d\n", max(x,y,z));
		break;
		case 3:printf("Enter a number:");
				scanf("%d", &x);
				printf("square:%d\n", square(x));
		break;
		case 4:printf("Enter a number:");
				scanf("%d", &x);
				printf("cube:%d\n", cube(x));
		break;
		case 5:printf("Enter a number:");
				scanf("%d", &x);
				printf("Absolute value:%d\n", absolute(x));
		break;
		default:printf("You choose an invalid value");
	
	}
	
	return 0;
}

void menu () {
	printf("\n");
	printf("***************\n");
	printf("---------------\n");
	printf("******MENU*****\n");
	printf("---------------\n\n");
	printf("1-Min\n");
	printf("2-Max\n");
	printf("3-Square\n");
	printf("4-cube\n");
	printf("5-absolute value\n");


}
int min (int x, int y, int z){

if(x<y && x<z) { // AND value to make smaller steps
	return x;
}else if(y<x && y<z){
	return y;
}else(z<x && z<y);{
	return z;
} 
}
int max (int x, int y, int z){

if(x>y && x>z) { // AND value to make smaller steps
	return x;
}else if(y>x && y>z){
	return y;
}else(z>x && z>y);{
	return z;
}
}
int square (int x){ // with return the problems would be easier calculated by cube and square

return x*x;
}

int cube (int x) {
	return x*x*x;	
}
int absolute(int x) { 
	if(x<0) {
		return x*(-1); // because |-x| value we need to calculate nagative values with -1	
	}else {
		return x; // positive value remains the same
	}
}


