#pragma once

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace sdlexample {

	class Swarm
	{
	public:
		const static int NPARTICLES = 5000;
	public:
		Swarm();
		virtual ~Swarm();
		void update(int);
		const Particle * const getParticles() { return m_pParticles; };

	private:
		Particle * m_pParticles;
		int lastTime;
	};

}

#endif /* SWARM_H_ */