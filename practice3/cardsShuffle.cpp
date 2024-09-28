#include <iostream>
#include <random>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){
    system("chcp 65001");
    vector<string> cards = {
        {"Ace of spades"},{"Ace of clubs"},{"Ace of hearts"},{"Ace of diamonds"},
        {"King  of spades"},{"King  of clubs"},{"King  of hearts"},{"King  of diamonds"},
        {"Queen of spades"},{"Queen of clubs"},{"Queen of hearts"},{"Queen of diamonds"},
        {"Jack of spades"},{"Jack of clubs"},{"Jack of hearts"},{"Jack of diamonds"},
        {"Ten of spades"},{"Ten of clubs"},{"Ten of hearts"},{"Ten of diamonds"},
        {"Nine of spades"},{"Nine of clubs"},{"Nine of hearts"},{"Nine of diamonds"},
        {"Eight of spades"},{"Eight of clubs"},{"Eight of hearts"},{"Eight of diamonds"},
        {"Seven of spades"},{"Seven of clubs"},{"Seven of hearts"},{"Seven of diamonds"},
        {"Six of spades"},{"Six of clubs"},{"Six of hearts"},{"Six of diamonds"},
    };
    
    random_device rd;
    mt19937 g(rd());
    shuffle(cards.begin(), cards.end(), g);

    vector<string> AliceHands;
    copy(cards.begin(), cards.begin() + 6, back_inserter(AliceHands));
    cout << "В руках Алисы находятся следующие карты:"<< endl;
    bool isLast = false;
    for(int i = 0; i < AliceHands.size(); i++) {
        if (i == AliceHands.size() - 1) {
            isLast = true;
        }
        cout << AliceHands[i];
        if (!isLast) {
            cout << ", ";
        }
    }
    cout << endl;

    vector<string> BobHands;
    copy(cards.begin() + 6, cards.begin() + 12, back_inserter(BobHands));
    cout << "\nВ руках Боба находятся следующие карты:"<< endl;
    isLast = false;
    for(int i = 0; i < BobHands.size(); i++) {
        if (i == BobHands.size() - 1) {
            isLast = true;
        }
        cout << BobHands[i];
        if (!isLast) {
            cout << ", ";
        }
    }
    cout << endl;

}
