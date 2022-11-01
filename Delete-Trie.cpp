//https://practice.geeksforgeeks.org/problems/trie-delete/1
class Solution{
  public:
  void deleteKey(trie_node_t *root, char key[])
  {
    //Code here
    trie_node_t *node=root;
    for(int i=0;i<strlen(key);i++)
    {
        node=node->children[key[i]-'a'];
    }
    node->value=0;
    return;
  }
};