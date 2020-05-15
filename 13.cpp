class Trie {
  private:
    map<char, Trie*> next = {};
    bool isword = false;
public:
    /** Initialize your data structure here. */
    Trie() {}

     /** Inserts a word into the trie. */
    void insert(string word)
    {
        Trie* root = this;
        for (char ch : word) {
            if (!root->next.count(ch)) { root->next[ch] = new Trie(); }
            root = root->next[ch];
        }
        root->isword = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie* root = this;
        for (char ch : word) {
            if (!root->next.count(ch)) { return false; }
            root = root->next[ch];
        }
        return root->isword;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) 
    {
        Trie* root = this;
        for (char ch : prefix) {
            if (!root->next.count(ch)) { return false; }
            root = root->next[ch];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
