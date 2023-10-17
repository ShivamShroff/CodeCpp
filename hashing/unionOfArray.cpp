    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> s;
        for(int i=0; i<n; i++){
            int k = a[i];
            s.insert(k);
        }
        for(int i = 0; i<m; i++){
            int k = b[i];
            s.insert(k);
        }
        int temp = s.size();
        return temp;
    }