#pragma once

#include <vtkActor.h>
#include <vtkSmartPointer.h>
#include <unordered_map>
using namespace std;
class Shape
{
public:
	vtkSmartPointer<vtkActor> actor;
	unordered_map<string, double*> valuesNeeded;
	Shape();
	~Shape();
};

