#include <iostream>
using namespace std;
int add(int a, int b)
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
int div_d(int a, int b)
{
	return a/b;
}
int main()
{
	cout<<"result: " << add(10,20)<<endl;
	cout<<"result: " << sub(10,20)<<endl;
	cout<<"result: " << mul(10,20)<<endl;
	cout<<"result: " << div_d(10,20)<<endl;
	return 0;
}