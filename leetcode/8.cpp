class Solution {
public:
    int myAtoi(string s) {
        int num=0;
        int i=0;
        int sign=1  ;   // default 

        while(s[i]==' '){
            i++;
        }

        if(i<s.length()&& (s[i]=='+'||s[i]=='-')){

            sign=s[i]=='+'?1:-1;
            i++;
        }




        while(i<s.size()&& isdigit(s[i])){



            if((num>INT_MAX/10)||(num==INT_MAX/10 &&s[i]>'7')){
                return     (sign==1 ?INT_MAX:INT_MIN);
            }

           
                num=num*10+(s[i]-'0');
                i++;
            
        }

        return sign*num;
    }
};