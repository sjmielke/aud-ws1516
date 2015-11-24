#define MAXLEN 32

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct exam_result {
  char exam_name[MAXLEN];
  int exam_grade;
};

struct student {
  char name[MAXLEN];
  struct exam_result* exams[MAXLEN];
  int num_exams;
};



struct student* new_student(char* name) {
  struct student* s;
  s = (struct student*) malloc(sizeof(struct student));
  strcpy(s->name, name);
  s->num_exams = 0;

  return s;
}

void add_exam(struct student* human, char* name, int grade) {
  struct exam_result* res;
  res = (struct exam_result*) malloc(sizeof(struct exam_result));
  strcpy((*res).exam_name, name);
  (*res).exam_grade = grade; /* kürzere Syntax: res->exam_grade = grade; */

  human->exams[human->num_exams] = res;
  human->num_exams++;
}

void print_student(struct student* s) {
  int i;
  printf("%s:\n", s->name);
  for(i = 0; i < s->num_exams; ++i) {
    printf("  %s: %d\n", s->exams[i]->exam_name, (*((*s).exams[i])).exam_grade);
  }
}


int main() {
  struct student* db[2];
  int i;

  db[0] = new_student("Max Mustermann");
  add_exam(db[0], "GTI", 4);
  add_exam(db[0], "SyA", 3);

  db[1] = new_student("Sepp Wurz");
  add_exam(db[1], "GTI", 1);
  add_exam(db[1], "SyA", 1);

  for (i = 0; i < 2; ++i) print_student(db[i]);
  
  return 0;
}