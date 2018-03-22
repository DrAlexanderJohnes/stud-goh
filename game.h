#ifndef _GAME_
#define _GAME_


#include<exception>




class BlackShape :public implication
{

	const char*BShape = { "BS" };
public:
	virtual void Draw() {};
	

};

class WhiteShape :public implication
{


	const char*WShape = { "WS" };
public:
	virtual void Draw() {};


};

class Goban:public implication
{
	
	int plate[9][9];
public:

	virtual void Draw();

	

};

class implication
{
	int x, y;
public:
	implication(int x, int y);

	virtual void Draw();
	virtual int GetPosition();
	virtual~implication();



};







#endif // !_GAME_

