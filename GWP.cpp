#include "GWP.h"

template<typename D>
GWP<D>::GWP() {

}

template<typename D>
void GWP<D>::AddVertex(Vertex<D> v) {
	Adjacency.push_back(v);
}

/*template<typename D>
void GWP<D>::addEdge(Vertex<D>* Source, Vertex<D>* Destination, int Weight) {
	for (int i = 0; i < Adjacency.size(); i++)
	{
		if (Adjacency[i] == Source) {
			Adjacency[i]->Edge.insert({ Destination,Weight });
		}
	}
}*/

template<typename D>
void GWP<D>::addEdge(/*Edge<D>* Edge,*/ Vertex<D> Source, Vertex<D> Destination, int Weight) {
	Edge<D> NewEdge = Edge<D>();
	NewEdge.dest = Destination;
	NewEdge.Weight = Weight;
	for (int i = 0; i < Adjacency.size(); i++)
	{
		if (Adjacency[i].id == Source.id) {
			Adjacency[i].Edges.push_back(NewEdge);
		}
	}
}

template<typename D>
void GWP<D>::removeVertex(Vertex<D> v) {
	for (int i = 0; i < Adjacency.size(); i++)
	{
		if (Adjacency[i].id == v.id) {
			Adjacency.erase(Adjacency.begin() + i);
		}
	}
}

