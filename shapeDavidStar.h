#pragma once
#include "shapeTriangle.h"
class shapeDavidStar :public shapeTriangle
{
public:
	DECLARE_SERIAL(shapeDavidStar)
	void draw(CDC& other);
	BOOL InArea(int x, int y) const ;

private:
	CPoint davidBottomPoint1;
	CPoint davidBottomPoint2;
	CPoint davidHeadPoint;
};

