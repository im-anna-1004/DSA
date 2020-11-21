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
                break;
            case 2:
                cout<<"Tuesday";
                break;
            case 3:
                cout<<"Wednesday";
                break;
            case 4:
                cout<<"Thursday";
                break;
            case 5:
                cout<<"Friday";
                break;
            case 6:
                cout<<"Saturday";
                break;
            case 7:
                cout<<"Sunday";
                break;
            default:
        
            exit(0);
        }
        }
    return 0;
}