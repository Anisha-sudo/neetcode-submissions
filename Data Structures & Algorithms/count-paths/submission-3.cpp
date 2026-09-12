class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int>row(n,1);
        for(int i=1;i<m;i++){
            vector<int>temp(n,1);
            int tempo=1;
            for(int j=1;j<n;j++){
                temp[j]=row[j]+tempo;
                tempo = temp[j];
            
            }
          
           row=temp;
             for(auto it:row){
                cout<<it<<" ";
            }
            cout<<endl;
        }
       return row[n-1];
    }
};
