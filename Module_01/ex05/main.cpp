
#include "Karen.hpp"

int main( void )
{
	Karen test;

	test.complain("debug");
	test.complain("info");
	test.complain("warning");
	test.complain("error");
	/*wrong examples:*/
	test.complain("xxxxxxxxx");
	test.complain("dEbuG");
	test.complain("Info");
	return (0);
}
