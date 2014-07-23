#include <stdlib.h>
#include "tree_struct_dec.h"
//talloc
struct tnode *talloc(void)
{
		return (struct tnode *) malloc(sizeof(struct tnode));
}
