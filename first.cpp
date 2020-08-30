#include <bits/stdc++.h>
using namespace std;


void printMode(int a[], int n)
{
    int max = *max_element(a, a + n);
    cout<<"yea"<<endl;

    int t = max + 1;
    int count2[t];
    for (int i = 0; i < t; i++)
        count2[i] = 0;

    for (int i = 0; i < n; i++)
        count2[a[i]]++;

    int mode = 0;
    int k = count2[0];
    for (int i = 1; i < t; i++) {
        if (count2[i] > k) {
            k = count2[i];
            mode = i;
        }
    }

    cout << mode <<endl;
}


void imode(int a[],int n){
    int max = *max_element(a, a + n);

    int t = max + 1;
    int count1[t];
    for (int i = 0; i < t; i++)
        count1[i] = 0;

    for (int i = 0; i < n; i++)
        count1[a[i]]++;

    printMode(count1,t);
}

int main()
{
    int t;
    cin>>t;
    for(int ii=0;ii<t;ii++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        imode(a,n);
    }

    return 0;
}
