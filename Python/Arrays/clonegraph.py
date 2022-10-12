class Solution:
    def cloneGraph(self, node: 'Node') -> 'Node':
        if not node:
            return node
        visited = []
        graph = {}
        q = [node]
        while q:
            n = q.pop(0)
            if(n not in visited):
                visited.append(n)
                if n not in graph:
                    graph[n] = Node(n.val)
                for neighbor in n.neighbors:
                    if(neighbor not in graph):
                        graph[neighbor] = Node(neighbor.val)
                    graph[n].neighbors.append(graph[neighbor])
                    q.append(neighbor)
        return graph[node]
