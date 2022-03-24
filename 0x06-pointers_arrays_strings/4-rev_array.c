#include "main.h"
/* void reverse_array -  reverses the content of an array of integers
 * @a: string to reversed
 * @n: number of elements of an array
 **/
void reverse_array(int *a, int n)
{
    int temp[n];
    for(int i=0;i < n;i++)
    {
        temp[i] = a[i];
    }
    for(int i=0,j = n-1; j >= 0;j--,i++)
    {
        a[j] = temp[i];
    }
}
