
#include <stdio.h>

int main()
{
    int a, b;

    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("So lon nhat: %d\n", a);
        printf("So nho nhat: %d\n", b);
    }
    else 
    {
    	if (b > a)
	    {
	        printf("So lon nhat: %d\n", b);
	        printf("So nho nhat: %d\n", a);
	    }
	    else
	    {
	        printf("Hai so bang nhau: %d\n", a);
	    }
    }

    return 0;
}

