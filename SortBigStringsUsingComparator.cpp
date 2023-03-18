#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'bigSorting' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts STRING_ARRAY unsorted as parameter.
 */

/* 
    Sample testcase
    Sample input:
    6
    31415926535897932384626433832795
    1
    3
    10
    3
    5
    Sample output:
    1
    3
    3
    5
    10
    31415926535897932384626433832795
*/
bool cmp(string a,string b){
    //first ka chota hai correct position me hai so 1 return kardo
    if(a.size()<b.size()) return 1;
    //first ka bada hai aur second ka chota hai to sahi position mein nahin hai
    //isliye 0 return kardo
    else if(a.size()>b.size()) return 0;
    int count1=0;
    //ek hi case bacha hai 2 elements same size hai 
    for(int i=0;i<a.size();i++){
        //Agar first element chota hai toh vo sahi postion mai hai 1 return kardo
        if(a[i]<b[count1]) return 1;
        //Agar first element bada hai toh 2 elements sahi position mein nahin hai
        //so 0 return kardo
        else if(a[i]>b[count1]) return 0;
        //Agar 2 elements same hai toh kuch bhi karney ki jarurat nahin hai
        //isliye count1++
        count1++;
    }
    //2 bhi correct position mein hai isliye 0 return kardo
    return 0;
}
vector<string> bigSorting(vector<string> unsorted) {
    sort(unsorted.begin(),unsorted.end(),cmp);
    return unsorted;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> unsorted(n);

    for (int i = 0; i < n; i++) {
        string unsorted_item;
        getline(cin, unsorted_item);

        unsorted[i] = unsorted_item;
    }

    vector<string> result = bigSorting(unsorted);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
