/*
[LeetCode #146] LRU Cache

Design a data structure that follows the constraints of a Least Recently Used (LRU) cache.

Implement the LRUCache class:

LRUCache(int capacity) Initialize the LRU cache with positive size capacity.
int get(int key) Return the value of the key if the key exists, otherwise return -1.
void put(int key, int value) Update the value of the key if the key exists. Otherwise, add the key-value pair to the cache. If the number of keys exceeds the capacity from this operation, evict the least recently used key.
The functions get and put must each run in O(1) average time complexity.

Example 1:

Input
["LRUCache", "put", "put", "get", "put", "get", "put", "get", "get", "get"]
[[2], [1, 1], [2, 2], [1], [3, 3], [2], [4, 4], [1], [3], [4]]
Output
[null, null, null, 1, null, -1, null, -1, 3, 4]

Explanation
LRUCache lRUCache = new LRUCache(2);
lRUCache.put(1, 1); // cache is {1=1}
lRUCache.put(2, 2); // cache is {1=1, 2=2}
lRUCache.get(1);    // return 1
lRUCache.put(3, 3); // LRU key was 2, evicts key 2, cache is {1=1, 3=3}
lRUCache.get(2);    // returns -1 (not found)
lRUCache.put(4, 4); // LRU key was 1, evicts key 1, cache is {4=4, 3=3}
lRUCache.get(1);    // return -1 (not found)
lRUCache.get(3);    // return 3
lRUCache.get(4);    // return 4
 

Constraints:

1 <= capacity <= 3000
0 <= key <= 104
0 <= value <= 105
At most 2 * 105 calls will be made to get and put.
*/

class LRUCache {
    int cap;

    unordered_map<int, list<pair<int, int>>::iterator> map;
    list<pair<int, int>> cache;

    void moveToFront(int key) {
        int value = map[key]->second;
        pair<int, int> data(key, value);

        cache.erase(map[key]);
        cache.push_front(data);

        map[key] = cache.begin();
    }

    void deleteLRU() {
        int last_key = cache.back().first;
        map.erase(last_key);
        cache.pop_back();
    }

   public:
    LRUCache(int capacity) {
        this->cap = capacity;
    }

    int get(int key) {
        bool key_exist = map.count(key);
        if (!key_exist) {
            return -1;
        }

        int value_to_return = map[key]->second;
        moveToFront(key);

        return value_to_return;
    }

    void put(int key, int value) {
        pair<int, int> data(key, value);

        bool key_already_exist = map.count(key);
        if (key_already_exist) {
            map[key]->second = value;
            moveToFront(key);

            return;
        }

        cache.push_front(data);
        map.insert({key, cache.begin()});

        if (cache.size() > this->cap) {
            deleteLRU();
        }
    }
};
