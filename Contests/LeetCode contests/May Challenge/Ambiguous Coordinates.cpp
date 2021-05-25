class Solution {
public:
    vector<string> res;
    vector<string> dot(string s)
    {
        vector<string> result;//to be returned
        //function to put dot in a string
        //first add the string 
        result.push_back(s);
        //insert dots 
        for(int i = 1; i < s.length(); i++)
        {
            result.push_back(s.substr(0,i) + "." + s.substr(i));
        }
        return result;
    }
    //checks if the string is valid 
    bool isValid(string s)
    {
        bool containsDot = false;
        string part1, part2; //splitting based on the dot and checking if each part is valid or not
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '.')
            {
                part1 = s.substr(0,i);
                part2 = s.substr(i);
                containsDot = true;
                break;
            }
        }
        if(containsDot)
        {
            if(part1 != "0" && part1[0] == '0')
                return false;
            else
                return !(part2[part2.length()-1] == '0');
        }
        else 
        {
            if(s == "0")
                return true;
            else if(s[0] == '0')
                return false;
            else
                return true;
        }
    }
    void putComa(string s1, string s2) // puts coma between two string and puts in vector 
    {
        //now before we add coma and combine we must put dot in both the strings 
        vector<string> a = dot(s1);
        vector<string> b = dot(s2);
        //now scan all the possibilities of dotted strings 
        for(int i = 0; i < a.size(); i++)
        {
            if(isValid(a[i])) // if current string is valid
            {
                for(int j = 0; j < b.size(); j++)
                {
                    if(isValid(b[j]))
                    {
                        string fin =  "(" + a[i] + ", " + b[j] + ")";
                        res.push_back(fin); // push the final string in res array
                        fin = "";
                    }
                }
            }
        }
    }
    vector<string> ambiguousCoordinates(string s) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        //since the input is given in terms of (...) lets remove the brackets 
        int n = s.length();
        s = s.substr(1, n-2);
        //break the string into two by inserting coma at different places
        for(int i = 1; i < s.length(); i++)
        {
            string s1 = s.substr(0,i);
            string s2 = s.substr(i);
            putComa(s1, s2); //function for inserting coma and populating the res vector 
        }
        sort(res.begin(), res.end());
        return res;
    }
};
