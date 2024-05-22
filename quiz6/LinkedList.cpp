#include <iostream>

#include "LinkedList.h"

LinkedList::LinkedList() {
  this->head = nullptr;
  this->tail = nullptr;
  this->size = 0;
}

LinkedList::~LinkedList() {
  Node* current = head;
  while (current != nullptr) {
    Node* next = current->getNext();
    delete current;
    current = next;
  }
}

void LinkedList::setHead(Node* newHead) {
 this->head = newHead;  
}

void LinkedList::setTail(Node* newTail) {
 this->tail = newTail;  
}

Node* LinkedList::getHead() const {
  return this->head;
}

Node* LinkedList::getTail() const {
  return this->tail;
}

int LinkedList::getSize() const {
  return this->size;
}

void LinkedList::pushBack(const std::string& data) {
  Node* newNode = Node(data);
  if (tail == nullptr) {
    head = tail = newNode;
  }
  else {
    newNode->setPrev(tail);
    tail->setNext(newNode);
    tail = newNode;
  }
  size++;
}

std::ostream& operator<<(std::ostream& os, const LinkedList& list) {
  Node* current = list.head;
  while (current != nullptr) {
    os << current->getData() << std::endl;
    current = current->getNext();
  }
  return os;
}