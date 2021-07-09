#include <iostream>
#include <map>
#include <vector>
using namespace std;

class DataBase
{
    private:
        struct EmployeeID
        {
            public:
                string Name;
                string Role;
                EmployeeID(string a = "NONE",string b= "NONE") : Name(a),Role(b) {}
        };
        map<int,EmployeeID> _DATA;
        vector<int> _INDEX;
    public:
        DataBase(){}
        void insert(string name,string role)
        {
            int x = _DATA.size() * 243 + 1000;
            _DATA[x] = EmployeeID(name,role);
            _INDEX.push_back(x);
        }
        void show()
        {
            for(int i :_INDEX)
            {
                cout << _DATA[i].Role << " " << _DATA[i].Name << endl;
            }
        }


};





int main()
{
    DataBase t;
    t.insert("Embee","MCDONALDS");
    t.insert("Mcdee","BurgerKing");
    t.insert("Rand","Chipotle");
    t.insert("HELLO","Chipotfdle");
    t.show();
    
    
}