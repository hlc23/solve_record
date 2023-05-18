/**
 * @param {number} n
 * @param {number[][]} edges
 * @return {number[]}
 */
var findSmallestSetOfVertices = function(n, edges) {
    let has_parent = [];
    for (let i=0; i<n; i++) has_parent.push(false);
    console.log(has_parent);
    for (let i=0; i<edges.length; i++){
        let link = edges[i];
        console.log(link);
        has_parent[link[1]] = true;
    }
    let ans = [];
    for (let i=0; i<n; i++) if (!has_parent[i]) ans.push(i);
    return ans;
};