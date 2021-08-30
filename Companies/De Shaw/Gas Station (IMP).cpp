// Hari

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // fast
        ios_base::sync_with_stdio(false);
        // 2 conditions -> if overall cost > overall gas then its not possible at all to travel
        // To start from a point, the gas available > gas that will be used to move from there to next
        int startPos = 0, totalGas = 0, currTank = 0;
        int N = gas.size(); 
        for(int i = 0; i<N; i++){
            int netGas = gas[i]-cost[i];
            totalGas += netGas;
            currTank += netGas;
            if(currTank < 0){
                // start cannot be here. Move on. second condition check
                startPos = i + 1;
                currTank = 0;
            } 
        }
        return totalGas < 0? -1 : startPos; // first condition check
    }
