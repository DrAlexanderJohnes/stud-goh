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
	const size_t s = 9;
	int plate[s][s];
public:
	void DrawGoban();
	void CleanGoban();
	void ShowShapes();


	
};


#endif // !_GAME_

