#include <stdio.h>  
#include <stdlib.h>       //malloc,free  
typedef char ElemType;  //��������ElemTypeָ�����ַ�����   
//1.����Ķ���   
typedef struct node{  
	    ElemType data;      //������   
	    struct node *next;  //ָ����   
	}LNode,*LinkList; //LNode�ṹ�������LinkList�ṹ��ָ�� 
	  
//2.����ĳ��ò���  

//2.1�������  
void print(LinkList head); 
 
//2.2��������-β�巨  
LinkList createTail();  
 
//2.3��������-ͷ�巨  
LinkList createHead();  

//2.4������ĳ���  
int length(LinkList head);  

//2.5������ĵ�i���������һ��������Ϊitem���½�㣬�ɹ�����1��ʧ�ܷ���-1   
int insertAfter(LinkList head,int i,ElemType item);
   
//2.6ɾ������ĵ�i�����  
int del(LinkList head,int i);  
 

int main()  
{  
    printf("��ӭ�������������ϵͳ!\n");  
    printf("1.��������-β�巨\n");   
    printf("2.��������-ͷ�巨\n");   
    printf("----------------------------\n");     
    printf("3.�������\n");   
    printf("4.������ĳ���\n");     
    printf("5.������ĵ�i���������һ��������Ϊitem���½��\n");   
    printf("6.ɾ������ĵ�i�����\n");     
    printf("7.�������\n");   
    printf("8.Ԥ������2\n");      
    printf("9.Ԥ������3\n");   
    printf("10.�˳�ϵͳ\n");   
    int choice;         //�û�ѡ��   
    LinkList head = NULL;   //��ʼ������headΪNULL   
    while(~scanf("%d",&choice)){  
	  switch(choice){
	       case 1: printf("1.��������-β�巨\n");
		   head = createTail();
		   break;
		    
		   case 2: printf("2.��������-ͷ�巨\n"); 
		   break; 
		   case 3: printf("3.�������\n");  
		   print(head); 
		   break;
		   
		   case 10:printf("ϵͳ�����˳�����ӭ�ٴ�ʹ�ã�\n");  
		   break; 
		   } 
		   if(choice == 10){ 
		   break; 
		   }  
		}   	          
	    return 0;  
	}   
	  
	  
//2.1�������  
void print(LinkList head){
	if(head == NULL){  
	printf("����Ϊ�ձ�!\n");
	return; 
	}  
	LinkList p = head;
	while(p->next != NULL){ 
	printf("%c->",p->data); 
	p = p->next; 
	}  
	printf("%c\n",p->data);  //������һ����㲢����  
}  
	  
//2.2��������-β�巨  
LinkList createTail()
{  
    //head-��ͷ��tail-��β��p-�½���ָ��
	LinkList head = NULL,tail,p;
	//1.�����½�� 
	char ch;  
	while(~scanf("%c",&ch)){  
	if(ch == '#'){ 
	break; 
	}   
    //���˿հ��ַ� 
	if(ch == ' ' || ch == '\t' || ch == '\r' || ch == '\n'){
	continue; 
	}  
	//�����ڴ� 
	p = (LinkList)malloc(sizeof(LNode)); 
	p->data = ch; 
	p->next = NULL;      //ָ�����ʼ��Ϊ�� 
	  
	//2.p�����뵽�����β��  
	//2.1����Ϊ�գ����½��p���������ͷ��� 
	if(head == NULL)
	{
	    head = p;
	}  
	else{   
	    //2.2����Ϊ�գ����½����뵽�����β��   
	    tail->next = p; 
	}   
	//2.3���������βָ��tail��ʹ��ָ���½��p 
	tail = p;
	} 
	
	return head;   
} 
	 
//2.3��������-ͷ�巨 
LinkList createHead()
{ 
    
}  

//2.4������ĳ��� 
int length(LinkList head)  
{ 
              

}  

//2.5������ĵ�i���������һ��������Ϊitem���½�㣬�ɹ�����1��ʧ�ܷ���-1   
int insertAfter(LinkList head,int i,ElemType item) 
{  
   
}   

//2.6ɾ������ĵ�i�����  
int del(LinkList head,int i)
{ 
   
} 


