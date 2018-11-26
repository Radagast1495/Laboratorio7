#pragma once
#include <vector>
#include <unordered_map> 
using namespace std;

template<typename D>
class Vertex;


template<typename D>
class Edge{
	public:
		Vertex<D> *dest;
		int Weight;
};


template<typename D>
class Vertex {
	public:
		D id;
		vector<Edge<D>> Edges;
		//unordered_map<Vertex<D>*, int>  Edges;
		
};
