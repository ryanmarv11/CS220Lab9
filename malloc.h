#define malloc(size) mymalloc(size)
#define free(ptr) myfree(ptr)

//void *mymalloc(size_t size);
//void myfree(void *ptr);
void *__wrap_malloc(size_t size);
void __wrap_free(void *ptr);

