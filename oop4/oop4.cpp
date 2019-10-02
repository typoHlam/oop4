#include <stdio.h>
int main()
{
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

	printf("%p\t%d\n", pintVar, *pintVar);
	printf("%p\t%c\n", pcharVar, *pcharVar);
	printf("%p\t%c\n", pwcharVar, *pwcharVar);
	printf("%p\t%s\n", pboolVar, *pboolVar ? "true" : "false");
	printf("%p\t%f\n", pfloatVar, *pfloatVar);
	printf("%p\t%f\n", pdoubleVar, *pdoubleVar);
}
