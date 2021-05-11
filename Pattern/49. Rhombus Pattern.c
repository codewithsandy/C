/* 49. Rhombus Pattern

	        1 1
	      2     2
	    3         3
	  4             4
	5                 5
	  4             4
	    3         3
	      2    2
	       1 1
					*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int num, r, c, sp, n;
    clrscr();

    printf("Enter the number : ");
    scanf("%d", &num);

    for (r = 1; r <= num; r++)
    {
        for (sp = num - r; sp >= 1; sp--)
            printf(" ");

        printf("%d", r);

        for (sp = r * 2; sp > 1; sp--)
            printf(" ");

        printf("%d", r);
        printf("\n");
    }

    for (r = 1, n = num - 1; r < num; r++, n--)
    {
        for (sp = r; sp >= 1; sp--)
            printf(" ");

        printf("%d", n);

        for (sp = n * 2; sp > 1; sp--)
            printf(" ");

        printf("%d", n);
        printf("\n");
    }
    getch();
}