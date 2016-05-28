#include <stdio.h>

int arr[]={5,9,8,7,6,10,2,1};
int larg[10];

int main()
{
	int dat;
	int i,l,user;
	scanf("%d",&dat);
	user=dat;
	int large=arr[0];
	for(i=0;arr[i]!=0x00;i++)
		printf(" %d ",arr[i]);
	printf("\n");
	
	for(i=1;arr[i]!=0x00;i++)
	{
		if(arr[i]>large)
			large=arr[i];
	}
	while(dat>1)
	{
		for(l=0,i=1;arr[i]!=0x00;i++)
		{
			if((arr[i]>l)&&(arr[i]<large))
				l=arr[i];
		}
		large=l;
		dat--;	
	}
	printf("%d is the %d largest number\n\n",large,user);
	return 0;
}
