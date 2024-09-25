class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        char temp;
        int i=0,j=n-1;
        while(i<j){
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
    }
};