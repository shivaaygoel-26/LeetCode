class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count=0;
for(int i=0;i<sentences.size();i++){
    int word=1;
    for(auto nums:sentences[i]){
        if(nums==' '){
            word++;
        }
        count=max(count,word);
    }
}
return count;
    }
};