#include<stdio.h>

int add(int a, int b){
	return a+b;
}

void pAdd(int a, int b, int* res)
{
	*res=a+b;
}


int main()
{
	/* code */
	int a,b,res;
	a=b=res=0;
	printf("Entree une valeur pour a: \n");
	scanf("%d",&a);
	printf("Entree une valeur pour b: \n");
	scanf("%d",&b);
	//res=add(a,b);
	pAdd(a,b,&res);
	printf("%d + %d = %d\n",a,b,res);
}