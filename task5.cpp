#include<bits/stdc++.h>
main()
{int a[50],i,size,small,large;
 std::cout<<"\n Enter the size of the array:";
 std::cin>>size;
 std::cout<<"\n Enter the elements of the array:";
 std::cin>>a[0];
 small=a[0];
 large=a[0];
 for(i=1;i<size;i++)
 {std::cin>>a[i];
  if(a[i]>large)
  large=a[i];
  if(a[i]<small)
  small=a[i];
 }
 std::cout<<"\n The elements of the array are:";
 for(i=0;i<size;i++)
 {std::cout<<"\n"<<a[i];
 }
 std::cout<<"\n The largest element is "<<large<<" and the smallest element is "<<small;
}
