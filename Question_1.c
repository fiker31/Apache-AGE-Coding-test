#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    enum TypeTag {
        ADD,
        SUB,
        MUL,
        DIV,
        FIBO,
        VALUE
    } type;

    union {
        struct {
            struct Node* arg1;
            struct Node* arg2;
        } binary;

        int value;
    } data;
} Node;

Node* makeFunc(enum TypeTag type) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->type = type;
    return node;
}

void calc(Node* node) {
    switch (node->type) {
        case ADD:
            node->data.value = node->data.binary.arg1->data.value + node->data.binary.arg2->data.value;
            break;
        case SUB:
            node->data.value = node->data.binary.arg1->data.value - node->data.binary.arg2->data.value;
            break;
        case MUL:
            node->data.value = node->data.binary.arg1->data.value * node->data.binary.arg2->data.value;
            break;
        case DIV:
            node->data.value = node->data.binary.arg1->data.value / node->data.binary.arg2->data.value;
            break;
        case FIBO:
            if (node->data.value <= 1) {
                node->data.value = node->data.value;
            } else {
                Node* a = makeFunc(FIBO);
                a->data.value = node->data.value - 1;
                Node* b = makeFunc(FIBO);
                b->data.value = node->data.value - 2;
                calc(a);
                calc(b);
                node->data.value = a->data.value + b->data.value;
                free(a);
                free(b);
            }
            break;
        case VALUE:
            break;
    }
}

int main() {
    Node* add = makeFunc(ADD);
    add->data.binary.arg1 = makeFunc(VALUE);
    add->data.binary.arg1->data.value = 10;
    add->data.binary.arg2 = makeFunc(VALUE);
    add->data.binary.arg2->data.value = 6;

    Node* mul = makeFunc(MUL);
    mul->data.binary.arg1 = makeFunc(VALUE);
    mul->data.binary.arg1->data.value = 5;
    mul->data.binary.arg2 = makeFunc(VALUE);
    mul->data.binary.arg2->data.value = 4;

    Node* sub = makeFunc(SUB);
    sub->data.binary.arg1 = add;
    sub->data.binary.arg2 = mul;

    calc(add);
    calc(mul);
    calc(sub);

    Node* fibo = makeFunc(FIBO);
    fibo->data.value = 3;
    calc(fibo);

    printf("add: %d\n", add->data.value);
    printf("mul: %d\n", mul->data.value);
    printf("sub: %d\n", sub->data.value);
    printf("fibo: %d\n", fibo->data.value);

    free(add);
    free(mul);
    free(sub);
    free(fibo);

    return 0;
}