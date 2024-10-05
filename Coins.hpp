#include <set>
#include <string>
#include <regex>

class Coins {

    private:
        std::set<int> coins;

    public:
        void setCoinsSet(std::set<int> coinsSet);
        std::string getResp(int val);
        Coins();
        ~Coins();
};
