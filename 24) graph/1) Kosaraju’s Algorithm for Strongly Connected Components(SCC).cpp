steps:                                                                  TC
1) sort all nodes in order of finishing time (Topological sort)     => O(N+E)
2) Transpose the graph                                              => O(N+E)
3) DFS according to finishing time                                  => O(N+E)
