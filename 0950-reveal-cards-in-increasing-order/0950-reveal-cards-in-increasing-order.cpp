class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        sort(deck.begin(),deck.end());
        vector<int>nums(n);
        queue<int>q;
        for(int i=0;i<n;i++){
            q.push(i);
        }
        for(int card:deck){
            int j=q.front();
            q.pop();
            nums[j]=card;
            if(!q.empty()){
                q.push(q.front());
                q.pop();
            }
        }

        return nums;
    }
};