#include <iostream>
#include <vector>
using namespace std;

class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        vector<int> res;
        for(int i=0; i<n; i++){
            if(a[i] == key){
                res.push_back(i);
            }
            
        }
        if (res.empty()) {
            return std::vector<int>{-1,-1};
        }
    
        auto min_it = min_element(res.begin(), res.end());
        auto max_it = max_element(res.begin(), res.end());
        return std::vector<int> { *min_it, *max_it };
    }
    
  
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}

