class Solution {
public:

int num(char C)
{
    if(C=='I')
    return 1;
    else if(C=='V')
    return 5;
    else if(C=='X')
    return 10;
    else if(C=='L')
    return 50;
    else if(C=='C')
    return 100;
    else if(C=='D')
    return 500;
    else 
    return 1000;

}

    int romanToInt(string s) {
        int sum = 0, index = 0;
        while(index<s.size()-1)
        {
            if(num(s[index])<num(s[index+1]))
            sum -= num(s[index]);
            else
            sum += num(s[index]);
            index++;
        }

        sum += num(s[s.size()-1]);
        return sum;
    }
};