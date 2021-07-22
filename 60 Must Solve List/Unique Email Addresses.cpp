// Hari

class Solution {
public:
    string ruler(string email){
        string cleanMail;
        for(char c: email){
            if(c == '+' || c == '@') break;
            if(c == '.') continue;
            cleanMail += c;
        }
        cleanMail += email.substr(email.find('@'));
        return cleanMail;
    }
    
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> emailSet;
        for(auto &it: emails){
            emailSet.insert(ruler(it));
        }
        
        return emailSet.size();
    }
};
