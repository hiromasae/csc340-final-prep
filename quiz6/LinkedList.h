#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

#include "Node.h"

class LinkedList {
  private:
    Node* head;
    Node* tail;
    int size;
  
  public:
    //(b) Include a default constructor for an empty list that initializes all attributes.
    LinkedList();
    // (c) Include an appropriate deconstructor if necessary. 
    ~LinkedList();

    void setHead(Node* newHead);
    void setTail(Node* newTail);

    Node* getHead() const;
    Node* getTail() const;
    int getSize() const;

    //(d) Include a method which, given a string, creates and adds a new node on the end of the list. This push back
    //    method would need to keep the LinkedList attributes updated when they change.
    void pushBack(const std::string& data);

    //(e) Overload the output operator << such that it can take a LinkedList object and output the whole list, one
    //    string per line.
    std::ostream& operator<<(std::ostream& os, const LinkedList& list);
};

#endif