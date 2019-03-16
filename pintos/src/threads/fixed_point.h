#define Q 14
#define P 17
#define FR 1<<(Q)

#define CONVERT_TO_FIXED_POINT(x) (x)*(FR)
#define CONVERT_TO_ZERO_INT(x) (x)/(FR)
#define CONVERT_TO_NEAR_INT_POS(x) ((x)+(FR)/2)/(FR)
#define CONVERT_TO_NEAR_INT_NEG(x) ((x)-(FR)/2)/(FR)
#define ADD_INT(x,n) (x)+(n)*(FR)
#define SUB_INT(x,n) (x)-(n)*(FR)
#define MUL_FIXED_POINT(x,y) ((int64_t)(x))*(y)/(FR)
#define DIV_FIXED_POINT(x,y) ((int64_t)(x))*(FR)/(y) 