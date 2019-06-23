#include<bits/stdc++.h>
main()
{int a[50],i,size,temp,j;
 std::cout<<"\n Enter the size of the array:";
 std::cin>>size;
 std::cout<<"\n Enter the elements of the array:";
 for(i=0;i<size;i++)
 {std::cin>>a[i];
 }
 std::cout<<"\n The elements of the array are:";
 for(i=0;i<size;i++)
 {std::cout<<"\n"<<a[i];
 }
 std::cout<<"\n The sorted array is:";
 for(i=0;i<size;i++)
 {for(j=0;j<size-i-1;j++)
  {if(a[j]>a[j+1])
   {temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
 for(i=0;i<size;i++)
 {std::cout<<"\n"<<a[i];
 }
}
