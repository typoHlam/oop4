#include <stdio.h>
#include <ctime>

void task1(); void task2(); void task3(); void task4(); void task5();


int main()
{
	task1();
	task2();
	task3();
	task4();
	task5();
}
void task1()
{
	printf("task 1:\n\n");
	int intVar = 8;
	char charVar = 'a';
	wchar_t wcharVar = '¯';	//500
	bool boolVar = false;
	float floatVar = 0.3;
	double doubleVar = 123244529.342536876;

	int* pintVar = &intVar;
	char* pcharVar = &charVar;
	wchar_t* pwcharVar = &wcharVar;
	bool* pboolVar = &boolVar;
	float* pfloatVar = &floatVar;
	double* pdoubleVar = &doubleVar;

	printf("pintVar, *pintVar:%p\t%d\n", pintVar, *pintVar);
	printf("%p\t%c\n", pcharVar, *pcharVar);
	printf("%p\t%c\n", pwcharVar, *pwcharVar);
	printf("%p\t%s\n", pboolVar, *pboolVar ? "true" : "false");
	printf("%p\t%f\n", pfloatVar, *pfloatVar);
	printf("%p\t%f\n", pdoubleVar, *pdoubleVar);
}
void task2()
{
	printf("\n\ntask 2:\n\n");
	enum Size
	{
		microscopic, tiny, small, little, medium, big, huge, great
	};
	Size mouse = little;
	Size* ptrMouse = &mouse;
	Size elephant = huge;
	Size* ptrElephant = &elephant;
	printf("Mouse + Elephant=%d\n", *ptrMouse + *ptrElephant);
	printf("Mouse * Elephant=%d\n", *ptrMouse * *ptrElephant);
	printf("Mouse - Elephant=%d\n", *ptrMouse - *ptrElephant);
	printf("Mouse / Elephant=%f\n", (float)*ptrMouse / *ptrElephant);
	if (*ptrMouse > * ptrElephant)
		printf("mouse>elephant\n");
	else
		printf("elephant>mouse\n");
}
void task3()
{
	printf("\n\ntask 3:\n\n");
	struct MyStruct
	{
		int x, y;
		float f;
		char abc;
	};
	MyStruct uno =
	{ 54,78,4577.9,'u' };
	MyStruct* ptrMyStrakt = &uno;
	printf("x=%d\ny=%d\nf=%f\nabc=%c\n", ptrMyStrakt->x, ptrMyStrakt->y, ptrMyStrakt->f, ptrMyStrakt->abc);
}
void task4()
{
	printf("\n\ntask 4:\n\n");
	int intVar = 8;
	int* pintVar = &intVar;
	printf("%f\n", (float)*pintVar);
	float floatVar = 2.9;
	float* pfloatVar = &floatVar;
	printf("%d\n", (int)*pfloatVar);
}
void task5()
{
	printf("\n\ntask 5:\n\n");
	

}