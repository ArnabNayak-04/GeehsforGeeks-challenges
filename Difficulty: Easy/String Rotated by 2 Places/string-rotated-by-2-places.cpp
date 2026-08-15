class Solution {
  public:
    bool isRotated(string& s1, string& s2) {
        // code here
        
        if (s1.size() != s2.size())
        return false;
        
        string clockwise =s1,anticlockwise=s1;
        
        rotateClockwise(clockwise);
        rotateClockwise(clockwise);
        
        if(clockwise == s2)
        return true;
        
        rotateAntiClockwise(anticlockwise);
        rotateAntiClockwise(anticlockwise);
        
        if(anticlockwise == s2)
        return true;
        
        
        return false;
        
    }
        
        void rotateClockwise(string& s)
        {
            char c = s[s.size()-1];
            int index = s.size()-2;
            while(index>=0)
            {
                s[index+1]=s[index];
                index--;
            }
            s[0] = c;
        }
        
        // rotate clockwise(clockwise);
        // rotate clockwise(clockwise);
        // if(clockwise == s2)
        // return true;
        
        void rotateAntiClockwise(string& s)
        {
            char c=s[0];
            int index=1;
            while(index<s.size())
            {
                s[index-1] = s[index];
                index++;
            }
            s[s.size()-1] = c;
        }
    
};
