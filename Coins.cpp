#include "Coins.hpp"

Coins::Coins(){
}


Coins::~Coins(){

}

void Coins::setCoinsSet(std::set<int> coinsStr){
    coins = coinsStr;

}   

std::string Coins::getResp(int val){

    std::string resp = "";
    auto it = coins.lower_bound(val);
    int count;


    while ((it != coins.begin()) || (val > 0)) {

        count = val / *it;
        
        if(count > 0)
            resp += std::to_string(*it) + ": " + std::to_string(count) + "\n";


        val -= count * *it;
        --it;
    }

    return resp;
}