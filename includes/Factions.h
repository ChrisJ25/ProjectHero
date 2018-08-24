#include <string>


class Faction {
    public:
    Faction(string Name);
    ~Faction();
    int Affinity;
    
    private:
    enum Tech_Level { L1, L2, L3, L4 }; /*{Regular Weapons, Laser Weapons, Power Armor, Plasma Weapons}*/
    string FactionName;
    

};
