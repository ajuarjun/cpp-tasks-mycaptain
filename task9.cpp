#include<bits/stdc++.h>
main()
{int year,days,week,numofdays;
 std::cout<<"\n Enter the number of days:";
 std::cin>>numofdays;
 year=numofdays/365;
 numofdays=numofdays-365*year;
 week=numofdays/7;
 numofdays=numofdays-7*week;
 days=numofdays;
 std::cout<<"\n Years:"<<year;
 std::cout<<"\n Weeks:"<<week;
 std::cout<<"\n Days:"<<days;
}
