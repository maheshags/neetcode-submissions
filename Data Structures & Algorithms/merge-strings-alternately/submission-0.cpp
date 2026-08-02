class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s1=word1.size();
        int s2=word2.size();
        string nword="";
        int i=0,j=0;

        while(i<s1 && j<s2){
            nword+=word1[i];
            nword+=word2[j];
            i++;
            j++;
        }
        if(i<s1){
            nword+=word1.substr(i,s1);
        }
        else{
            nword+=word2.substr(j,s2);
        }
        return nword;
    }
};