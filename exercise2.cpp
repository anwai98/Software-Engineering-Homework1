#include<iostream>

int a[]={0,5,10,15,20};

int i,n=5;

double max_arr1(int a[])
{
    int max_val = a[0];

    for (i=0; i<n; i++)
    {
        if(a[i]>max_val)
            max_val = a[i];
    }

    return max_val;
}

double min_arr1(int a[])
{
    int min_val = a[0];

    for (i=0; i<n; i++)
    {
        if(a[i]<min_val)
            min_val = a[i];
    }

    return min_val;
}

int main()
{
    std::cout<<"The Maximum Value of the Array is = "<<max_arr1(a)<<'\n';
    std::cout<<"The Minimum Value of the Array is = "<<min_arr1(a);
}
