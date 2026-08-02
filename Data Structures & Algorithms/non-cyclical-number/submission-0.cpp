class Solution {
public:
    int sum(int n){
        int sum=0;
        while(n>0){
            int lastd=n%10;
            n=n/10;
            sum+=lastd*lastd;

        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> hset;
        int val=0;
        while(val!=1){
            val=sum(n);
            if(val==1){
                return true;
            }
            if(hset.count(val))return false;
            hset.insert(val);
            n=val;
            
        }
        return true;
     
    }
};