//employee
#include<stdio.h>
#include<string.h>
struct employee{
	int id;
	char name[20];
	double salary;
	//this == represents address of current invoke object
	//setters
	void setid(int a){
		this->id=a;
	}
	void setname(char* nm){
		strcpy(this->name,nm);
	}
	void setsalary(double s){
		this->salary=s;
	}
	void display(){
		printf("id:%d\n",this->id);
		printf("Name :%s\n",this->name);
		printf("Salary:%lf\n",this->salary);
		
	}
	
	//getters
	int getid(){
		return this->id;
	}
	
	char* getname(){
		
		return this->name;
	}
	
	double getsalary(){
		return this->salary;
	}
	
	//constructor
	employee(){
		this->id=0;
		strcpy(this->name,"not given");
		this->salary=0;
		printf("Constructor called\n");
	}
	//parameterised constructor
	employee(int i,char* nm,double s){
		this->id=i;
		strcpy(this->name,nm);
		this->salary=s;
		printf("Parameterised constructor called\n");
	}
};
int main(){
	employee e1;
	printf("e1\n");
	e1.display();
	employee e2(102,"Prachiti",85000);
	e2.display();
	e1.setid(101);
	e1.setname("Hrutu");
	e1.setsalary(20000);
	//e1.display();
	printf("after setting values of e1 by setter :\n");
	printf("ID:%d\n",e1.getid());
	printf("Name:%s\n",e1.getname());
	printf("Salary:%.2lf\n",e1.getsalary());
	
	
	return 0;
}
