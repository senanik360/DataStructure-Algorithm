#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[]= {34,23,14,24,12,64,45,89,23};

    int asize = sizeof(arr)/sizeof(arr[0]);

    cout<<"Enter a number to search : ";
    int c,count=0;
    cin>>c;
    for(int i=0; i<asize; i++)
    {
        if(c==arr[i])
        {
            count++;
            cout<<"Found at index [" <<i<<"]\n";
            break;
        }
    }
    if(count==0)
    {
        cout<<"Not found "<<endl;
    }

}

/*
Time complexity in best case  : O(1)
Time complexity in worst case : O(n)
Time complexity in average case : O((n+1)/2)
*/
