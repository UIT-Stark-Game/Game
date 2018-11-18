#pragma once
#ifndef QuadTree_H_
#define QuadTree_H_
#include<map>
#include"Node.h"
#include"TXT.h"

#include"Global.h"
#include"Node.h"
#include"VirtualObject.h"
#include"Helit.h"
#include"NotorBanger.h"
#include"HeadGunnerCustomer.h"

using namespace std;

class QuadTree
{
private:
	static QuadTree* instance;
	map<int, Node*> listNode;
	map<int, Object*> listObject;
public:
	QuadTree();
	~QuadTree();

	static QuadTree* Instance();
	void LoadListObject();
	void LoadListNode();
	void BuildTree(); //linking node

	Object* CreateObject(int id, int x, int y, int w, int h, int d);
	int CountWords(string str);
};


#endif // !QuadTree_H_
