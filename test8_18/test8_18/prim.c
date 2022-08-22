//#include<stdio.h>
//#include<stdlib.h>
////图顶点之间不通，那么邻接矩阵的值为MAX
////如果顶点就是本身那么值就为0
//#define MAX 32767
//
//typedef struct Graph
//{
//  char* vexs;//顶点
//  int** arcs;//边
//  int vexNum;//节点数量
//  int arcsNum;//边的数量
//}Graph;
//
//typedef struct Edge
//{
//    char vex;
//    int weight;
//}Edge;
//
//Edge* initEdge(Graph* G, int index)
//{
//    Edge* edge = (Edge*)malloc(sizeof(Edge)*G->vexNum);
//    for (int i = 0; i < G->vexNum; i++)
//    {
//        edge[i].vex = G->vexs[index];
//        edge[i].weight = G->arcs[index][i];
//    }
//    return edge;
//}
//int getMineEdge(Edge* edge, Graph* G)
//{
//    int index;
//    int min = MAX;
//    for (int i = 0; i < G->vexNum; i++)
//    {
//        if (edge[i].weight != 0 && min > edge[i].weight)
//        {
//            min = edge[i].weight;
//            index = i;
//        }
//    }
//    return index;
//}
//void prim(Graph* G, int index)
//{
//    int min;
//    Edge* edge = initEdge(G,index);
//    for (int i = 0; i < G->vexNum-1; i++)
//    {
//        min = getMineEdge(edge, G);
//        printf("v%c-->v%c,weight=%d\n", edge[min].vex, G->vexs[min], edge[min].weight);
//        edge[min].weight = 0;
//        for (int j = 0; j < G->vexNum; j++)
//        {
//            if (G->arcs[min][j] < edge[j].weight)
//            {
//                edge[j].weight = G->arcs[min][j];
//                edge[j].vex = G->vexs[min];
//            }
//        }
//    }
//}
//Graph* initGraph(int vexNum)
//{
//  Graph* G = (Graph*)malloc(sizeof(Graph));
//  G->vexs = (char*)malloc(sizeof(char) * vexNum);
//  G->arcs = (int**)malloc(sizeof(int*) * vexNum);
//  for (int i = 0; i < vexNum; i++)
//  {
//    G->arcs[i] = (int*)malloc(sizeof(int) * vexNum);
//  }
//  G->vexNum = vexNum;
//  G->arcsNum = 0;
//  return G;
//}
//
//void creatGraph(Graph* G, char* vexs, int* arcs)
//{
//  for (int i = 0; i < G->vexNum; i++)
//  {
//    G->vexs[i] = vexs[i];
//    for (int j = 0; j < G->vexNum; j++)
//    {
//      G->arcs[i][j] = *(arcs + i * G->vexNum + j);
//      if (G->arcs[i][j] != 0&&G->arcs[i][j]!=MAX)
//        G->arcsNum++;
//    }
//  }
//  G->arcsNum /= 2;
//}
//
//void DFS(Graph* G, int* visited, int index)
//{
//  printf("%c\t", G->vexs[index]);
//  visited[index] = 1;
//  for (int i = 0; i < G->vexNum; i++)
//  {
//    if (G->arcs[index][i] >0&&G->arcs[index][i]!=MAX && !visited[i])
//    {
//      DFS(G, visited, i);
//    }
//  }
//}
//
//int main()
//{
//  Graph* G = initGraph(6);
//  int* visited = (int*)malloc(sizeof(int) * G->vexNum);
//  for (int i = 0; i < G->vexNum; i++)
//  {
//    visited[i] = 0;
//  }
//  int arcs[6][6] = {
//    0,6,1,5,MAX,MAX,
//    6,0,5,MAX,3,MAX,
//    1,5,0,5,6,4,
//    5,MAX,5,0,MAX,2,
//    MAX,3,6,MAX,0,6,
//    MAX,MAX,4,2,6,0
//  };
//  creatGraph(G, "123456", (int*)arcs);
//  DFS(G, visited, 0);
//  printf("\n");
//  prim(G, 0);
//  return 0;
//}