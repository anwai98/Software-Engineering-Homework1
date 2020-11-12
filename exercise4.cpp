#include<iostream>

int n,i;

void multiplication_table(int n)
{
    for(i=1;i<=10;i++)
    {
        std::cout<<n<<" * "<<i<<" = "<<n * i<<"\n";
    }
}

int main()
{
    std::cout<<"Enter a number - ";
    std::cin>>n;

    multiplication_table(n);

    return 0;

}
