class Solution {
public:
    int earliestFullBloom(vector<int>& plant, vector<int>& grow) {
        int n=plant.size();
        int m=grow.size();
        int ans=0;
        vector<pair<int,int>> mp(n);
        for(int i=0;i<n;i++){
            mp[i]={plant[i],grow[i]};
        }
        auto lambda=[](pair<int,int>&a,pair<int,int>&b){
            return a.second>b.second;
            };
        
    sort(mp.begin(),mp.end(),lambda);
int maxdays=0;
int prevplant=0;
    for(auto it:mp){
int currentplant=it.first;
int currentgrow=it.second;
prevplant+=currentplant;
int currentbloomday=currentgrow+prevplant;
maxdays=max(maxdays,currentbloomday);
    }
    return maxdays;}
};