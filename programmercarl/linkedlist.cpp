#include<iostream>

using namespace std;

struct Node{
    int val;
    Node* next;
    Node* prev;
};

class MyLinkedList {
public:
    MyLinkedList() {
        // 前面有一个空节点
        head = new(Node);
        tail = head;
        len = 0;
        head->next = nullptr;
    }
    
    int get(int index) {  // 下表从0开始
        Node* x = head->next;
        if(index >= len)
            return -1;
        while(index--){
            x = x->next;
        }
        return x->val;
    }
    
    void addAtHead(int val) {
        Node* x = head->next;
        head->next = new(Node);
        head->next->val = val;
        head->next->prev = head;
        head->next->next = x;
        // 链表为空情况
        if(head == tail)
            tail = head->next;
        else
            x->prev = head->next;
        len++;
    }
    
    void addAtTail(int val) {
        Node* x = tail;
        tail = new(Node);
        tail->val = val;
        tail->next = x->next;
        tail->prev = x;
        x->next = tail;
        len++;
    }
    
    void addAtIndex(int index, int val) {
        Node* x = head->next;
        // 处理加载尾部的数据
        if(index == len)
            addAtTail(val);
        else if(index < len){
            while(index--)
                x = x->next;
            x->prev->next = new(Node);
            x->prev->next->val = val;
            x->prev->next->prev = x->prev;
            x->prev->next->next = x;
            x->prev = x->prev->next;
            len++;
        }
    }
    
    void deleteAtIndex(int index) {
        Node* x = head->next;
        if(index < len){
            while(index--)
                x = x->next;
            x->prev->next = x->next;
            // 判断删除的是否是尾节点
            if(x->next == nullptr)
                tail = x->prev;
            else
                x->next->prev = x->prev;
            delete(x);
            len--;
        }
    }
private:
    int len;
    Node* head;
    Node* tail;
};

int main(){
  MyLinkedList m;
  m.addAtHead(7);
  m.addAtHead(2);
  m.addAtHead(1);
  m.addAtIndex(3, 0);
  m.deleteAtIndex(2);
  m.addAtHead(6);
  m.addAtTail(4);
  m.get(4);
  m.addAtHead(4);
  m.addAtIndex(5, 0);
  m.addAtHead(6);
  return 0;
}