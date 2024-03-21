#include<stdio.h>

int sumtab(int* tab, int tabSize){
	int res=0;
	for(int i=0;i<tabSize;i++)
	{
		res+=tab[i];
	}
	return res;
}

int main()
{
	int tabSize=100;
	int unevenTab[tabSize];

	for(int i=0;i<tabSize;i++){
		unevenTab[i]=2*i+1;
	}

	for(int i=0;i<tabSize;i++){
		printf("%d ",unevenTab[i]);
	}
	printf("\n");

	printf("La somme des 100 premiers nombre impair vaut: %d\n",sumtab(unevenTab,tabSize));
}

