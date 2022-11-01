//https://practice.geeksforgeeks.org/problems/trie-insert-and-search0651/1

//Function to insert string into TRIE.
void insert(struct TrieNode *root, string key)
{
    // code here
    TrieNode* node = root;
    for(int i=0;i<key.size();i++)
    {
        if(!(node->children[key[i]-'a']!=NULL))
        {
           node->children[key[i]-'a']=new TrieNode();
        }
        node=node->children[key[i]-'a']; //moves to the reference trie created
    }
    
    node->isLeaf=true; //marks the end of the word by marking the flag true
}

//Function to use TRIE data structure and search the given string.
bool search(struct TrieNode *root, string key) 
{
    // code here
    TrieNode *node=root;
    for(int i=0;i<key.size();i++)
    {
         if(!(node->children[key[i]-'a']!=NULL))
        {
            return false;
        }
        else
        {
            node=node->children[key[i]-'a'];
        }
    }
    if(node->isLeaf==true)
    return true;
}