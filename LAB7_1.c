#include <stdio.h>

float Add(float x,float y){
	return x+y;
}
float Sub(float x,float y){
	return x-y;
}
float mul(float x,float y){
	return x*y;
}
float div(float x,float y){
	return x/y;
}

int main(){
	float x,y;
	int s;
	
	printf("##### Menu #####\n");
	printf("1.> Add\n2.> Sub\n3.> Mul\n4.> div\n");
	printf("################\n");
	
	printf("selcet your choicee : ");
	scanf("%d",&s);
	printf("Enter num 1 : ");
	scanf("%f",&x);
	printf("Enter num 2 : ");
	scanf("%f",&y);
	
	if(s == 1)
		printf("reesult = %.3f",Add(x,y));
	else if(s == 2)
		printf("reesult = %.3f",Sub(x,y));
	else if(s == 3)
		printf("reesult = %.3f",mul(x,y));
	else if(s == 4)
		printf("reesult = %.3f",div(x,y));
	/*
	###############################
	Kittikun Chaiprasit 5835512117
	###############################
	*/
	printf("\nBy Kittikun Chaiprasit 5835512117 ");
	return 0;
}


