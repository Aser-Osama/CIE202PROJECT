#pragma once
#include "shape.h"
#include "math.h"
#include <vector>
#include <algorithm>
class iPoly : public shape
{
private:
	vector<int> pVectX, pVectY;
public:
	virtual void Move(Point pm);
	iPoly(vector<int>, vector<int>, GfxInfo shapeGfxInfo);
	virtual ~iPoly();
	virtual void Draw(GUI* pUI) const;
	virtual void Save(ofstream& outfile);	//Save all shapes to a file
	virtual bool isInside(int x, int y) const;
	//virtual void Load(ifstream& inputfile);	//Load all shapes from a file
};
