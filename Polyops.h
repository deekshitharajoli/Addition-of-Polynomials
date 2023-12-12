struct Node
{
    int coeff;
    int pow;
    struct Node *next;
};

void create_node(int x, int y, struct Node **temp);
void polyadd(struct Node *poly1, struct Node *poly2, struct Node *poly);
void show(struct Node *node);