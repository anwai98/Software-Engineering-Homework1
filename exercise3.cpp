#include<iostream>

int a = 0, b = 1, c;
int n,i;

void fibonacci_sequence(int n)
{
    for(i=0;i<n;i++)
    {
        std::cout<<a<<" ";
        c = a + b;
        a=b;
        b=c;
    }
}

int main()
{
    std::cout<<"Enter the no. of elements in sequence - "<<"\n";
    std::cin>>n;

    fibonacci_sequence(n);

    return 0;

}
