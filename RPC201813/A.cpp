#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    vector<string> v(3);
    vector<string> one = {":::",":o:", ":::"};
    vector<string> two_1 = {"o::",":::", "::o"};
    vector<string> two_2 = {"::o",":::", "o::"};
    vector<string> thr_1 = {"o::",":o:", "::o"};
    vector<string> thr_2 = {"::o",":o:", "o::"};
    vector<string> four = {"o:o",":::", "o:o"};
    vector<string> five = {"o:o",":o:", "o:o"};
    vector<string> six_1 = {"ooo",":::", "ooo"};
    vector<string> six_2 = {"o:o","o:o", "o:o"};
    for(int i = 0; i < 3; i++){
        string tmp;
        getline(cin,tmp);
        v[i] = tmp;
    }
    if(v == one)cout << 1 << endl;
    else if(v == two_1 || v == two_2)cout << 2 << endl;
    else if(v == thr_1 || v == thr_2)cout << 3 << endl;
    else if(v == four)cout << 4 << endl;
    else if(v == five)cout << 5 << endl;
    else if(v == six_1 || v == thr_2)cout << 6 << endl;
    else cout << "unknown" << endl;

    return 0;
}