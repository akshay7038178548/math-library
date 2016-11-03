
#include "math.h"
#include <stdio.h>
#include <stdlib.h>

double fabs(double x) {
	//Returns the absolute value of x
	if(x < 0)
		return ( - x);
	else
		return x;
}

float fabsf(float x) {
	
	if(x < 0)
		return ( - x);
	else
		return x;
}
long double fabsl(long double x) {
	
	if(x < 0)
		return ( - x);
	else
		return x;
}

double fmode(double x, double y) {
	long double t, t1 = 0;
	if(x == 0 && y != 0)
		return 0;
	else if(y == 0 && x != 0)
		return (- NAN);
		else if(x == 0 && y == 0)
			return (- NAN);
	if(x < 0) {
		x = - x;
		t1 = 1;
	}
	else if(y < 0) {
		y = - y;
	}
	t = (x / y);
	while(t >= 1) {
		x = x - y;
		t--;
	}
	if(t1 == 0)
		return x;
	else
		return (- x);
}
float fmodef(float x, float y) {
	long double t, t1 = 0;
	if(x == 0 && y != 0)
		return 0;
	else if(y == 0 && x != 0)
		return (- NAN);
		else if(x == 0 && y == 0)
			return (- NAN);
	if(x < 0) {
		x = - x;
		t1 = 1;
	}
	else if(y < 0) {
		y = - y;
	}
	t = (x / y);
	while(t >= 1) {
		x = x - y;
		t--;
	}
	if(t1 == 0)
		return x;
	else
		return (- x);
}
long double fmodel(long double x,long double y) {
	long double t, t1 = 0;
	if(x == 0 && y != 0)
		return 0;
	else if(y == 0 && x != 0)
		return (- NAN);
		else if(x == 0 && y == 0)
			return (- NAN);
	if(x < 0) {
		x = - x;
		t1 = 1;
	}
	else if(y < 0) {
		y = - y;
	}
	t = (x / y);
	while(t >= 1) {
		x = x - y;
		t--;
	}
	if(t1 == 0)
		return x;
	else
		return (- x);
}

double sin(double x) {
	//return value of sine of x
	int i = 2;
	long double sin, t, temp = 0;
	int y = 0;
	if(x > (2 * M_PI)  || x < (- 2 * M_PI)) {
		y = (x / (2 * M_PI)); //reduction of value
		y++;
		x = (x - (y * (2 * M_PI)));
	}
	if(x < 0) {
		x = - x;
		temp = 1;
	}
	sin = t = x;
	double p = (x * x);
	while (fabs(t) > 0.000000001) {     
		t = (- t) * (p) / ((i + 1) * (i));
		sin = sin + t;
		i = i + 2;
	}
	if(temp == 0)
		return sin;
	else
		return (- sin);
		
	
}
float sinf(float x) {
	//return  sine value of floating x	
	int i = 2;
	long double sin, t, temp = 0;
	int y = 0;
	if(x > (2 * M_PI)  || x < (- 2 * M_PI)) {
		y = (x / (2 * M_PI));
		y++;
		x = (x - (y * (2 * M_PI)));
	}
	if(x < 0) {
		x = - x;
		temp = 1;
	}
	sin = t = x;
	double p = (x * x);
	while ( fabs(t) > 0.000000001) {      
		t = (- t) * (p) / ((i + 1) * (i));
		sin = sin + t;
		i = i + 2;
	}
	if(temp == 0)
		return sin;
	else
		return (- sin);
		
	
}

long double sinl(long double x) {
	//return  sine value of long double x	
	int i = 2;
	long double sin, t, temp = 0;
	int y = 0;
	if(x > (2 * M_PI)  || x < (- 2 * M_PI)) {
		y = (x / (2 * M_PI));                    
		y++;
		x = (x - (y * (2 * M_PI)));
	}
	if(x < 0) {
		x = - x;
		temp = 1;
	}
	sin = t = x;
	double p = (x * x);
	while (fabs(t) > 0.000000001) {      
		t = (- t) * (p) / ((i + 1) * (i));
		sin = sin + t;
		i = i + 2; 
	}
	if(temp == 0)
		return sin;
	else
		return (- sin);
		
	
}

