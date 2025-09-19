#include <vector>
#include <queue>
#include <deque>
#include <functional>

// 1. MultiList – контейнер списков
template<typename T>
class MultiList {
private:
    std::vector<std::vector<T>> lists;
public:
    void addList() { lists.emplace_back(); }
    void append(size_t idx, const T& value) { lists[idx].push_back(value); }
    std::vector<T>& getList(size_t idx) { return lists[idx]; }
};

// 2. Queue – FIFO
template<typename T>
class SimpleQueue {
private:
    std::queue<T> q;
public:
    void enqueue(const T& value) { q.push(value); }
    T dequeue() { T v = q.front(); q.pop(); return v; }
    bool isEmpty() const { return q.empty(); }
};

// 3. Deque – двунаправленная очередь
template<typename T>
class SimpleDeque {
private:
    std::deque<T> d;
public:
    void appendRight(const T& value) { d.push_back(value); }
    void appendLeft(const T& value) { d.push_front(value); }
    T popRight() { T v = d.back(); d.pop_back(); return v; }
    T popLeft() { T v = d.front(); d.pop_front(); return v; }
    bool isEmpty() const { return d.empty(); }
};

// 4. PriorityQueue – мин-куча
template<typename T>
class SimplePriorityQueue {
private:
    std::priority_queue<T, std::vector<T>, std::greater<T>> pq;
public:
    void push(const T& value) { pq.push(value); }
    T pop() { T v = pq.top(); pq.pop(); return v; }
    T peek() const { return pq.top(); }
    bool isEmpty() const { return pq.empty(); }
};
