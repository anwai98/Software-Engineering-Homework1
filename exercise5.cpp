#include<iostream>

int x,y,z;

void and_operator()
{
    for(x=0;x<=1;x++)
    {
        for(y=0;y<=1;y++)
        {
            for(z=0;z<=1;z++)
            {
                    std::cout<<"\n"<<x<<"\t"<<y<<"\t"<<z<<"\t"<<(x&&y&&z);
            }
        }
    }
}

void or_operator()
{
    for(x=0;x<=1;x++)
    {
        for(y=0;y<=1;y++)
        {
            for(z=0;z<=1;z++)
            {
                    std::cout<<"\n"<<x<<"\t"<<y<<"\t"<<z<<"\t"<<(x||y||z);
            }
        }
    }
}

int main()
{
    std::cout<<"AND Truth Table"<<"\n";
    std::cout<<"X\tY\tZ\tX&&Y&&Z\n";

    and_operator();

    std::cout<<"\n"<<"OR Truth Table"<<"\n";
    std::cout<<"X\tY\tZ\tX||Y||Z\n";

    or_operator();

    return 0;
}

