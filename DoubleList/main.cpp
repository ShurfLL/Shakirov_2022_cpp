#include <iostream>
#include <exception>

struct Node {
    int val = 0;
    Node *next = nullptr;
    Node *prev = nullptr;

    Node() = default;

    Node(int value, Node *next_node, Node *prev_node) { //конструктор тут только для удобства создания ячейки, деструктор не написал, тк автоматически созданный деструктор и сам справится.
        val = value;
        next = next_node;
        prev = prev_node;
    }
};

struct DoubleList { //все методы продемонстрированы в main
    Node *first = nullptr;
    Node *last = nullptr;
    int size = 0;

    int Size() const {
        return size;
    }

    Node& operator[](int i) {
        if (i >= size or i < 0) throw "out of range";
        if (size == 0) throw "empty list";
        Node *p = first;
        for (int j = 0; j < i; j++) {
            p = p->next;
        }
        return (*p);
    }

    void PushHead(int value) {
        Node *p = new Node(value, first, nullptr);
        if (size == 0) {
            first = p;
            last = p;
            size++;
            return;
        }
        first = p;
        size++;

    }

    void PopHead() {
        if (first == nullptr) return;
        Node *p = first->next;
        delete first;
        first = p;
        size--;
    }

    void PushBack(int value) {
        Node *p = new Node(value, nullptr, last);
        if (size == 0) {
            first = p;
            last = p;
        }
        else {
            last->next = p;
            last = p;
        }
        size++;
    }

    void PopBack() {
        if (size == 0) return;
        if (size == 1) {
            this->PopHead();
            return;
        }
        Node *p = last;
        last = last->prev;
        last->next = nullptr;
        delete p;
        size--;
    }

    void Push(int value, int id_x) {
        if (id_x > size or id_x < 0) throw "out of range";
        if (size == 0 or id_x == 0) {
            this->PushHead(value);
            size++;
            return;
        }
        if (id_x == size) {
            this->PushBack(value);
            size++;
            return;
        }
        Node *k = &(*this)[id_x];
        Node *p = new Node(value, k, k->prev);
        (*this)[id_x-1].next = p;
        k->prev = p;
        size++;
    }

    void Remove(int id_x) {
        if (id_x < 0 or id_x >= size) throw "out of range";
        if (id_x == 0) {
            this->PopHead();
            return;
        }
        if  (id_x == size - 1) {
            this->PopBack();
            return;
        }
        Node *p = &(*this)[id_x];
        (*this)[id_x+1].prev = &(*this)[id_x-1];
        (*this)[id_x-1].next = &(*this)[id_x+1];
        delete p;
        size--;

    }

    ~DoubleList() {
        for(int i = 0; i < size; i++)
        {
            this->PopHead();
        }
    }
};

std::ostream& operator<<(std::ostream &os, const DoubleList &list) {
    if (list.Size() == 0) {
        os << "Size: 0" << std::endl;
        return os;
    }
    Node *p = list.first;
    os << p->val << " ";
    while (p->next != nullptr) {
        p = p->next;
        os << p->val << " ";
    }
    os << std::endl << "Size: " << list.Size() << std::endl;
    return os;
}

std::ostream& operator<<(std::ostream &os, const Node &p) {
    return os<<p.val;
}

int main() {
    DoubleList a;
    int n = 10;
    for(int i = 0; i < n; i++)
    {
        a.PushHead(i);
    }
    std::cout << a;
    a.PushHead(n);
    std::cout << a;
    a.PushBack(-1);
    std::cout << a;
    a.PopHead();
    std::cout << a;
    a.PopBack();
    std::cout << a;
    a.Push(4,1);
    std::cout << a;
    a.Remove(6);
    std::cout << a;
    std::cout << a[0];
    return 0;
}
