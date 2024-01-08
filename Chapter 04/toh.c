#include <stdio.h>
void ToH(int n, char A, char C, char B)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c",A ,C );
		return;
	}
	ToH(n-1, A, B, C);
	printf("\n Move disk %d from rod %c to rod %c", n, A, C);
	ToH(n-1, B, C, A);
}

int main()
{
	int n ;
	printf("Enter number of disks: ");
	scanf("%d", &n);
	ToH(n, 'A', 'C', 'B');
	return 0;
}

