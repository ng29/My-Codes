package com.leetcode;

import java.util.ArrayList;
import java.util.List;

public class AllPathsFromSourceToTarget {
    static class Solution {
        public List<List<Integer>> allPathsSourceTarget(int[][] graph) {
            List<List<Integer>> res = new ArrayList<>();
            List<Integer> path = new ArrayList<>();
            path.add(0);
            traverse(res, path, 0, graph);
            return res;
        }

        private void traverse(List<List<Integer>> res, List<Integer> path, int node, int[][] graph) {
            if (node == graph.length - 1) {
                res.add(new ArrayList<>(path));
                return;
            }
            for (int curNode : graph[node]) {
                path.add(curNode);
                traverse(res, path, curNode, graph);
                path.remove(path.size() - 1);
            }
        }
    }

    public static void main(String[] args) {
        int[][] graph = {{4,3,1},{3,2,4},{3},{4},{}};
        System.out.println(new Solution().allPathsSourceTarget(graph));
    }
}
