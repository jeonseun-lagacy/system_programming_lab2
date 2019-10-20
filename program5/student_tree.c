#include <search.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node{
	char *name;
	int mid_score;
	int final_score;
};
//루트 노드 포인터
struct node *root = NULL;

int compare(const void *cp1, const void *cp2)
{
	return strcmp(((struct node *)cp1)->name, (((struct node *)cp2)->name));
}

void print_node(const void *nodeptr, VISIT order, int level)
{
	if(order == preorder || order == leaf){
		printf("name : %-5s mid score : %d final score : %d\n",(*(struct node **)nodeptr)->name, (*(struct node **)nodeptr)->mid_score, (*(struct node **)nodeptr)->final_score);
}
}
int main()
{
	int size, i;
	printf("input tree size : ");
	scanf("%d", &size);

	//학생 별 이름 저장공간 동적 할당
	char *nametable = (char *)malloc(20 * size);
	//노드 테이블 동적 할당
	struct node *nodetable = (struct node *)malloc(size * sizeof(struct node));
	//노드 하나의 포인터를 저장하고 참조할 이중 포인터
	struct node **ret;

	printf("이름, 중간성적, 기말성적 순 입력, 종료 Ctrl-D\n");
	while(scanf("%s%d%d",nametable, &nodetable->mid_score, &nodetable->final_score) != EOF){
		i++;
		nodetable->name = nametable;
		ret = (struct node **) tsearch((void *) nodetable, (void **) &root, compare);
		printf("%s 학생이 ", (*ret)->name);
		if(*ret == nodetable){
			printf("트리에 추가되었습니다.\n");
		}else{
			printf("트리에 이미 존재합니다.\n");
			i--;
		}nametable += strlen(nametable) + 1;
		nodetable++;
		if( (i+1) > size) break;
	}
	twalk((void *) root, print_node);
	return 0;
}
