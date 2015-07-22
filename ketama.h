#ifndef _KETAMA_H
#define _KETAMA_H

#ifndef SSIZE_MAX
#define SSIZE_MAX    32767
#endif

struct dot {
	unsigned int point;
	int srvid;
};

struct ketama {
	unsigned int numpoints;
	struct dot *dot;

	int count;
	char **name;
	int *weight;
	int totalweight;
};

int create_ketama(struct ketama *, int);
void free_ketama(struct ketama *);
int get_server(struct ketama *, const char *);
#endif
