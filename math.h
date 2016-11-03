# define M_E		2.7182818284590452354	/* e */
# define M_LOG2E	1.4426950408889634074	/* log_2 e */
# define M_LOG10E	0.43429448190325182765	/* log_10 e */
# define M_LN2		0.69314718055994530942	/* log_e 2 */
# define M_LN10		2.30258509299404568402	/* log_e 10 */
# define M_PI		3.14159265358979323846	/* pi */
# define M_PI_2		1.57079632679489661923	/* pi/2 */
# define M_PI_4		0.78539816339744830962	/* pi/4 */
# define M_1_PI		0.31830988618379067154	/* 1/pi */
# define M_2_PI		0.63661977236758134308	/* 2/pi */
# define M_2_SQRTPI	1.12837916709551257390	/* 2/sqrt(pi) */
# define M_SQRT2	1.41421356237309504880	/* sqrt(2) */
# define M_SQRT1_2	0.70710678118654752440	/* 1/sqrt(2) */
# define isnan(x) __builtin_isnan (x)
# define isinf(x) __builtin_isinf_sign (x)
#include <float.h>
# define NAN	(__builtin_nanf (""))
# define INFINITY   (__builtin_inff())
#define MAX_2 700
#define MAX_3 -700
#define MAX_4 9

double acos(double x);
float acosf(float x);
long double acosl(long double x);

double asin(double x);
float asinf(float x);
long double asinl(long double x);

double atan(double x);
float atanf(float x);
long double atanl(long double x);	

double atan2(double, double x);
float atan2f(float, float x);
long double atan2l(long double, long double x);
//Returns the arc tangent in radians of y/x based on the signs of both values to determine the correct quadrant.

double cos(double x);
float cosf(float x);
long double cosl(long double x);

double sin(double x);
float sinf(float x);
long double sinl(long double x);

double tan(double x);
float tanf(float x);
long double tanl(long double x);

double cosh(double x);
float coshf(float x);
long double coshl(long double x);

double sinh(double x);
float sinhf(float x);
long double sinhl(long double x);

double tanh(double x);
float tanhf(float x);
long double tanhl(long double x);

double exp(double x);
float expf(float x);
long double expl(long double x);

double frexp(double x, int *exponent);
float frexpf(float x, int *exponent);
long double frexpl(long double x, int *exponent);
/*The returned value is the mantissa and the integer pointed to by exponent is the exponent. The resultant value is x = mantissa * 2 ^ exponent.*/

double idexp(double x, int exponent);
float idexpf(float x, int exponent);
long double idexpl(long double x, int exponent);
//Returns x multiplied by 2 raised to the power of exponent.

double log(double x);
float logf(float x);
long double logl(long double x);

double log10(double x);
float log10f(float x);
long double log10l(long double x);
//The returned value is the fraction component (part after the decimal), and sets integer to the integer component.

double pow(double x, double y);
float powf(float x, float y);
long double powl(long double x, long double y);

double sqrt(double x);
float sqrtf(float x);
long double sqrtl(long double x);

double ceil(double x);
float ceilf(float x);
long double ceill(long double x);
//Returns the smallest integer value greater than or equal to x.

double floor(double x);
float floorf(float x);
long double floorl(long double x);
//Returns the largest integer value less than or equal to x.

double fabs(double x);
float fabsf(float x);
long double fabsl(long double x);

double fmode(double x, double y);
float fmodef(float x, float y);
long double fmodel(long double x, long double y);