double cos(double x) {
	//return  cosine value of x
	int i = 1;
	long double cos = 1, t = 1, temp = 0;
	if(x < (- 2 * M_PI)) {
		x = - x;
		temp = 1;
	}
	while (x >  (2 * M_PI))
		x = x - ( 2 * M_PI);
	while (fabs(t) > 0.000000001) {
		t = (- t) * (x * x) / ((i + 1) * (i));    
		cos = cos + t;	
		i = i + 2;
	}
	return cos;
		
}
float cosf(float x) {
	//return  cosine value of floating x
	int i = 1;
	long double cos = 1, t = 1, temp = 0;
	if(x < (- 2 * M_PI)) {
		x = - x;
		temp = 1;
	}
	while (x >  2 * M_PI)
		x = x - ( 2 * M_PI);
	while (fabs(t) > 0.000000001) {
		t = (- t) * (x * x) / ((i + 1) * (i)); 
		cos = cos + t;	
		i = i + 2;
	}
	return cos;
		
}
long double cosl(long double x) {
	//return  cosine value of long double x
	int i = 1;
	long double cos = 1, t = 1, temp = 0;
	if(x < (- 2 * M_PI)) {
		x = - x;
		temp = 1;
	}
	while (x >  2 * M_PI)
		x = x - ( 2 * M_PI);
	while (fabs(t) > 0.000000001) {
		t = (- t) * (x * x) / ((i + 1) * (i)); 
		cos = cos + t;	
		i = i + 2;
	}
	return cos;
		
}

double tan(double x) {
	//return  tangent value of x
	long double tan;
	tan = sin(x) / cos(x);
	return tan;
}
float tanf(float x) {
	//return  tangent value of floating x
	long double tan;
	tan = sin(x) / cos(x);
	return tan;
}
long double tanl(long double x) {
	//return  tangent value of long double x
	long double tan;
	tan = sin(x) / cos(x);
	return tan;
}

double sinh(double x) {
	//return  hyperbolic sine value of x
	int i = 2;
	long double sinh = x, t = x;
	if(x > MAX_2)
		return INFINITY;
	if(x < MAX_3)
		return (- INFINITY);
	while (fabs(t) > 0.000000001) {
		t = (t) * (x * x) / ((i + 1) * (i));
		sinh = sinh + t;	
		i = i + 2;
	}
	return sinh;
}
float sinhf(float x) {
	//return  hyperbolic sine value of floating x
	int i = 2;
	long double sinh = x, t = x;
	if(x > MAX_2)
		return INFINITY;
	if(x < MAX_3)
		return (- INFINITY);
	while (fabs(t) > 0.000000001) {
		t = (t) * (x * x) / ((i + 1) * (i));
		sinh = sinh + t;	
		i = i + 2;
	}
	return sinh;
}
long double sinhl(long double x) {
	//return  hyperbolic sine value of long double x	
	int i = 2;
	long double sinh = x, t = x;
	if(x > MAX_2)
		return INFINITY;
	if(x < MAX_3)
		return (- INFINITY);
	while (fabs(t) > 0.000000001) {
		t = (t) * (x * x) / ((i + 1) * (i));
		sinh = sinh + t;	
		i = i + 2;
	}
	return sinh;
}

double cosh(double x) {
	//return  hyperbolic cosine value of x
	int i = 1;
	long double cosh = 1, t = 1;
	if(x > MAX_2 || x < MAX_3)
		return INFINITY;
	while (fabs(t) > 0.000000001) {
		t = (t) * (x * x) / ((i + 1) * (i));
		cosh = cosh + t;	
		i = i + 2;
	}
	return cosh;
}

float coshf(float x) {
	//return  hyperbolic cosine value of floating x
	int i = 1;
	long double cosh = 1, t = 1;
	if(x > MAX_2 || x < MAX_3)
		return INFINITY;
	while (fabs(t) > 0.000000001) {
		t = (t) * (x * x) / ((i + 1) * (i));
		cosh = cosh + t;	
		i = i + 2;
	}
	return cosh;
}
long double coshl(long double x) {
	//return  hyperbolic cosine value of x
	int i = 1;
	long double cosh = 1, t = 1;
	if(x > MAX_2 || x < MAX_3)
		return INFINITY;
	while (fabs(t) > 0.000000001) {
		t = (t) * (x * x) / ((i + 1) * (i));
		cosh = cosh + t;	
		i = i + 2;
	}
	return cosh;
}

