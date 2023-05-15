#include<vector>

#include "./container.h"

#include <vtkSmartPointer.h>
#include <vtkImageData.h>

class Sim {
private:
	sf::RenderWindow win;
	Container container;
	vtkSmartPointer<vtkImageData> vti;
	Options options;
	void Setup();
	long int ItNumber = 0;
public:
	static const int numParticles;
	Sim();
	~Sim();
	void Run();
};
