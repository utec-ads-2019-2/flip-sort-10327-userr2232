#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    while(cin >> n) {
        int tmp, mvs(0);
        vector<int> v;
        for(int i = 0; i < n; ++i) {
            cin >> tmp;
            v.push_back(tmp);
        }
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n-i-1; ++j)
                if(v[j] > v[j+1]) {
                    swap(v[j],v[j+1]);
                    mvs++;
                }
        cout << "Minimum exchange operations : " << mvs << endl;
    }
    return  0;
}