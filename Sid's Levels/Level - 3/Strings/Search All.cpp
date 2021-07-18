vector<int> stringSearch(string big,string small){
    //store the occurrences in the result vector
    vector<int> res;
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int index = big.find(small);
    if(index == -1)
    return res;
    res.push_back(index);
    while(index != -1)
    {
        index = big.find(small, index+1);
        if(index != -1)
        res.push_back(index);
    }
    return res;

}
