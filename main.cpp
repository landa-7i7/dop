#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}


int main(){
    // // dop 1
    // // int Q1, P1, Q2, P2, A;
    // // cin >> Q1 >> P1 >> Q2 >> P2 >> A;
    // int Q1 = 1, P1 = 2, Q2 = 3, P2 = 4, A = 10;

    // bool ost = A%Q2 != 0;
    // bool ost_2 = A%Q1 != 0;

    // int cost1 = (A/Q1+ost_2)*P1;
    // int cost2 = A/Q1*P1+( A%Q1 / Q2 + (A%Q1 %Q2 != 0) )*P2;

    // int cost3 = (A/Q2+ost)*P2;
    // int cost4 = A/Q2*P2+( A%Q2 / Q1 + (A%Q2 %Q1 != 0) )*P1;

    // // cout << cost1 << ' ' << cost2 << ' ' << cost3 << ' ' << cost4 << endl;
    // cout << min( min(cost1, cost2), min(cost3, cost4) );


    // dop 2
    // int luckyTicketCount = 0;

    // for (int ticket = 0; ticket < 1'000'000; ++ticket) {
    //     int tmp = ticket;
    //     vector<int> x(6);
    //     for(int i=0; i<6; ++i){
    //         x[i] = (tmp%10);
    //         tmp /= 10;
    //     }
        
    //     int l = 0, r = 0;
    //     for(int i=0; i<6; ++i){
    //         if (i<3) r += x[i];
    //         else l += x[i];
    //     }
    //     if(l==r) luckyTicketCount++;
    // }

    // cout << luckyTicketCount << endl;


    // dop 3
    // cout << "Enter N - number of numbers in sequence" << endl;
    int N = 3;
    // int subsequence[N];
    // for(int i=0; i<N-1; ++i) cin >> subsequence[i];

    int subsequence[6] = {78,4,5};
    for(int i=0; i<N; ++i) cout << subsequence[i] << ' ';
    cout << endl;

    int offset = 0;
    for (int i=0; i<3-offset; ++i){
        if(isPrime(subsequence[i])) { --offset; }
        else if(sumOfDigits(subsequence[i]) == 15) { subsequence[i+offset] = subsequence[i]; subsequence[N] = subsequence[i]; ++N; }
        else { subsequence[i+offset] = subsequence[i]; }
        // cout << subsequence[i] << (isPrime(subsequence[i]));
    }


    for(int i=0; i<N; ++i) cout << subsequence[i] << ' ';





    return 0;
}