double tanh(double x) {
	//return  hyperbolic tangent value of x
	long double tanh = 1, temp = 0;
	if(x < - MAX_4) {
		temp = 1;
		x = - x;
	}
	if(x > MAX_4) {
		if(temp == 1) 
			return (- tanh);
		else 
			return tanh;
	}
	else {
		tanh =	sinh(x) / cosh(x);
		return tanh;
	}
}

float tanhf(float x) {
	//return  hyperbolic tangent value of x
	long double tanh = 1, temp = 0;
	if(x < - MAX_4) {
		temp = 1;
		x = - x;
	}
	if(x > MAX_4) {
		if(temp == 1) 
			return (- tanh);
		else 
			return tanh;
	}
	else {
		tanh =	sinh(x) / cosh(x);
		return tanh;
	}
}
long double tanhl(long double x) {
	//return  hyperbolic tangent value of x
	long double tanh = 1, temp = 0;
	if(x < - MAX_4) {
		temp = 1;
		x = - x;
	}
	if(x > MAX_4) {
		if(temp == 1) 
			return (- tanh);
		else 
			return tanh;
	}
	else {
		tanh =	sinh(x) / cosh(x);
		return tanh;
	}
}

double asin(double x) {
	//Returns the arc (angle) sine of value in radians
	long double asin = x, t = x;
	int i = 1, n = 0;
	if(x > 1 || x < - 1) 
		return NAN;
	else if (x == 1)
		return M_PI_2; 
	else if(x == 0)
		return 0;
	else {
		while (fabs(t) > 0.000000001) {
	
			t = ((t) * (x * x) * (2 * i - 1) * (2 * i - 1)) / ((2 * i + 1) * (2 * i));
				asin = asin + t;	
				i++;
		}
	return asin;
	}
}
float asinf(float x) {
	//Returns the arc (angle) sine of value in radians
	long double asin = x, t = x;
	int i = 1, n = 0;
	if(x > 1 || x < - 1) 
		return NAN;
	else if (x == 1)
		return M_PI_2; 
	else if(x == 0)
		return 0;
	else {
		while (fabs(t) > 0.000000001) {
	
			t = ((t) * (x * x) * (2 * i - 1) * (2 * i - 1)) / ((2 * i + 1) * (2 * i));
				asin = asin + t;	
				i++;
		}
	return asin;
	}
}

long double asinl(long double x) {
	//Returns the arc (angle) sine of value in radians
	long double asin = x, t = x;
	int i = 1, n = 0;
	if(x > 1 || x < - 1) 
		return NAN;
	else if (x == 1)
		return M_PI_2; 
	else if(x == 0)
		return 0;
	else {
		while (fabs(t) > 0.000000001) {
	
			t = ((t) * (x * x) * (2 * i - 1) * (2 * i - 1)) / ((2 * i + 1) * (2 * i));
				asin = asin + t;	
				i++;
		}
	return asin;
	}
}

double acos(double x) {
	//Returns the arc (angle) cosine of value in radians
	long double acos;
	if(x > 1 || x < - 1) 
		return NAN;
	else if (x == 1)
		return 0; 
	else if(x == 0)
		return M_PI_2;
	else {
		acos = (M_PI / 2) - asin(x);
		return acos;
	}
}
float acosf(float x) {
	//Returns the arc (angle) cosine of value in radians
	long double acos;
	if(x > 1 || x < - 1) 
		return NAN;
	else if (x == 1)
		return 0; 
	else if(x == 0)
		return M_PI_2;
	else {
		acos = (M_PI / 2) - asin(x);
		return acos;
	}
}
long double acosl(long double x) {
	//Returns the arc (angle) cosine of value in radians
	long double acos;
	if(x > 1 || x < - 1) 
		return NAN;
	else if (x == 1)
		return 0; 
	else if(x == 0)
		return M_PI_2;
	else {
		acos = (M_PI / 2) - asin(x);
		return acos;
	}
}

