import java.util.*;

// 1. MultiList – контейнер списков
public class MultiList<T> {
    private List<List<T>> lists = new ArrayList<>();

    public void addList() {
        lists.add(new ArrayList<>());
    }

    public void append(int idx, T value) {
        lists.get(idx).add(value);
    }

    public List<T> getList(int idx) {
        return lists.get(idx);
    }
}


// 2. Queue – FIFO
public class SimpleQueue<T> {
    private Queue<T> q = new LinkedList<>();

    public void enqueue(T value) {
        q.add(value);
    }

    public T dequeue() {
        return q.poll();
    }

    public boolean isEmpty() {
        return q.isEmpty();
    }
}


// 3. Deque – двунаправленная очередь
public class SimpleDeque<T> {
    private Deque<T> d = new ArrayDeque<>();

    public void appendRight(T value) {
        d.addLast(value);
    }

    public void appendLeft(T value) {
        d.addFirst(value);
    }

    public T popRight() {
        return d.pollLast();
    }

    public T popLeft() {
        return d.pollFirst();
    }

    public boolean isEmpty() {
        return d.isEmpty();
    }
}


// 4. PriorityQueue – минимальная
public class SimplePriorityQueue<T> {
    private PriorityQueue<T> pq = new PriorityQueue<>();

    public void push(T value) {
        pq.add(value);
    }

    public T pop() {
        return pq.poll();
    }

    public T peek() {
        return pq.peek();
    }

    public boolean isEmpty() {
        return pq.isEmpty();
    }
}
