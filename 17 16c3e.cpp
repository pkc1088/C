#include <stdio.h>
#include <string.h>

struct complex{
		double real;
		double imaginary;
	};

//struct complex Complex;
	
struct complex make_complex(double real, double imaginary) {
    return (struct complex) {real, imaginary};
}

struct complex add_complex(struct complex a, struct complex b) {

    return (struct complex) {a.real + b.real, a.imaginary + b.imaginary};
}

int main(void)
{
	
	return 0;
}
