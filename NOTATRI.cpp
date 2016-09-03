#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    while(true)
    {
        int n;
        cin >> n;
        if(n == 0)
            return 0;
        vector<int> d(n);
        for(int i = 0; i != n; ++i)
            cin >> d[i];
        sort(d.begin(), d.end());
        int num = 0;
        for(int i = 0; i != n - 2; ++i){
            for(int j = i+1; j != n-1; ++j)
                num += d.end() - upper_bound(d.begin() + j + 1, d.end(), d[i] + d[j]);
        }
        cout << num << endl;
    }
}