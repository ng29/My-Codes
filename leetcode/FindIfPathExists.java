package com.leetcode;

import java.util.*;
import java.util.stream.Collectors;

public class FindIfPathExists {
    static class Solution {
        public boolean validPath(int n, int[][] edges, int start, int end) {
            HashMap<Integer, List<Integer>> graph = new HashMap<>();
            boolean[] visited = new boolean[n];
            Queue<Integer> queue = new LinkedList<>();
            queue.add(start);
            if (start == end) {
                return true;
            }
            for (int[] edge: edges) {
                if (graph.containsKey(edge[0])) {
                    graph.get(edge[0]).add(edge[1]);
                } else {
                    graph.put(edge[0], new ArrayList<>(Arrays.asList(edge[1])));
                }
                if (graph.containsKey(edge[1])) {
                    graph.get(edge[1]).add(edge[0]);
                } else {
                    graph.put(edge[1], new ArrayList<>(Arrays.asList(edge[0])));
                }
            }
            while (!queue.isEmpty()) {
                int node = queue.remove();
                visited[node] = true;
                if (node == end) {
                    return true;
                }
                queue.addAll(graph.get(node).stream().filter(v -> !visited[v]).collect(Collectors.toList()));
            }
            return false;
        }
    }

    public static void main(String[] args) {
        int n = 6, start = 0, end = 5;
        int[][] edges = {{0,1},{0,2},{3,5},{5,4},{4,3}};
        System.out.println(new Solution().validPath(n, edges, start, end));
    }
}