double atan(double x) {
	//Returns the arc (angle) sine of value in radians
	int i = 0;
	long double atan = x, temp, t = x;
	int n = 1;
	if(x > - 1 && x < 1) {
		while (fabs(t) > 0.01) {
			t = (- t) * (x * x) * (2 * n - 1) / (2 * n + 1);
			atan = atan + t;	
			n++;
		} 
		return atan;
	}
	else if(x >= 1) {
		n = 1;
		temp = (1 / x);
		t = (1 / x);
		while (fabs(t) > 0.000001) {
			t = ((- t) * (n)) / ((x * x)  * (n + 2));
			temp = temp + t;	
			n = n + 2;
		}
		atan = (M_PI / 2) - temp; 
		return atan;
	}
	else if(x <= - 1) {
		n = 1;
		temp = (1 / x);
		t = (1 / x);
		while (fabs(t) > 0.000000001) {
			t = ((- t) * (n)) / ((x * x)  * (n + 2));
			temp = temp + t;	
			n = n + 2;
		}
		atan = (- M_PI / 2) - temp; 
		return atan;
	}
		
}
float atanf(float x) {
	//Returns the arc (angle) sine of value in radians
	
	int i = 0;
	long double atan = x, temp, t = x;
	int n = 1;
	if(x > - 1 && x < 1) {
		while (fabs(t) > 0.01) {
			t = (- t) * (x * x) * (2 * n - 1) / (2 * n + 1);
			atan = atan + t;	
			n++;
		} 
		return atan;
	}
	else if(x >= 1) {
		n = 1;
		temp = (1 / x);
		t = (1 / x);
		while (fabs(t) > 0.000001) {
			t = ((- t) * (n)) / ((x * x)  * (n + 2));
			temp = temp + t;	
			n = n + 2;
		}
		atan = (M_PI / 2) - temp; 
		return atan;
	}
	else if(x <= - 1) {
		n = 1;
		temp = (1 / x);
		t = (1 / x);
		while (fabs(t) > 0.000000001) {
			t = ((- t) * (n)) / ((x * x)  * (n + 2));
			temp = temp + t;	
			n = n + 2;
		}
		atan = (- M_PI / 2) - temp; 
		return atan;
	}
		
}
long double atanl(long double x) {
	//Returns the arc (angle) sine of value in radians

	int i = 0;
	long double atan = x, temp, t = x;
	int n = 1;
	if(x > - 1 && x < 1) {
		while (fabs(t) > 0.01) {
			t = (- t) * (x * x) * (2 * n - 1) / (2 * n + 1);
			atan = atan + t;	
			n++;
		} 
		return atan;
	}
	else if(x >= 1) {
		n = 1;
		temp = (1 / x);
		t = (1 / x);
		while (fabs(t) > 0.000001) {
			t = ((- t) * (n)) / ((x * x)  * (n + 2));
			temp = temp + t;	
			n = n + 2;
		}
		atan = (M_PI / 2) - temp; 
		return atan;
	}
	else if(x <= - 1) {
		n = 1;
		temp = (1 / x);
		t = (1 / x);
		while (fabs(t) > 0.000000001) {
			t = ((- t) * (n)) / ((x * x)  * (n + 2));
			temp = temp + t;	
			n = n + 2;
		}
		atan = (- M_PI / 2) - temp; 
		return atan;
	}
		
}

double atan2(double y,double x) {
	long double result;
	if (x == 0 && y !=0) 
		return M_PI_2;
	if (y == 0)
		return 0;
	
	x = (y / x);
	result = atan(x);
	return result;
}
float atan2f(float y,float x) {
	long double result;
	if (x == 0 && y !=0) 
		return M_PI_2;
	if (y == 0)
		return 0;
	
	x = (y / x);
	result = atan(x);
	return result;
}
long double atan2l(long double y,long double x) {
	long double result;
	if (x == 0 && y !=0) 
		return M_PI_2;
	if (y == 0)
		return 0;
	
	x = (y / x);
	result = atan(x);
	return result;
}
double floor(double x) {
	//Returns the largest integer value less than or equal to x
	 if(x >= 0 || (x - (int)x) == 0)
	 	return (int)x;
	 return (int)x - 1.0;
}

float floorf(float x) {
	//Returns the largest integer value less than or equal to x
	if(x >= 0 || (x - (int)x) == 0)
	 	return (int)x;
	return (int)x - 1.0;
}

long double floorl(long double x) {
	//Returns the largest integer value less than or equal to x
	 if(x >= 0 || (x - (int)x) == 0)
	 	return (int)x;
	return (int)x - 1.0;
}


