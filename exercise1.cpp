#include<iostream>

double pi = 3.14;

double compute_area(double d)
{
    double area;
    area = ((pi)*((d/2)*(d/2)));
    return area;
}

double compute_circumference(double d)
{
    double circumference;
    circumference = (2*(pi)*(d/2));
    return circumference;
}

int main()
{
    double d;
    std::cin>>d;
    std::cout<<"Area of the Circle = "<<compute_area(d)<<'\n';
    std::cout<<"Circumference of the Circle = "<<compute_circumference(d);
    return 0;
}





