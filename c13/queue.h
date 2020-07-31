#ifndef QUEUE_H
# define QUEUE_H

typedef struct nodeQueue_t {
	void *data;
	struct nodeQueue_t* prev;
}	NodeQ;

typedef struct queue_t {
	NodeQ* front;
	NodeQ* rear;
	unsigned size;
}	Queue;

Queue*	init_queue();
NodeQ*	create_node(void *data);
void	enqueue(Queue* q, void *data);
NodeQ*	dequeue(Queue* q);

#endif
