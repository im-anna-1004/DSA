#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cout<<"enter no of day";
    cin>>n;
    while(1)
        {switch(n) {
            case 1:
                cout<<"monday";
                exit(0);
            case 2:
                cout<<"Tuesday";
                exit(0);
            case 3:
                cout<<"Wednesday";
                exit(0);
            case 4:
                cout<<"Thursday";
                exit(0);
            case 5:
                cout<<"Friday";
                exit(0);
            case 6:
                cout<<"Saturday";
                exit(0);
            case 7:
                cout<<"Sunday";
                exit(0);
            default:
                cout<<"Wrong choice";
                exit(0);
        }
        }
    return 0;
}