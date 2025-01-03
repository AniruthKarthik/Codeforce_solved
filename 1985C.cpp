#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        long long prefixMax = -1;
        long long prefixSum = 0;   
        long long answer = 0;      
        
        for (int i = 0; i < n; i++) {
            prefixMax = max(prefixMax, a[i]);  
            prefixSum += a[i];                 
            
            if (prefixSum - prefixMax == prefixMax) {
                answer++;
            }
        }
        cout << answer << endl;
    }

    return 0;
}
