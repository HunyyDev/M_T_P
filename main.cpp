#include <bits/stdc++.h>
//https://khmt.uit.edu.vn/wecode/truonganpn/assignment/34/139

using namespace std;

long long t1,t2,t3,t4,t5,t6;

int main()
{
    cin>>t1>>t2>>t3>>t4>>t5>>t6;
    cout<<round((double)(t4*60*60+t5*60+t6)/(t1*60*60+t2*60+t3)*100);
    return 0;
}
