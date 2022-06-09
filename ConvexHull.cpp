#include <vector>
#include <cstdlib>
#include "ConvexHull.h"

std::vector<std::vector<int>> get_convex_hull(std::vector<int>& x, std::vector<int>& y) {

	std::vector<std::vector<int>> segments;

	for (size_t i = 0; i < x.size(); i++)
	{
		for (size_t j = i + 1; j < x.size(); j++)
		{
			int a = y[j] - y[i];
			int b = x[i] - x[j];
			int c = x[i] * y[j] - y[i] * x[j];


			int current_sign = 0;
			bool sign_changed = false;

			for (size_t k = 0; k < x.size(); k++)
			{
				if (k != i && k != j) {

					int sign = (a * x[k] + b * y[k] - c < 0) ? -1 : 1;

					if (current_sign == 0) {
						current_sign = sign;
					}
					else if (current_sign + sign == 0) {
						sign_changed = true;
						break;
					}

				}
			}

			if (!sign_changed) {
				segments.push_back({ x[i],y[i],x[j],y[j] });
			}
		}
	}

	return segments;

}


int get_side(int x1, int y1, int x2, int y2, int x, int y) {

	int a = y2 - y1;
	int b = x1 - x2;
	int c = x1 * y2 - y1* x2;

	return (a * x + b * y - c < 0) ? -1 : 1;
}

int squared_dist(int x1, int y1, int x2, int y2) {
	return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int line_dist(int x1, int y1, int x2, int y2, int x, int y) {
	// Line segment given by (x1,y1) (x2,y2)
	// Point given by (x,y)

	return std::abs( (y - y1) * (x2 - x1) - (y2 - y1) * (x - x1));
}

std::vector<std::vector<int>> get_convex_hull_DC(std::vector<int>& x, std::vector<int>& y) {

	std::vector<std::vector<int>> hull({});

	hull.push_back({ x[0],y[0] }); 
	hull.push_back({ x[x.size() - 1], y[x.size() - 1] });

	x.pop_back();
	x.erase(x.begin());

	std::vector<int> x1({});
	std::vector<int> y1({});
	std::vector<int> x2({});
	std::vector<int> y2({});


	//find_hull(x1, y1, x[0], y[0], x[x.size() - 1], y[x.size() - 1], hull);
	//find_hull(x2, y2, x[0], y[0], x[x.size() - 1], y[x.size() - 1], hull);

	return hull;

}