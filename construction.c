#include <stdio.h>
#include <stdlib.h>

struct dog {int a; char* n;};

void print_dog(struct dog *d) {
    printf("This dog is called %s and they are %d years old\n", d->n, d->a);
}

struct dog *make_dog(int age, char* name) {
    struct dog *d = malloc(sizeof(struct dog));
    d->a = age;
    d->n = name;

    return d;
}

int main() {
    struct dog *j = make_dog(7, "Jacobi");
    print_dog(j);
    free(j);

    return 0;
}
