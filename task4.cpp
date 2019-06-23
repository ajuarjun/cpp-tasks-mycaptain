#include<bits/stdc++.h>
main()
{int a[50],i,size,sum=0;
 std::cout<<"\n Enter the size of the array:";
 std::cin>>size;
 std::cout<<"\n Enter the elements of the array:";
 for(i=0;i<size;i++)
 {std::cin>>a[i];
  sum=sum+a[i];
 }
 std::cout<<"\n The elements of the array are:";
 for(i=0;i<size;i++)
 {std::cout<<"\n"<<a[i];
 }
 std::cout<<"\n The sum of the elements of the array are:"<<sum;
}
