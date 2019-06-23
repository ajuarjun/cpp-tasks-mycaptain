#include<bits/stdc++.h>
#include<ctype.h>
main()
{char str[50];
 int i;
 std::cout<<"\n Enter the string:";
 std::cin>>str;
 std::cout<<"\n The string is:";
 std::cout<<str;
 
 std::cout<<"\n The string after converting into all lowercases is:";
 for(i=0;i<strlen(str);i++)
 {std::cout<<char(tolower(str[i]));
 }
}
