#include<bits/stdc++.h>
void swap(int *x,int *y)
{int temp;
 temp=*x;
 *x=*y;
 *y=temp;
}
main()
{int a,b;
 std::cout<<"\n Enter the values of two numbers(a,b):";
 std::cin>>a>>b;
 swap(&a,&b);
 std::cout<<"\n The value of a="<<a<<" and b="<<b;
}
