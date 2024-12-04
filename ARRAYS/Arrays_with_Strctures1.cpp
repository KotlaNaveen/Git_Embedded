

//Arrays with structures

#include<stdio.h>
struct emp
{
	int id;
	char sec;
	float sal;
};

void fun(struct emp []);
void main()
{
	struct emp x={100,'A',3000.00};
	struct emp A[3]={
						{121,'C',4000.00},
						{131,'D',5000.00},
						{141,'E',6000.00}
					};
	fun(A);
}
void fun(struct emp m[])
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("%d %c %f\n",m[i].id,m[i].sec,m[i].sal);
	}
}

