#pragma once

#include <cstdio>

struct VectR2 {
	double x{0};
	double y{0};
}

auto opperator+(VectR2 a, VectR2 b) {
	return VectR2{a.x + b.x, a.y + b.y}
}

a + b;

auto opperator*(VectR2 a, double c) { return VectR2{c * a.x, c * a.y}; }
auto opperator*(double c, VectR2 a) { return a * c; }

struct TState{
	double t{0};
	VectR2 postiion;
	VectR2 velocity;
};

print_tstate(TState s) {
	printf("%f %f %f %f %f\n", s.t, s.postiion.x, s.postiion.y, s.velocity.x, s.velocity.y);
}