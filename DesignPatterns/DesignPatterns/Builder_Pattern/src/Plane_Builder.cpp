#include <iostream>

//Product class
class Plane
{
	std::string _plane;
	std::string _body;
	std::string _engine;
public:
	Plane(std::string plane_type)
		:_plane(plane_type)
	{}

	void setEngine(std::string type) { _engine = type; }
	void setBody(std::string body) { _body = body; }
	std::string getEngine() { return _engine; }
	std::string getbody() { return _body; }

	void show_Plane()
	{
		std::cout << "Plane type: " << _plane << "\n"
					<< "Body type: " << _body << "\n"
					<< "Engine type: " << _engine << "\n";
	}
};

//Abstract Builder class
class PlaneBuilder
{
protected:
	Plane* _plane;
public:
	virtual void getPartsDone() = 0;
	virtual void buildBody() = 0;
	virtual void buildEngine() = 0;

	Plane* getPlane() { return _plane; }
};

class JetBuilder : public PlaneBuilder
{
public:
	void getPartsDone() override { _plane = new Plane("Jet_Plane"); }
	void buildBody() override { _plane->setBody("Jet Body"); }
	void buildEngine() override { _plane->setEngine("Jet Engine"); }

};

class FighterBuilder : public PlaneBuilder
{
public:
	void getPartsDone() override { _plane = new Plane("Fighter_Plane"); }
	void buildBody() override { _plane->setBody("Fighter Body"); }
	void buildEngine() override { _plane->setEngine("Fighter Engine"); }

};

class Director
{
public:
	Plane* createPlane(PlaneBuilder* builder)
	{
		builder->getPartsDone();
		builder->buildBody();
		builder->buildEngine();
		return builder->getPlane();
	}

};

int main()
{
	Director* dir = nullptr;
	JetBuilder jb ;
	FighterBuilder fb;

	Plane* jet_plane = dir->createPlane(&jb);
	Plane* fighter_plane = dir->createPlane(&fb);

	jet_plane->show_Plane();
	fighter_plane->show_Plane();

	delete jet_plane;
	delete fighter_plane;
}
