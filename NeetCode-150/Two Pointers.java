class Solution {
    // JAI SHRI RAM 
    public boolean isAlphaNumeric(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <='9')){
            return true;
        }
        return false;
    }

    public boolean isPalindromeHelper(StringBuilder s){
        int l = 0, r = s.length()-1; 
        while(r >= l){
            if(s.charAt(r) != s.charAt(l)){
                return false;
            }
            r--; 
            l++;
        }
        return true; 
    }
    
    public boolean isPalindrome(String s) {
        StringBuilder str = new StringBuilder();
        String res = s.toLowerCase(); 
        for(int i = 0; i < res.length(); i++){
            if(isAlphaNumeric(res.charAt(i))){
                str.append(res.charAt(i));
            }
        }

        return isPalindromeHelper(str);
    }
}
