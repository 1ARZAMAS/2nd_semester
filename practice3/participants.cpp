#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct Participant{
    string name;
    int age;
};

int main(){
    system("chcp 65001");
    vector<Participant> participants = {
        {"Alice", 15},
        {"Bob", 16,},
        {"Ben", 23},
        {"Charlie", 18},
        {"Deril", 20},
        {"Ethan", 33},
        {"Gamlet", 15},
        {"Henry", 19},
        {"Jhin", 27}
    };
    participants.erase(remove_if(participants.begin(), participants.end(), 
        [](const Participant& p){
            return p.age<16;
        }));

    if (!participants.empty()) {
        auto youngest = *min_element(participants.begin(), participants.end(), 
        [](const Participant& a, const Participant& b) 
        { return a.age < b.age; });

        auto oldest = *max_element(participants.begin(), participants.end(), 
        [](const Participant& a, const Participant& b) 
        { return a.age < b.age; });

        cout << "Самый молодой игрок: " << youngest.name << ". Его возраст: " << youngest.age << endl;
        cout << "Самый старший игрок: " << oldest.name << ". Его возраст: " << oldest.age << endl;
    } else {
        cout << "После фильтрации не осталось ни одного участника" << endl;
    }

    return 0;
}
