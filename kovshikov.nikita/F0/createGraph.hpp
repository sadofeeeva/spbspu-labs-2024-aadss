#ifndef CREATEGRAPH_HPP
#define CREATEGRAPH_HP
#include "orientedGraph.hpp"
#include "workingGraph.hpp"

#include "BinarySearchTree.hpp"

namespace kovshikov
{
  void createGraph(Tree< std::string, Graph >& graphsList, std::istream& is);
  void createLonely(Tree< std::string, Graph >& graphsList, std::istream& is);
  void deleteGraph(Tree< std::string, Graph >& graphsList, std::istream& is);
  void workWith(Tree< std::string, Graph >& graphsList, std::istream& is);

  void outputGraphs(const Tree< std::string, Graph >& graphsList, std::ostream& out);
  void outputVertexes(const Tree< std::string, Graph >& graphsList, std::ostream& out);
}

#endif
