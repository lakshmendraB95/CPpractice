    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        int N;
        cin >> N;
     
        long long ansA = 0, ansC = 0;
        double ansB = 0;
        
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
     
            ansA += abs(x);
            
            if (abs(x) > ansC) {
                ansC = abs(x);
            }
            
            ansB += pow(abs(x),2);
        }
        
        ansB = pow(ansB, 0.5);
        
         cout << ansA << endl;
         cout << fixed << setprecision(15);
         cout << ansB << endl;
         cout << ansC << endl;
    }