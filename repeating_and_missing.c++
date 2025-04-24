vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
   int hash[n+1] ={0};
   
   int repeating =-1;
   int missing =-1;
   for(int i=0;i<n;i++){
       hash[A[i]]++;
   }
   for(int i=0;i<=n;i++){
       if(hash[i]==0){
           missing = i;
       }
       if(hash[i] == 2){
           repeating =i;
       }
   }
   return {repeating,missing};
}
