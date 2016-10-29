#include <iostream>

void t( int&) {}

void u( const int& cip)
{
	//cip = 2;	// error
	int i = cip;
	//int & ip2 = cip;	// error
}

const char& v()
{
	static char c = 't';
	return c;
}

const int&  w()
{
	static int i;
	return i;
}

int main()
{
	int x = 0;
	int& ip = x;
	const int& cip = x;
	t( ip);
	//t( cip); // error
	u( ip);
	u( cip);
	//char& cp = v(); // error
	const char& ccp = v();
	//int& ip2 = w(); // error
	const int& ccip = w();
	const int& cip2 = w();
	//w() = 1;	// error
}
