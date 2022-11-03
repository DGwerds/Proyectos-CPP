// C++ program for implementation of Ford Fulkerson algorithm
#include <iostream>
#include <limits.h>
#include <string.h>
#include <queue>
using namespace std;

// N�mero de v�rtices en el gr�fico dado
#define V 4

/* Devuelve true si hay un camino desde la fuente de 's' bajando a 't' en
gr�fico residual. Tambi�n se llena de los parent [] para almacenar el camino*/

bool bfs(int rGraph[V][V], int s, int t, int parent[]){
	// Crear una matriz visitado y marcar todos los v�rtices como no visitados
	bool visited[V];
	memset(visited, 0, sizeof(visited));
    
	// Creaci�n de una cola, v�rtice fuente encola y marcar v�rtices fuente
	// como visitado
	queue <int> q;
	q.push(s);
	visited[s] = true;
	parent[s] = -1;

	// Standard BFS Loop
    while (!q.empty()){
		int u = q.front();
	    q.pop(); 
	    for (int v=0; v<V; v++){
			if (visited[v]==false && rGraph[u][v] > 0){
			    q.push(v);
			    parent[v] = u;
			    visited[v] = true;
		    }
	    }
	}
	//Si llegamos a caer en BFS a partir de la fuente, y luego volver
	// true, else false
    return (visited[t] == true);
}

// Retorna el maximo flujo de  s a t en el grafico dado
int fordFulkerson(int graph[V][V], int s, int t){
    int u, v;
	// Crear un gr�fico residual y llenar la gr�fica residual con
	//capacidades que figuran en el gr�fico original como las capacidades residuales
	//En el gr�fico residual
    int rGraph[V][V]; // Gr�fica residual donde rGraph [i] [j]
	//indica la capacidad residual de borde de i a j (si hay un borde.
	//Si rGraph [i] [j] es 0, entonces todav�a no hay)
    for (u = 0; u < V; u++)
		for (v = 0; v < V; v++)
			rGraph[u][v] = graph[u][v];
       int parent[V]; // Esta matriz es llenada por BFS y ruta almacenada
       int max_flow = 0; // No hay flujo inicialmente

	// Aumentar el flujo mientras que hay camino desde la fuente al sumidero
    	while (bfs(rGraph, s, t, parent)){
	    	// Encuentra capacidad residual m�nima de los bordes a lo largo del camino
	    	// llenado por BFS. O podemos decir encontrar el flujo m�ximo
	    	// a trav�s de la ruta encontrada.
	    	int path_flow = INT_MAX;
	    	for (v=t; v!=s; v=parent[v]){
		    	u = parent[v];
		    	path_flow = min(path_flow, rGraph[u][v]);
	    	}
// Actualizar las capacidades residuales de las aristas y las aristas a lo largo de la trayectoria inversa
	    	for (v=t; v != s; v=parent[v]){
		    	u = parent[v];
		    	rGraph[u][v] -= path_flow;
		    	rGraph[v][u] += path_flow;
	    	}
		// Add path flow to overall flow
	    max_flow += path_flow;
	}
	// Devuelve el flujo total
    return max_flow;
}

// Programa  Conductor para probar funciones anteriores
int main(){
	// Vamos a crear un gr�fico que se muestra en el ejemplo anterior
	int graph[V][V] = {	{0,	4,	2,	0},
						{0,	0,	3,	1},
						{0,	0,	0,	6},
						{0,	0,	0,	0}};
	
	cout << "El flujo m�ximo posible es: " << fordFulkerson(graph, 0, V-1)<<"\n";
    return 0;
}
