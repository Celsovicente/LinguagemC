#include <stdio.h>
#include <stdlib.h>
int main (int argc, char argv[])
{
	int a,b,c,d;
	printf("Digite os 4 numeros :\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a < b && a< c && a < d)
	{
		if(b < c && b < d)
		{
			if(c < d)
			{
				printf("\n A ordem e :\n %d\n %d\n %d\n %d\n",a,b,c,d);
			}
		}
	}
		else if(a < b && a < c && a < d)
		{
			if(b < c && b < d)
			{
				if(c < d)
				{
					printf("\n A ordem e :\n %d\n %d\n %d\n %d\n",a,c,d,b);
				}
			}
		}
		else if(a < b && a < c && a < d)
		{
			if(d < c && d < b)
			{
				if(c < b)
				{
					printf("\n A ordem e :\n %d\n %d\n %d\n %d\n",a,d,c,b);
				}
			}
		}
			else if(a < b && a < c && a < d)
		{
			if(c < d && c < b)
			{
				if(d < b)
				{
					printf("\n A ordem e :\n %d\n %d\n %d\n %d\n",a,c,d,b);
				}
			}
		}	
	else if(a < b && a < c && a < d)
		{
			if(c < d && c < b)
			{
				if(b < d)
				{
					printf("\n A ordem e :\n %d\n %d\n %d\n %d\n",a,c,b,d);
				}
			}
		}
		else if(b < a && b < c && b < d)
		{
			if(a < c && a < d)
			{
				if(c < d)
				{
					printf("\n A ordem e :\n %d\n %d\n %d\n %d\n",b,a,c,d);
				}
			}
		}
		else if(b < a && b < c && b < d)
		{
			if(c < d && c < a)
			{
				if(d < a)
				{
					printf("\n A ordem e :\n %d\n %d\n %d\n %d\n",b,c,d,a);
				}
			}
		}
		else if(b < a && b < c && b < d)
		{
			if(d < c && d < a)
			{
				if(c < a)
				{
					printf("\n A ordem e :\n %d\n %d\n %d\n %d\n",b,d,c,a);
				}
			}
		}
		else if(b < a && b < c && b < d)
		{
			if(d < a && d < c)
			{
				if(a < c)
				{
					printf("\n A ordem e :\n %d\n %d\n %d\n %d\n",b,d,a,c);
				}
			}
		}
		else if(b < a && b < c && b < d)
		{
			if(c < a && c < d)
			{
				if(a < d)
				{
					printf("\n A ordem e :\n %d\n %d\n %d\n %d\n",b,c,a,d);
				}
			}
		}
		else if(c < a && c < b && c < d)
		{
			if(a < b && a < d)
			{
				if(b < d)
				{
					printf("\n A ordem e :\n %d\n %d\n %d\n %d\n",c,a,b,d);
				}
			}
		}
		else if(c < a && c < b && c < d)
		{
			if(b < d && b < a)
			{
				if(d < a)
				{
					printf("\n A ordem e :\n %d\n %d\n %d\n %d\n",c,b,d,a);
				}
			}
		}
		else if(c < a && c < b && c < d)
		{
			if(d < a && d < b)
			{
				if(a < b)
				{
					printf("\n A ordem e :\n %d\n %d\n %d\n %d\n",c,d,a,b);
				}
			}
		}
		else if(c < a && c < b && c < d)
		{
			if(a < d && a < b)
			{
				if(d < b)
				{
					printf("\n A ordem e :\n %d\n %d\n %d\n %d\n",c,a,d,b);
				}
			}
		}
		else if(c < a && c < b && c < d)
		{
			if(b < a && b < d)
			{
				if(a < d)
				{
					printf("\n A ordem e :\n %d\n %d\n %d\n %d\n",c,b,a,d);
				}
			}
		}
		else if(d < a && d < b && d < c)
		{
			if(a < b && a < c)
			{
				if(b < c)
				{
					printf("\n A ordem e :\n %d\n %d\n %d\n %d\n",d,a,b,c);
				}
			}
		}
		else if(d < a && d < b && d < c)
		{
			if(b < c && b < a)
			{
				if(c < a)
				{
					printf("\n A ordem e :\n %d\n %d\n %d\n %d\n",d,b,c,a);
				}
			}
		}
		else if(d < a && d < b && d < c)
		{
			if(c < a && c < b)
			{
				if(d < b)
				{
					printf("\n A ordem e :\n %d\n %d\n %d\n %d\n",d,c,a,b);
				}
			}
		}
		else if(d < a && d < b && d < c)
		{
			if(a < c && a < b)
			{
				if(c < b)
				{
					printf("\n A ordem e :\n %d\n %d\n %d\n %d\n",d,a,c,b);
				}
			}
		}
		else if(d < a && d < b && d < c)
		{
			if(b < a && b < c)
			{
				if(a < c)
				{
					printf("\n A ordem e :\n %d\n %d\n %d\n %d\n",d,b,a,c);
				}
			}
		}
	getchar();
	return 0;
}
