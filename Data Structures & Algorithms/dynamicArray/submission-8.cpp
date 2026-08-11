class DynamicArray {

private:

    int capacity;
    int length;
    int* arr;
public:

    DynamicArray(int capacity) : capacity(capacity), length(0) {
        arr = new int[capacity];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (length >= capacity){
            resize();
        }
        arr[length] = n;
        length++;
    }

    int popback() {
        if (length > 0) {
            length--;
            return arr[length];
        }
        return -1;
    }

    void resize() {
        capacity *= 2;
        int* arr1 = new int[capacity];

        for (int i = 0; i < length; i++){
            arr1[i] = arr[i];
        }

        delete[] arr;
        arr = arr1;
    }

    int getSize() {
        return length;
    }

    int getCapacity() {
        return capacity;
    }
};