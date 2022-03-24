class Solution {
public:
   vector<int> plusOne(vector<int> &digits) {
    int i;
    for(i=digits.size()-1;i>=0;i--)
    {
        if(digits[i]!=9)
        {
            digits[i]++;
            break;
        }
        else
        {
            digits[i] = 0;
        }
    }
    if(!digits[0])
    {
        digits[0] = 1;
        digits.push_back(0);
    }
    return digits;
}
};