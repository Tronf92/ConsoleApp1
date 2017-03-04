// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;
int monede;

void probabilitate(long double posibil);
void cazuri_posibile();

int _tmain(int argc, _TCHAR* argv[])
{
	//int monede;
	cout << "Introduceti nr de monede\nAcesta trebuie sa fie par:\n" ;
	cin >> monede;

	if(monede %2 != 0){
		while(monede % 2 != 0){
			cout << "Nr de monede este impar.Introduceti nr de monede par" << endl;
			cin >> monede;
		}
	}
	probabilitate(2*monede);
	_tsystem(_T("pause"));
	return 0;
}

void cazuri_posibile(){
	long double c_posibile;
	c_posibile = pow(2,monede);
	probabilitate(c_posibile);
}

void probabilitate(long double posibil){
	long double prob =1 ;
	for(int i=1;i<=monede;i++){
		prob *= (monede+i);
		prob /= i;
		prob /=4;

	}
	
	cout << "Probabilitatea este:" << prob << endl ;

}
