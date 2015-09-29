#include <stdio.h>
int main()
{
    int i, t, flag = 0, book[10]={0};
	struct stack{
		int data[10];
		int top;
	};

	struct queue{
		int data[1000];
		int head;
		int tail;
	};

	struct stack s;
	struct queue q1, q2;

	q1.head = 1; q1.tail = 1;
	q2.head = 1; q2.tail = 1;
	s.top = 0;

	printf("Please input xiaoHeng's cards\n");
	for(i=0; i<6; i++){
        scanf("%d", &q1.data[i]);
        q1.tail ++;
    }

    printf("Please input xiaoHa's cards\n");
    for(i=0; i<6; i++){
        scanf("%d", &q2.data[i]);
        q2.tail++;
    }

    while(q1.head < q1.tail && q2.head < q2.tail){
        t = q1.data[q1.head];
        if(book[t] == 0){
            q1.head++;
            s.top++;
            s.data[s.top] = t;
        }
        else if(book[t] == 1){
            q1.head++;
            q1.data[q1.tail] = t;
            q1.tail++;
            while(s.data[s.top] != t){
                book[s.data[s.top]] = 0; //cancel the flag, why cancel that every loop???
                q1.data[q1.tail] = s.data[s.top];
                q1.tail++;
                s.top--;
            }
        }

        t = q2.data[q2.head];
        if(book[t] == 0){
            q2.head++;
            s.top++;
            s.data[s.top] = t;
        }
        else if(book[t] == 1){
            q2.head++;
            q2.data[q1.tail] = t;
            q2.tail++;
            while(s.data[s.top] != t){
                book[s.data[s.top]] = 0; //cancel the flag, why cancel that every loop???
                q2.data[q2.tail] = s.data[s.top];
                q2.tail++;
                s.top--;
            }
        }
    }
    if(q2.head == q2.tail)
        printf("xiaoHeng win\n");
    else
        printf("xiaoHa win\n");
    getchar(); getchar();

}
