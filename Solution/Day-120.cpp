//
// Created by Amit Kumar on 12/07/23.
//

#include "iostream"
#include "string"

using namespace std;

enum State {
    NotInitialized, Odd, Even
};

class ModifiedSingleton {

    string instanceName;

    ModifiedSingleton() = default;

    explicit ModifiedSingleton(string name) : instanceName(std::move(name)) {}

public:
    ModifiedSingleton(ModifiedSingleton &ms) = delete;

    static ModifiedSingleton &getInstance() {
        static ModifiedSingleton instanceOne;
        static ModifiedSingleton instanceTwo;

        static State currentState = State::NotInitialized;

        if (currentState == State::NotInitialized) {
            currentState = State::Odd;
            instanceOne = ModifiedSingleton("First Instance");
            instanceTwo = ModifiedSingleton("Second Instance");
        }

        if (currentState == State::Odd) {
            currentState = State::Even;
            return instanceTwo;
        } else {
            currentState = State::Odd;
            return instanceOne;
        }
    }

    friend ostream &operator<<(ostream &out, const ModifiedSingleton &ms) {
        out << ms.instanceName;
        return out;
    }

};

int main() {
    for (int i = 1; i < 10; ++i) {
        cout << ((i&1) ? "Odd Call: " : "Even Call: ");
        cout << ModifiedSingleton::getInstance() << endl;
    }
    return 0;
}