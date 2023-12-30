class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int> chrcount(26,0);
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                chrcount[words[i][j]-'a']++;
            }
        }
        int a=words.size();

        for(auto i:chrcount){
            if(i != 0 && i%(a)!=0){
                return 0;
            }
        }
        return 1;
    }
};