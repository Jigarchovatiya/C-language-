#include<stdio.h>
#define n 5
int a[n];
int top=-1;
void print()
{
    if(top > 0)
    {
        print("\n Array is empty");
    }
    for (int i = 0; i < top; i++)
    {
        printf("\n %d",a[i]);
        printf("\n");
    }
}
void insert(int val)
{
    if(top >= n-1)
        printf("\n Overflow");
    else
    a[++top] = val;
    printf("\n %d",val);
}
void delete()
{
    if(top < 0)
        printf("\n underflow");
    else
        {
            printf("\n delete is %d:",a[top]);
            --top;
        }
}
void firstisert(int val)
{
    if(top>=n-1)
        printf("overflow...");
    else if(top == -1)
        a[++top]=val;
    else
    {
        for (int i=n-1;i>=0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=val;
        ++top;
    }
}
void firstdelete()
{
    if(top<0)
        printf("Empty...");
    else
    {
        printf("Delete element is %d",a[0]);
        for (int i=0;i<n;i++)
        {
            a[i]=a[i+1];
        }
        --top;
    }
}
void midisert(int val)
{
    if(top>=n-1)
        printf("overflow...");
    else
    {
        for (int i=n;i>=n/2;i--)
        {
            a[i]=a[i-1];
        }
        a[n/2]=val;
        ++top;
    }
}
void middelete()
{
    if(top<0)
        printf("Empty...");
    else
    {
        printf("Delete element is %d",a[n/2]);
        for (int i=n/2;i<n;i++)
        {
            a[i]=a[i+1];
        }
        --top;
    }
}
int main()
{
    int ch,x,y,z;
    do
    {
        printf("\n 1.Insert");
        printf("\n 2.Delete");
        printf("\n 3.Firstinsert");
        printf("\n 4.Mirstdelete");
        printf("\n 5.Midinsert");
        printf("\n 6.Middelete");
        printf("\n 7.Print");
        printf("\n 1.Exit");

        printf("\n enter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter Element:");
                scanf("%d",&x);
                insert(x);
                break;

            case 2:
                delete();
                break;

            case 3:
                printf("Enter First Element:");
                scanf("%d",&y);
                firstinsert(y);
                break;

            case 4:
                firstdelete();
                break;

            case 5:
                printf("Enter Mid Element:");
                scanf("%d",&y);
                midinsert(y);
                break;

            case 6:
                middelete();
                break;

            case 7:
                print();
                break;

            case 0:
                break;

            default:
                printf("Wrong Choice...");
                break;
        }
    } while (ch!=0);
}
