#pragma once
#include <vtkActor.h>
#include <vtkBoxWidget.h>
#include <vtkCamera.h>
#include <vtkCommand.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkNamedColors.h>
#include <vtkNew.h>
#include <vtkPolyDataMapper.h>
#include <vtkProperty.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderer.h>
#include <vtkTransform.h>
#include <vtkCallbackCommand.h>
namespace {
	class vtkMyCallback : public vtkCommand
	{
	public:
		static vtkMyCallback* New()
		{
			return new vtkMyCallback;
		}
		void Execute(vtkObject* caller, unsigned long, void*) override
		{
			try {
				vtkNew<vtkTransform> t;
				auto widget = reinterpret_cast<vtkBoxWidget*>(caller);
				widget->GetTransform(t);
				widget->GetProp3D()->SetUserTransform(t);
				t->Delete();
			}
			catch (...) {

			}
		}
	};
}

