#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
char *fun[] = {"sin","cos","tan","asin","acos","atan","sinh","cosh","tanh","sqrt","log","log10","exp","floor","ceil","fabs","pow","atan2","fmode","frexp","idexp"};
int main(int argc,char *argv[]){
	if(argc != 2) {
		printf("Invalid argument\n");
		return 1;
	}
	if(strcmp(argv[1],"-h")==0) {
		printf("usage : ./project filename.txt");
		return 1;
	}
	FILE *fp;
	fp = fopen(argv[1],"r");
	if (fp == NULL) {
		printf("OPEN FAILED\n");
	}
	char name[50];
	double t;
	double a,b,output;
	int i;			
	while(!feof(fp)) {
		fscanf(fp,"%s", name);
		for(i = 0; i < 22; i++){
		if(strcmp(name ,fun[i])== 0)
			break;
		}
		switch(i){
			case 0:
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&output);
				t = sin(a);
				double diff = output - t;
				if(diff == 0.000000 || diff < 0.000001)
					printf(" sin succeed for  %lf value \n",a);
				else
					printf(" failed expected o/p %lf calculated o/p %lf\n",output,t);
				break;
			case 1:
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&output);
				t = cos(a);
				diff = output - t;
				if(diff == 0.000000 || diff < 0.000001 )
					printf("cos succeed for %lf value \n",a);
				else
					printf("expected o/p %lf calculated o/p %lf\n",output,t);
				break;
			case 2: 
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&output);
				t = tan(a);
				diff = output - t;
				if(diff == 0.000000 || diff < 0.000001 )
					printf("tan succeed for  %lf value \n",a);
				else
					printf("expected o/p %lf calculated o/p %lf\n",output,t);
				break;
				
			case 3: 
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&output);
				t = asin(a);
				diff = output - t;
				if(diff == 0.000000 || diff < 0.000001 )
					printf("asin succeed for  %lf value \n",a);
				else
					printf("expected o/p %lf calculated o/p %lf\n",output,t);
				break;
				
			case 4: 
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&output);
				t = acos(a);
				diff = output - t;
				if(diff == 0.000000 || diff < 0.000001 )
					printf("acos succeed for  %lf value \n",a);
				else
					printf("expected o/p %lf calculated o/p %lf\n",output,t);
				break;
			
			case 5: 
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&output);
				t = atan(a);
				diff = output - t;
				if(diff == 0.000000 || diff < 0.000001 )
					printf("atan succeed for  %lf value \n",a);
				else
					printf("expected o/p %lf calculated o/p %lf\n",output,t);
				break;
				
			case 6: 
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&output);
				t = sinh(a);
				diff = output - t;					
				if(diff == 0.000000 || diff < 0.000001 )
					printf("sinh succeed for  %lf value \n",a);
				else
					printf("expected o/p %lf calculated o/p %lf\n",output,t);
				break;
				
			case 7: 
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&output);
				t = cosh(a);
				diff = output - t;
				if(diff == 0.000000 || diff < 0.000001 )
					printf("cosh succeed for  %lf value \n",a);
				else
					printf("expected o/p %lf calculated o/p %lf\n",output,t);
				break;
				
			case 8: 
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&output);
				t = tanh(a);
				diff = output - t;
				if(diff == 0.000000 || diff < 0.000001 )
					printf("tanh succeed for  %lf value \n",a);
				else
					printf("expected o/p %lf calculated o/p %lf\n",output,t);
				break;
				
			case 9: 
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&output);
				t = sqrt(a);
				diff = output - t;
				if(diff == 0.000000 || diff < 0.000001 )
					printf("sqrt succeed for  %lf value \n",a);
				else
					printf("expected o/p %lf calculated o/p %lf\n",output,t);
				break;
			case 10:
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&output);
				t = log(a);
				diff = output - t;
				if(diff == 0.000000 || diff < 0.000001 )
					printf("log succeed for  %lf value \n",a);
				else
					printf("expected o/p %lf calculated o/p %lf\n",output,t);
					break;
			case 11:
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&output);
				t = log10(a);
				diff = output - t;
				if(diff == 0.000000 || diff < 0.000001 )
					printf("log10 succeed for  %lf value \n",a);
				else
					printf("expected o/p %lf calculated o/p %lf\n",output,t);
				break;
			case 12:
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&output);
				t = exp(a);
				diff = output - t;
				if(diff == 0.000000 || diff < 0.000001 )
					printf("exp succeed for  %lf value \n",a);
				else
					printf("expected o/p %lf calculated o/p %lf\n",output,t);
				break;
			case 13:
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&output);
				t = floor(a);
				diff = output - t;
				if(diff == 0.000000 || diff < 0.000001 )
					printf("floor succeed for  %lf value \n",a);
				else
					printf("expected o/p %lf calculated o/p %lf\n",output,t);
				break;
			case 14:
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&output);
				t = ceil(a);
				diff = output - t;
				if(diff == 0.000000 || diff < 0.000001 )
					printf("ceil succeed for  %lf value \n",a);
				else
					printf("expected o/p %lf calculated o/p %lf\n",output,t);
				break;
			case 15:
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&output);
				t = fabs(a);
				diff = output - t;
				if(diff == 0.000000 || diff < 0.000001 )
					printf("fabs succeed for  %lf value \n",a);
				else
					printf("expected o/p %lf calculated o/p %lf\n",output,t);
				break;
			case 16:
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&b);
				fscanf(fp,"%lf",&output);
				t = pow(a, b);
				diff = output - t;
				if(diff == 0.000000 || diff < 0.000001 )
					printf("power succeed for  %lf & %lf values \n",a,b);
				else
					printf("expected o/p %lf calculated o/p %lf\n",output,t);
				break;
			case 17:
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&b);
				fscanf(fp,"%lf",&output);
				t = atan2(a, b);
				diff = output - t;
				if(diff == 0.000000 || diff < 0.000001 )
					printf("atan2 succeed for %lf & %lf values \n",a,b);
				else
					printf("expected o/p %lf calculated o/p %lf\n",output,t);
				break;
			case 18:
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&b);
				fscanf(fp,"%lf",&output);
				t = fmode(a,b);
				diff = output - t;
				if(diff == 0.000000 || diff < 0.000001 )
					printf("fmode succedd for %lf & %lf values\n",a,b);
				else
					printf("expected o/p %lf calculated o/p %lf\n",output,t);
				break;
			case 19:
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&output);
				int c;
				t = frexp(a, &c);
				diff = output - t;
				if(diff == 0.000000 || diff < 0.000001 )
					printf("frexp succedd for %lf values \n",a);
				else
					printf("expected o/p %lf calculated o/p %lf\n",output,t);
				break;
			case 20:
				fscanf(fp,"%lf",&a);
				fscanf(fp,"%lf",&b);
				fscanf(fp,"%lf",&output);
				t = idexp(a, b);
				diff = output - t;
				if(diff == 0.000000 || diff < 0.000001 )
					printf("idexp succedd for %lf & %lf values\n",a,b);
				else
					printf("expected o/p %lf calculated o/p %lf\n",output,t);
				break;
			}
	
	}
}
	
	
