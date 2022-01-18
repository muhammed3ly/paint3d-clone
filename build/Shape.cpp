#include "Shape.h"

Shape::Shape() : actor(vtkSmartPointer<vtkActor>::New())
{
}

Shape::~Shape() {
	for (auto &value : valuesNeeded) {
		delete value.second;
	}
}