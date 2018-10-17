#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define x 5
#define y 12

void slash()
{
	printf("\n");
}

void list_fill (int masuv[][12])
{
	int h;
	srand(time(NULL));
	for (int i=0; i<5; i++)
	{
		for (int j=0, h=0; j<3; j++, h+=4)
		{
			int chislo = 0;
			chislo= 1000+ rand() %9999;
			int x1 = chislo/1000; 
			masuv[i][h] = x1;
			int y1 = x1*1000;
			chislo = chislo-y1;
			int x2 = chislo/100; 
			masuv[i][h+1] = x2;
			int y2 = x2*100;
			chislo = chislo-y2; 
			int x3 = chislo/10; 
			masuv[i][h+2] = x3;
			int y3 = x3*10;
			chislo = chislo-y3;
			masuv[i][h+3] = chislo;
		}
	}
}

void print_list(int masuv[][12], int masuv1[])
{
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<12; j++)
		{
			printf("%d", masuv[i][j]);
		}
		printf("    Number sum: %d", masuv1[i]);
		slash();
	}
}

void list_sum (int masuv[][12], int masuvsum[])
{
	for (int i=0; i<5; i++)
	{
		int sum = 0;
		for (int j=0; j<12; j++)
		{
			sum+=masuv[i][j];
		}
		masuvsum[i] = sum;
	}
}

int main(void)
{
	int mas[x], mass[x][y];
	list_fill(mass);
	list_sum(mass, mas);
	print_list(mass, mas);
	return 0;
}
