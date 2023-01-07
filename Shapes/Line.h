#pragma once
#include "Shape.h"
class Line : public shape
{
private:
	Point End1;
	Point End2;
public:
	Line(Point, Point, GfxInfo shapeGfxInfo);
	virtual ~Line();

	virtual void Draw(GUI* pUI) const;
	virtual void Save(ofstream &outfile);	//Save the shape parameters to the file
	virtual shape* clone();	//select/unselect the shape
	virtual bool isInside(int x, int y) const;
	virtual ShapePoints getPoints(); //first elem is p1 sec is p2
	//virtual void Load(ifstream &infile) = 0;	//Load the shape parameters to the file
	virtual void MoveShape(Point pMove) override;
	virtual void scramble(GUI* pUI) override;
	virtual Point HideShape(Point dxdy) override;
	virtual void resizeSH(double n);
	virtual void rotateSH();
	virtual void Zoom(double) override;

};

