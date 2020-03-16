#include <iostream>
#include <map>
#include <string>
using namespace std;
map<char, string> h2b;
map<string, char> b2o;
string h;
string b;
string o;
int n;
void init()
{
    h2b['0'] = "0000";
    h2b['1'] = "0001";
    h2b['2'] = "0010";
    h2b['3'] = "0011";
    h2b['4'] = "0100";
    h2b['5'] = "0101";
    h2b['6'] = "0110";
    h2b['7'] = "0111";
    h2b['8'] = "1000";
    h2b['9'] = "1001";
    h2b['A'] = "1010";
    h2b['B'] = "1011";
    h2b['C'] = "1100";
    h2b['D'] = "1101";
    h2b['E'] = "1110";
    h2b['F'] = "1111";
    b2o["000"] = '0';
    b2o["001"] = '1';
    b2o["010"] = '2';
    b2o["011"] = '3';
    b2o["100"] = '4';
    b2o["101"] = '5';
    b2o["110"] = '6';
    b2o["111"] = '7';
}
int main()
{
    init();
    cin >> n;
    while (n--) {
        b.clear();
        o.clear();
        cin >> h;
        int lenh = h.length();
        for (int i = 0; i < lenh; i++)
            b += h2b[h[i]];
        //cout << b << endl;
        int lenb = b.length();
        int t = lenb % 3;
        if (t == 0) {
            for (int i = 0; i < lenb; i += 3)
                o += b2o[b.substr(i, 3)];
        } else if (t == 1) {
            o += b2o[string("00") + b[0]];
            for (int i = 1; i < lenb; i += 3)
                o += b2o[b.substr(i, 3)];
        } else if (t == 2) {
            o += b2o[string("0") + b[0] + b[1]];
            for (int i = 2; i < lenb; i += 3)
                o += b2o[b.substr(i, 3)];
        }
        int leno = o.length();
        int pos;
        for (pos = 0; pos < leno; pos++)
            if (o[pos] != '0')
                break;
        o.erase(0, pos);
        cout << o << endl;
    }
    return 0;
}