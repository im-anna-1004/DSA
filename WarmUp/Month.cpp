#include<bits/stdc++.h>
using namespace std;
 int  main() {
 int n;
 cout<<"enter the number month ";
 cin>>n;

 switch(n){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: cout<<"there are 31 days ";
        break;
    case 4:
    case 6:
    case 9:
    case 11: cout<<"there are 30 days";
        break;
    case 2: cout<<"28 days generally but 29 days in leap year";
        break;
    default: cout<<"invalid";
  }
  return 0;
  }