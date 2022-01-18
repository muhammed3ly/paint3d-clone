#pragma once

#include <vtkActor.h>
#include <vtkSmartPointer.h>
#include <map>
#include <string>
using namespace std;
class Shape
{
public:
	vtkSmartPointer<vtkActor> actor;
	map<string, double*> valuesNeeded;
	Shape();
};

