#include "kvs.h"


kvs_t* open()
{
	kvs_t* kvs = (kvs_t*) malloc (sizeof(kvs_t));

	if(kvs)
		kvs->items = 0;
	printf("Open: kvs has %d items\n", kvs->items);

	return kvs;
}
