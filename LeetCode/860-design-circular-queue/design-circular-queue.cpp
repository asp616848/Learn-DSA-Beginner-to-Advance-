class MyCircularQueue {
    int* a;
    int size;
    int front;
    int rear;
    int count;
public:
    MyCircularQueue(int k) {
        a = new int[k];
        size = k;
        front = 0;
        rear = -1;
        count = 0;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        count++;
        rear = (rear+1)%size;
        a[rear] = value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        count--;
        front = (front+1)%size;
        return true;
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        return a[front];
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        return a[rear];
    }
    
    bool isEmpty() {
        return count==0;
    }
    
    bool isFull() {
        return count==size;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */