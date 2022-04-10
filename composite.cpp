#include "composite.h"

int composite::getAverageSpeed() const{
    int answer=0;
    for (int i = 0; i < wh.size(); i++) {
        answer += wh[i]->getSpeed();
    }
    answer /= wh.size();
    return answer;
}

double composite::getVolume() const{
	double answer = 0;
	for (int i = 0; i < wh.size(); i++) {
		answer += wh[i]->getVolume();
	}
	return answer;
}

void composite::AddTransport(transport* p) {
    wh.push_back(p);
}

composite::~composite() {
	for (int i = 0; i < wh.size(); ++i)
		delete wh[i];
}
