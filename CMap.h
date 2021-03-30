#ifndef MAP_H
#define MAP_H
#include "CString.h"
#include "string"
#include "cstring"
#include <iostream>
using namespace std;
//struct Node;
struct Node
{

    Node        *left;
    Node        *right;
    CString     key;
    CString     value;
};
class Map
{
private:

    Node *root;
public:
    Map();
    ~Map();
    void add_pair(CString &key, CString &str);
    Node *add_pair(CString &key, CString &str, Node *tree);
    void delete_all(Node *tree);
    bool search(CString &target);
    //Есть ли такой ключ
    bool find(CString &target, Node *tree);
    CString getValue(CString& key);
    Node *getAdress(CString &target, Node *tree);
    //Возвращает адрес родительского узла
    Node *getAdressParent(Node *child, Node *tree);
    //Если такой ключ уже есть- осуществить перезапись
    //bool add_pair(CString& key, CString& value)
    Node *delete_key(CString &target);
    Node *addNode(CString &key, CString &str, Node *tree);
    Node *search_replacing(Node *tree);

};
#endif // MAP_H
