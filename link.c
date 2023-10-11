#include <stdio.h>  
#include <stdlib.h>       //malloc,free  
typedef char ElemType;  //抽象类型ElemType指的是字符类型   
//1.链表的定义   
typedef struct node{  
	    ElemType data;      //数据域   
	    struct node *next;  //指针域   
	}LNode,*LinkList; //LNode结构体变量，LinkList结构体指针 
	  
//2.链表的常用操作  

//2.1输出链表  
void print(LinkList head); 
 
//2.2创建链表-尾插法  
LinkList createTail();  
 
//2.3创建链表-头插法  
LinkList createHead();  

//2.4求链表的长度  
int length(LinkList head);  

//2.5在链表的第i个结点后插入一个数据域为item的新结点，成功返回1，失败返回-1   
int insertAfter(LinkList head,int i,ElemType item);
   
//2.6删除链表的第i个结点  
int del(LinkList head,int i);  
 

int main()  
{  
    printf("欢迎进入链表操作子系统!\n");  
    printf("1.创建链表-尾插法\n");   
    printf("2.创建链表-头插法\n");   
    printf("----------------------------\n");     
    printf("3.输出链表\n");   
    printf("4.求链表的长度\n");     
    printf("5.在链表的第i个结点后插入一个数据域为item的新结点\n");   
    printf("6.删除链表的第i个结点\n");     
    printf("7.清空链表\n");   
    printf("8.预留功能2\n");      
    printf("9.预留功能3\n");   
    printf("10.退出系统\n");   
    int choice;         //用户选择   
    LinkList head = NULL;   //初始化链表head为NULL   
    while(~scanf("%d",&choice)){  
	  switch(choice){
	       case 1: printf("1.创建链表-尾插法\n");
		   head = createTail();
		   break;
		    
		   case 2: printf("2.创建链表-头插法\n"); 
		   break; 
		   case 3: printf("3.输出链表\n");  
		   print(head); 
		   break;
		   
		   case 10:printf("系统即将退出，欢迎再次使用！\n");  
		   break; 
		   } 
		   if(choice == 10){ 
		   break; 
		   }  
		}   	          
	    return 0;  
	}   
	  
	  
//2.1输出链表  
void print(LinkList head){
	if(head == NULL){  
	printf("链表为空表!\n");
	return; 
	}  
	LinkList p = head;
	while(p->next != NULL){ 
	printf("%c->",p->data); 
	p = p->next; 
	}  
	printf("%c\n",p->data);  //输出最后一个结点并换行  
}  
	  
//2.2创建链表-尾插法  
LinkList createTail()
{  
    //head-表头，tail-表尾，p-新结点的指针
	LinkList head = NULL,tail,p;
	//1.输入新结点 
	char ch;  
	while(~scanf("%c",&ch)){  
	if(ch == '#'){ 
	break; 
	}   
    //过滤空白字符 
	if(ch == ' ' || ch == '\t' || ch == '\r' || ch == '\n'){
	continue; 
	}  
	//分配内存 
	p = (LinkList)malloc(sizeof(LNode)); 
	p->data = ch; 
	p->next = NULL;      //指针域初始化为空 
	  
	//2.p结点插入到链表的尾部  
	//2.1链表为空，则新结点p就是链表的头结点 
	if(head == NULL)
	{
	    head = p;
	}  
	else{   
	    //2.2链表不为空，则新结点加入到链表的尾部   
	    tail->next = p; 
	}   
	//2.3更新链表的尾指针tail，使其指向新结点p 
	tail = p;
	} 
	
	return head;   
} 
	 
//2.3创建链表-头插法 
LinkList createHead()
{ 
    
}  

//2.4求链表的长度 
int length(LinkList head)  
{ 
              

}  

//2.5在链表的第i个结点后插入一个数据域为item的新结点，成功返回1，失败返回-1   
int insertAfter(LinkList head,int i,ElemType item) 
{  
   
}   

//2.6删除链表的第i个结点  
int del(LinkList head,int i)
{ 
   
} 


