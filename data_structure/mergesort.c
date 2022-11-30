#include<stdio.h>
#include<stdlib.h>
void merge search(int a[],int l,int mid,int h)
{
    int b[50],i,j,k;
    i=1,k=1,j=mid+1;
    while(i<=mid && j<=h)
    {
        if(a[i]<a[j])
            b[k++] =a [j++];
        else
            b[k++] =a [j++];
    }
}