class Solution {
public:
    int numDecodings(string s) {
        //https://www.youtube.com/watch?v=o1i7JYWbwOE
        int n=s.size();
        if(n==0 || s[0]=='0')   return 0;
        if(n==1)    return 1;
        
        int c1=1,c2=1;
        //c2 is prev sol, 
        //c1 is prev to prev
        
        for(int i=1;i<n;i++){
            int oned=s[i]-'0';  // curr digit 
            int twod= (s[i-1]-'0')*10 + oned; // curr digit + prev digit 
            int count=0;
            
            if(oned>0)
                count+=c2;
            if(twod>=10 && twod<=26)
                count+=c1;
            c1=c2;
            c2=count;
            
        }return c2;
        
    }
};
