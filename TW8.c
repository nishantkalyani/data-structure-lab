//create a binary tree for a expression .The tree traversals in some proper method should
result in conversion of original expression into prefix,infix,and postfix forms.display
the original expression along with the 3 different forms also.
#include<stdio.h>
#include<string.h>
char exp[256];
struct node
{
    struct node *left;
    char data;
    struct node *right;
};
char opStack[128];
int opStackTop=-1;
struct node *outputStack[128];
int outputStackTop=-1;
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root -> left);
        printf(" %c ", root-> data);
        inorder(root -> right);
    }
}
void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf(" %c ", root-> data);
        preorder(root -> left);
        preorder(root -> right);
    }
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root -> left);
        postorder(root -> right);
        printf(" %c ", root-> data);
    }
}
void main()
{
    int i;
    struct node *root;
    printf("Enter the expression: \n");
    scanf("%s",&exp);
    printf("Original expression = %s",exp);
    for(i=0;i<strlen(exp);i++)
    {
        if(isdigit(exp[i]) || isalpha(exp[i]))
        {
            struct node *newNode = (struct node*)malloc(sizeof(struct node));
            newNode -> left = NULL;
            newNode -> right = NULL;
            newNode -> data = exp[i];
            outputStack[++outputStackTop] = newNode;
        }
        else
        {
            while(opStackTop!=-1 && ((opStack[opStackTop]=='*' ||
                                    opStack[opStackTop]=='/') &&
                                    (exp[i]=='+' || exp[i]=='-')))
                {
                    struct node *newNode = (struct node*)malloc(sizeof(struct node));
                    newNode -> data = opStack[opStackTop--];
                    newNode -> right = outputStack[outputStackTop--];
                    newNode -> left = outputStack[outputStackTop--];
                    outputStack[++outputStackTop] = newNode;
                }
            opStack[++opStackTop]=exp[i];
        }
    }
    while(opStackTop!=-1)
    {
        struct node *newNode = (struct node*)malloc(sizeof(struct node));
        newNode -> data = opStack[opStackTop--];
        newNode -> right = outputStack[outputStackTop--];
        newNode -> left = outputStack[outputStackTop--];
        outputStack[++outputStackTop] = newNode;
    }
    root = outputStack[outputStackTop--];
    printf("\nInorder traversal is = ");
    inorder(root);
    printf("\nPreorder traversal is = ");
    preorder(root);
    printf("\nPostorder traversal is = ");
    postorder(root);
}

output:




