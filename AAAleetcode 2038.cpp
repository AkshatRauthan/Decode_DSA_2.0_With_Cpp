#include "iostream"
#include "string"
using namespace std;

class Solution {
public:
    bool winnerOfGame(string s1) {
        for (int i=1;i<s1.length();i++){
            if (i==s1.length()) return false;
            else if (s1[i-1] == 'A' && s1[i] == 'A' && s1[i+1] == 'A'){
                s1.erase(i, 1);
                break;
            }
        }
        for (int i=1;i<s1.length();i++){
            if (i==s1.length()) return true;
            else if (s1[i-1] == 'B' && s1[i] == 'B' && s1[i+1] == 'B'){
                s1.erase(i, 1);
                break;
            }
        }
        return winnerOfGame(s1);
    }
};