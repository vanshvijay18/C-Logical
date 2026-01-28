#include <stdio.h>
int main()
{
    int n, k, ld, b, temp = 1, i = 1, count = 0;
    printf("Enter a n: ");
    scanf("%d", &n);
    b = n;
    printf("Enter a k: ");
    scanf("%d", &k);
    while (b != 0)
    {
        b = b / 10;
        count++;
    }
    printf("count %d\n", count);
    while (i < count)
    {
        temp = 10 * temp;
        i++;
    }
    printf("temp %d\n", temp);

 k=k%count;
 if(k<0) k+=count;
    while (k != 0)
    {
        ld = n % 10;       // 4 3
        n = n / 10;        // 123  412
        k--;               // 3  2
        n = ld * temp + n; // 4123   3412
    }

    printf("%d", n);
}
// 1234   1 4123    2 3412    3 2341     4  1234

//-1 2341  -2 3412 -3 4123  -4 1234

// 12345   1 51234   2 45123