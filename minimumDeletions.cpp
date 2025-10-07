class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        int bs=0,ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='b') bs++;
            else{
                if(bs>0){
                    // if b's are less then remove b.
                    bs--,ans++;
                }
                else{
                    // if b's are more then remove a.
                    continue;
                }
            }
        }
        return ans;
    }
};