double exp(double x) {
	//Returns the exponential value of x
	long double exp = 1;
	long double t = 1;
	int i = 1;
	while (fabs(t) > 0.00000001) {
		t = (t * x) / i;
		exp = exp + t;
		i++;
	}	
	return exp;
}
float expf(float x) {
	long double exp = 1;
	long double t = 1;
	int i = 1;
	while (fabs(t) > 0.00000001) {
		t = (t * x) / i;
		exp = exp + t;
		i++;
	}	
	return exp;
}
long double expl(long double x) {
	long double exp = 1;
	long double t = 1;
	int i = 1;
	while (fabs(t) > 0.00000001) {
		t = (t * x) / i;
		exp = exp + t;
		i++;
	}	
	return exp;
}

double sqrt(double x) {
	//retuen the square root of x
	long double y;
	long double low = 0, high = x, t;
	long double mid = (low + high) / 2;
	int i = 0;
	if(x < 0)

		return NAN;
	else {
		if(x > 0 && x < 1) {
			low = x;
			high = 1;
		}
		while(1) {
			t = mid * mid;
			if(t == x) {
	        		return mid;
	         		break;
	        	} 
			else {
	        		if(mid * mid > x) {
	        			high = mid;
	                		mid = (low + high) / 2;
				}
	                	 
				else {
               				low = mid;
               				mid = (low + high) / 2;
            			}
         		}
			i++;
      		}
	}
}
long double sqrtl(long double x) {
	long double y;
	long double low = 0, high = x, t;
	long double mid = (low + high) / 2;
	int i = 0;
	if(x < 0)
		
		return NAN;
	else {
		if(x > 0 && x < 1) {
			low = x;
			high = 1;
		}
		while(1) {
			t = mid * mid;
			if(t == x) {
	        		return mid;
	         		break;
	        	} 
			else {
	        		if(mid * mid > x) {
	        			high = mid;
	                		mid = (low + high) / 2;
				}
	                	 
				else {
               				low = mid;
               				mid = (low + high) / 2;
            			}
         		}
			i++;
      		}
	}
}
float sqrtf(float x) {
	long double y;
	long double low = 0, high = x, t;
	long double mid = (low + high) / 2;
	int i = 0;
	if(x < 0)
		return NAN;
	else {
		if(x > 0 && x < 1) {
			low = x;
			high = 1;
		}
		while(1) {
			t = mid * mid;
			if(t == x) {
	        		return mid;
	         		break;
	        	} 
			else {
	        		if(mid * mid > x) {
	        			high = mid;
	                		mid = (low + high) / 2;
				}
	                	 
				else {
               				low = mid;
               				mid = (low + high) / 2;
            			}
         		}
			i++;
      		}
	}
}
 
double pow(double x, double y) {
	int i = 1;
	long double p = 1;
	if(y == 0)
		return 1;
	if(y > 0) {
		while(i <= y) {
			p = p * x;
			i++;
		}
		return p;
	}
	if(y < 0) {
		int j = 1;
		y = - y;
		while(j <= y) {
			p = p * x;
			j++;
		}
		return (i / p);
	}
}

float powf(float x, float y) {
	int i = 1;
	long double p = 1;
	if(y == 0)
		return 1;
	if(y > 0) {
		while(i <= y) {
			p = p * x;
			i++;
		}
		return p;
	}
	if(y < 0) {
		int j = 1;
		y = - y;
		while(j <= y) {
			p = p * x;
			j++;
		}
		return (i / p);
	}
}
long double powl(long double x, long double y) {
	int i = 1;
	long double p = 1;
	if(y == 0)
		return 1;
	if(y > 0) {
		while(i <= y) {
			p = p * x;
			i++;
		}
		return p;
	}
	if(y < 0) {
		int j = 1;
		y = - y;
		while(j <= y) {
			p = p * x;
			j++;
		}
		return (i / p);
	}
}

