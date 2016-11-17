#pragma once

#include "Avion.h"

class Joueur : public Avion{

public:
	Joueur(osg::Vec3f pos, osg::Vec3f dir, int num);
	~Joueur();

	void avancer(int cube_size,&vector<avion*> avions, int i);
	virtual void tourner(osg::Vec3f angle);

};
