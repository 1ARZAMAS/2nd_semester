#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Motherboard{
    string manufacturer;
    string socket;
    int price;
};

int main(){
    vector<Motherboard> motherboards = {
        {"MSI", "AM4", 13000},
        {"MSI", "AM5", 27000},
        {"Asrock", "AM4", 15000},
        {"Asrock", "AM5", 23000},
        {"ARDOR GAMING", "AM4", 22000},
        {"MSI", "AM5", 19000},
        {"ASUS", "AM5", 18000},
        {"Asrock", "AM5", 17000},
        {"GIGABYTE", "AM5", 19000},
        {"DEXP", "AM4", 21000}
    };
    vector<Motherboard> result;
    copy_if(motherboards.begin(), motherboards.end(), back_inserter(result),
        [](const Motherboard& mb){
            return (mb.manufacturer == "MSI" or mb.manufacturer == "Asrock") and mb.socket == "AM5" and mb.price <= 20000;
        });
    for (const auto& mb : result){
        cout << mb.manufacturer << " " << mb.socket << " " << mb.price << endl;
    }
}
