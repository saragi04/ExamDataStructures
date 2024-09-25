#include <iostream>
#include <string>
#include "List.hh"

using namespace std;

template <typename T>

class AdjacencyList{
    private:
        class Node{
            public: 
                string city; 
                List<string> connections;
                Node* next; 

                Node(string& cityName) : city(cityName), next(nullptr) {}
        };

        Node* head;

        Node* findCity(const string& city) {
            Node* node = head;
            while (node) {
                if (node->city == city) {
                    return node;
                }
            node = node->next;
            }
        return nullptr;
        }

    public:
        AdjacencyList() : head(nullptr) {}

        void addCity(string& city) {
            if(!findCity(city)) {
                Node *newNode = new Node(city);
                newNode -> next = head;
                head = newNode
            }
        }

        void removeCity(string& city) {
            Node *node = head;
            Node *prev = nullptr;

        }

};