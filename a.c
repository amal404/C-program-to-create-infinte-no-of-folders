#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	int i=1,n;
	char p[10],k[54];
	strcpy(k, "mkdir ");
	printf("limit :");
	scanf("%d",&n);
	while(i<=n){		
			sprintf(p, "%d",i);
			strcat(k,p);
			system(k);
			k[strlen(k) - strlen(p)]  = '\0';
			i++;
			printf("\ncreated dir: %d",i);
	}
}

//Code by Amal
