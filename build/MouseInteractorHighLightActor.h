#pragma once
#include <vtkActor.h>
#include <vtkProperty.h>
#include <vtkInteractorStyleTrackballActor.h>
#include <vtkMinimalStandardRandomSequence.h>
#include <vtkNamedColors.h>
#include <vtkNew.h>
#include <vtkObjectFactory.h>
#include <vtkPolyDataMapper.h>
#include <vtkPropPicker.h>
#include <vtkProperty.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderer.h>
#include <vtkSphereSource.h>
#include <Shape.h>
namespace  {

	///<summary>
	///   <para>
	///       Class name: MouseInteractorHighLightActor
	///       Handle mouse interactions to select a particular actor
	///   </para>
	///</summary>
	class MouseInteractorHighLightActor : public vtkInteractorStyleTrackballActor
	{
	public:
		int* selectedActor;
		vector<Shape*>* shapes;
		static MouseInteractorHighLightActor* New();
		vtkTypeMacro(MouseInteractorHighLightActor,
			vtkInteractorStyleTrackballActor);

		MouseInteractorHighLightActor()
		{
			selectedActor = NULL;
			shapes = NULL;
			LastPickedActor = NULL;
			LastPickedProperty = vtkProperty::New();
		}
		
		virtual ~MouseInteractorHighLightActor()
		{
			LastPickedProperty->Delete();
		}

		virtual void OnLeftButtonDown() override
		{
			vtkNew<vtkNamedColors> colors;

			int* clickPos = this->GetInteractor()->GetEventPosition();
			vtkNew<vtkPropPicker> picker;
			picker->Pick(clickPos[0], clickPos[1], 0, GetDefaultRenderer());
			if (LastPickedActor)
			{
				LastPickedActor->GetProperty()->DeepCopy(LastPickedProperty);
			}
			LastPickedActor = picker->GetActor();
			if (LastPickedActor)
			{
				for (int i = 0; i < shapes->size(); i++) {
					if ((*shapes)[i]->actor == LastPickedActor) {
						*selectedActor = i;
						break;
					}
				}
				LastPickedProperty->DeepCopy(LastPickedActor->GetProperty());
				LastPickedActor->GetProperty()->SetColor(
					colors->GetColor3d("Gold").GetData());
				LastPickedActor->GetProperty()->SetDiffuse(1.0);
				LastPickedActor->GetProperty()->SetSpecular(0.0);
				LastPickedActor->GetProperty()->EdgeVisibilityOn();
			}
			vtkInteractorStyleTrackballActor::OnLeftButtonDown();
		}
	private:
		bool actorIsSelected = false;
		vtkActor* LastPickedActor;
		vtkProperty* LastPickedProperty ;
	};

	vtkStandardNewMacro(MouseInteractorHighLightActor);
} 