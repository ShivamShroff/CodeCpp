//   vector<int> topK(vector<int>& nums, int k) {
//         // Code here
//         vector<int>v,m;
//         unordered_map<int,int>umap;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             umap[nums[i]]++;
//         }
//      /*   for (auto& it : umap) { 
 
//         cout << it.first << ' '
//             << it.second << endl; 
//     } */
//         for(auto x :umap){
//             v.push_back(x.second);
//         }
//         sort(v.begin(),v.end());
//         int siz=v.size();
//         int s,d;
//         s=v[siz-1];
//         d=v[siz-2];
//         for(auto x:umap){
//             if(x.second==s){
//                 m.push_back(x.first);
//             }
//         }
//           for(auto x:umap){
//             if(x.second==d){
//                 m.push_back(x.first);
//             }
//         }
//        return m; 
//     }
// };



bool compare(pair<int,int> &p1,
            pair<int, int> &p2)
{
    // If frequencies are same, compare
    // values
    if (p1.second == p2.second)
        return p1.first > p2.first;
    return p1.second > p2.second;
}
class Solution {
  public:
  
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<int>v;
        int s=mp.size();
        pair<int,int>p[s];
        int j=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            p[j++]=make_pair(it->first,it->second);
        }
        sort(p,p+s,compare);
        for(int i=0;i<k;i++)
        {
            v.push_back(p[i].first);
        }
        return v;
    }
};