#include <stdio.h>
int main()
{
	//第1题
	
	char c1,c2;
	  scanf("%c",&c1);
    c2 = c1 - 32;
    printf("'%c'\n",c2);
 
	//第2题
	
	float a=25,b=5;
	float c;

	/********** Begin **********/
	c = ((a+b)*4)/(a*b);
    
	/********** End **********/
	
	printf("c = %.6f\n",c);

	//第3题
	
	int n,g,s,h,m;
	scanf("%d",&n);
	
	/********** Begin **********/
	g=n%10		;		//分离个位
	/********** End **********/
	
	/********** Begin **********/
	s=(n/10)%10		;		//分离十位
	/********** End **********/
	
	/********** Begin **********/
	h=n/100		;		//分离百位
	/********** End **********/
	
	m=100*g+10*s+h;
	printf("%d",m);

	return 0;

} 
