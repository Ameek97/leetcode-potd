class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {

   int ans=INT_MAX;
   int l=landStartTime.size(), w= waterStartTime.size(); 
  
  int t ;

  for(int i=0; i<l ; i++){

    for(int j=0; j<w; j++){
    t= landStartTime[i] + landDuration[i];
    t=max(t, waterStartTime[j]);
     ans= min(ans,t+ waterDuration[j]);} }


  for(int i=0; i<w ; i++){
    for(int j=0; j<l; j++){

     t= waterStartTime[i] + waterDuration[i];

      t=max(t, landStartTime[j]);
    
     ans= min(ans,t+ landDuration[j]);} }   

    
  return ans;

  



    }
};