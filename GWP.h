#include <vector>
#include "GraphUtils.h"

using namespace std;

template<typename D>
class GWP {
	public:
		vector<Vertex<D>> Adjacency;


		GWP();
		void AddVertex(Vertex<D> V);
		void addEdge(/*Edge<D>* Edge,*/Vertex<D> Source, Vertex<D> Destination, int Weight);
		void removeVertex(Vertex<D> v);
		
};