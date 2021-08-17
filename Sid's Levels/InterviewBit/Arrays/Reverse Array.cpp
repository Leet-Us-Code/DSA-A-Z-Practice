//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
string reverseWord(string str){
    int l = 0, r = str.length()-1;
    while(r >= l)
    {
        swap(str[r], str[l]);
        r--;
        l++;
    }
    return str;
}
