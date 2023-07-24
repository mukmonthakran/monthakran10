#include <iostream>
#include <string>
using namespace std;
int main()
{
	int  C ;
	cout << "Input C++ Score :";
	cin >>  C ;
	cout <<"You "<<((C>=50)? "pass" : "fail")<< " with score"<< C <<endl;
	system("pause");
	return 0;
}
