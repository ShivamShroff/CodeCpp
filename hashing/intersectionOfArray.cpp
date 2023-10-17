    #include<bits/stdc++.h>
    using namespace std;

    
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
    unordered_set<int>s;
    for(int i=0; i<n; i++)
    s.insert(a[i]);
    
    int count=0;
    
    for(int i=0; i<m; i++){
        int key = b[i];
        if(s.find(key) != s.end())
        count++;
        
    }
    
    return count;
    
    }

    //another
      unordered_map<int,int>umap;
        for(int i=0;i<n;i++){
            umap[a[i]] = 1;
        }
        int cnt =0;
        for(int i=0;i<m;i++){
            if(umap[b[i]]==1){
                cnt++;
                umap[b[i]] = 0;
            }
        }
        return cnt;


//third one

        unordered_set<int> s1;
        for(int i=0; i<n; i++)
        {
            s1.insert(a[i]);
        }
        
        unordered_set<int> s2;
        
        for(int i=0; i<m; i++)
        {
            int key = b[i];
            auto it = s1.find(key);
            if(it != s1.end())
            {
                s2.insert(key);
            }
        }
        
        return s2.size();
    
    int main(){
    
    int arr[5]={1,2,3,4,5};
    int brr[5]={3,4,5,6,7};
    NumberofElementsInIntersection(arr,brr,5,5);
    return 0;
    }