double log(double x) {
	//Returns the base-e logarithm of x
	long double sum, t;
	sum = t = (x - 1) / (x + 1);
	int n = 2;
	if (x == 0)
		return (- INFINITY);
	if(x < 0)
		return (- NAN);
	while (fabs(t) > 0.0000000000001) {
		t = t * (((x - 1) * (x - 1) * (n - 1)) / ((n + 1) * (x + 1) * (x + 1)));
		sum += t;
		n += 2;
	}
	return (2 * sum);
}
float logf(float x) {
	//Returns the base-e logarithm of x
	long double sum, t;
	sum = t = (x - 1) / (x + 1);
	int n = 2;
	if (x == 0)
		return (- INFINITY);
	if(x < 0)
		return (- NAN);
	while (fabs(t) > 0.0000000000001) {
		t = t * (((x - 1) * (x - 1) * (n - 1)) / ((n + 1) * (x + 1) * (x + 1)));
		sum += t;
		n += 2;
	}
	return (2 * sum);
}
long double logl(long double x) {
	//Returns the base-e logarithm of x
	long double sum, t;
	sum = t = (x - 1) / (x + 1);
	int n = 2;
	if (x == 0)
		return (- INFINITY);
	if(x < 0)
		return (- NAN);
	while (fabs(t) > 0.0000000000001) {
		t = t * (((x - 1) * (x - 1) * (n - 1)) / ((n + 1) * (x + 1) * (x + 1)));
		sum += t;
		n += 2;
	}
	return (2 * sum);
}

double log10(double x) {
	//Returns the base-10 logarithm of x
	long double p, log10;
	if (x == 0)
		return (- INFINITY);
	else if(x < 0)
		return (- NAN);
	else { 
		log10 = (log(x) / M_LN10);
		return log10;
	}
}
float log10f(float x) {
	//Returns the base-10 logarithm of x
	long double p, log10;
	if (x == 0)
		return (- INFINITY);
	else if(x < 0)
		return (- NAN);
	else { 
		log10 = (log(x) / M_LN10);
		return log10;
	}
}
long double log10l(long double x) {
	//Returns the base-10 logarithm of x
	long double p, log10;
	if (x == 0)
		return (- INFINITY);
	else if(x < 0)
		return (- NAN);
	else { 
		log10 = (log(x) / M_LN10);
		return log10;
	}
}

int fact(unsigned int x) {
	int k = 1;
	if (x == 0)
		return 1;
	else {
		k = x * fact(x - 1);
		return k;
	}
}
		
double ceil(double x) {
	//Returns the smallest integer value greater than or equal to x
	if(x <= 0 || (x - (int)x) == 0)
	 	return (int)x;
	return (int)x + 1.0;
}

float ceilf(float x) {
	if(x <= 0 || (x - (int)x) == 0)
	 	return (int)x;
	return (int)x + 1.0;
}
long double ceill(long double x) {
	if(x <= 0 || (x - (int)x) == 0)
	 	return (int)x;
	return (int)x + 1.0;
}
	
double idexp(double x, int exponent) {
	//Returns x multiplied by 2 raised to the power of exponent
	long double value;
	value = x * pow(2, exponent);
	return value;
	
}
float idexpf(float x, int exponent) {
	long double value;
	value = x * pow(2, exponent);
	return value;
	
}
long double idexpl(long double x, int exponent) {
	long double value;
	value = x * pow(2, exponent);
	return value;
	
}
double frexp(double x,int *exp) {
	double z,b;
	int a, temp = 0;
	if(x < 0) {
		x = - x;
		temp = 1;
	}
	b = (int)x; 
	for(z = b; z <= 2 *(int)x; z++) {
		for(a = 1; a <= z; a++) {
			if((z == pow(2, a)) && ((x/z) < 1)) {
				*exp = a;
				if(temp == 1)
					return (- x / z);
				return (x / z);
			}
		}
	}
}
float frexpf(float x,int *exp) {
	double z,b;
	int a, temp = 0;
	if(x < 0) {
		x = - x;
		temp = 1;
	}
	b = (int)x; 
	for(z = b; z <= 2 *(int)x; z++) {
		for(a = 1; a <= z; a++) {
			if((z == pow(2, a)) && ((x/z) < 1)) {
				*exp = a;
				if(temp == 1)
					return (- x / z);
				return (x / z);
			}
		}
	}
}
long double frexpl(long double x,int *exp) {
	//The returned value is the mantissa and the integer pointed to by exponent is the exponent 
	//The resultant value is x = mantissa * 2 ^ exponent
	double z,b;
	int a, temp = 0;
	if(x < 0) {
		x = - x;
		temp = 1;
	}
	b = (int)x; 
	for(z = b; z <= 2 *(int)x; z++) {
		for(a = 1; a <= z; a++) {
			if((z == pow(2, a)) && ((x/z) < 1)) {
				*exp = a;
				if(temp == 1)
					return (- x / z);
				return (x / z);
			}
		}
	}
}









