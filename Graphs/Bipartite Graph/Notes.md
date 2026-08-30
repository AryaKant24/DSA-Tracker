# Notes

## Approach
1. Create a color array of size equal to the number of nodes and initialize it to -1.
2. DFS: 
        1. Mark the node as per color i.e. {1->red, 0->blue} i.e. x variable
        2. Iterate throught the neighbors of the node
        3. If neighbor is univisited i.e. -1 then:
            DFS(neighbor with !x i.e. 'Blue') if returns false return false
        4. If neighbor's color is same as node's color return false
        5. Finally if all these fail return true;    
## Mistakes

## Time Complexity
O(V + 2E)

## Space Complexity
O(number of nodes)

## Edge Cases