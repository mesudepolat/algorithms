//
//  Palindromic Array.cpp
//  arrays practice
//
//

#include<iostream>
#include<string.h>
using namespace std;


class Solution {
public:
    int PalinArray(int a[], int n)
    {

        for(int i=0; i<n; i++){
            
            string str = to_string(a[i]);
            int start=0;
            unsigned long end = str.length()-1;
            
            
            while(start < end){
                if(str[start] != str[end]){
                   return 0;
                }
                start++;
                end--;
            }
        }
        return 1;
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        Solution obj;
        cout<<obj.PalinArray(a,n)<<endl;
    }
}
