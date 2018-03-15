#ifndef _GAME_
#define _GAME_

class Shape
{
	int x, y;
public:
	virtual int GetPosition();
	virtual void Draw();
	virtual int Step();



};


class BlackShape :public Shape
{

};

class WhiteShape :public Shape
{

};

class Goban
{

	
	int plate[9][9];
public:
	void DrawGoban();
	void CleanGoban();
	void ShowShapes();


	
};


#endif // !_GAME_

