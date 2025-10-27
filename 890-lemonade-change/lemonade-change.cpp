class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for(int i=0;i<bills.size();i++){
            if(bills[i] == 5) five++; // increasing the denomination of the five 
            else if (bills[i] == 10) {   // if the deni=omination is the 10
                if(five){
                    five--;             // if we have 5 denomination then we have to return him 5 so we are subtracting it
                    ten++;              // if we have ten denomination then after decreasing increase its denomination
                }
                else return false;         // return the false one
            }
            else{           // now we have a denomination of 20
                if(ten and five){
                    ten--;                  // decrease the denomination of the 10 as we have to return 20 - 10 = 10 remain
                    five--;                 // then if it's a 10 remaining then we are decreasing the value of five 
                }   
                else if (five >= 3){         //  we can also return it with the 3 five instead of one 10 and one 5
                    five -= 3;              // decrease the denomination by 3 values of five 
                }
                else return false;          // return false if this is also not true
            }
        }
        return true;            // at the end of the for loop we will return true
    }
};