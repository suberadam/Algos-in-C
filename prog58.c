/* nested calling of functions : A function being called inside another function call
		outer_function(inner_function(args))
	Here the returned value of the inner function is used as arguement for the outer function
	It is important that the inner function returns a value (inner Fn. cannot be a void Fn.)
		ex: y=pow(5,3);
			x=sqrt(y);		can be combined as  x=sqrt(pow(5,3));
		ex: x=reverse_number(y);
			show_even_odd(x);    can be combined as   show_even_odd(reverse_number(y));   */
#include <stdio.h>
void main()
{
	int max(int x, int y);
	int a, b, c, big;
	printf("enter 3 values ");
	scanf("%d%d%d",&a,&b,&c);
	big=max(a,max(b,c));    // or  big=max(max(a,b),c);
	printf("biggest value is %d",big);
}
int max(int x, int y)
{
	if (x>y)
		return x;
	else 
		return y;			// return (x>y) ? x : y
}
	
