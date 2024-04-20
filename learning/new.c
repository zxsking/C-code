//
// Created by zhanxiaosong on 2024/4/11.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_VERB_COUNT 80
#define MAX_VERB_LENGTH 20
#define MAX_PHRASE_LENGTH 20

typedef struct {
    char verb[MAX_VERB_LENGTH];
    char phrase[MAX_PHRASE_LENGTH];
} VerbPair;

int fuzzyMatch(const char* expected, const char* input) {
    if (strcmp(expected, input) == 0) {
        return 1; // ��ȫƥ��
    }

    // ����Ƿ�Ϊģ��ƥ������
    if (strstr(expected, "to do / doing")) {
        if (strcmp(input, "todo") == 0 || strcmp(input, "doing") == 0) {
            return 1; // ģ��ƥ��ɹ�
        }
    }
    return 0; // ƥ��ʧ��
}

void shuffleArray(VerbPair* array, int size) {
    srand(time(NULL));
    for (int i = size - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        VerbPair temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

int initVerbMap(VerbPair* verbMap) {
    const char *toDoVerbs[] = {"agree", "aim", "intend", "ask", "choose", "decide", "determine", "pretend", "expect",
                               "hope", "wish", "want", "learn", "manage", "fail", "offer", "promise", "refuse",
                               "afford", "arrange", "beg", "care", "demand", "fear", "help", "plan", "prepare",
                               "happen", "hesitate", "struggle", "long" ,"can not wait"};

    const char *doingVerbs[] = {"admit", "allow", "advise", "appreciate", "consider", "dislike", "encourage", "finish",
                                "escape", "feel like", "forbid", "forgive", "give up", "can not help", "imagine",
                                "involve", "mind", "miss", "put off", "can not stand", "suggest",
                                };

    const char *bothFormsVerbs[] = {"practice", "enjoy", "stop", "forget", "avoid", "deny", "try", "mean", "need",
                                    "require", "regret","quit","remember"};

    int index = 0;

    for (int i = 0; i < sizeof(toDoVerbs) / sizeof(toDoVerbs[0]); ++i) {
        strcpy(verbMap[index].verb, toDoVerbs[i]);
        strcpy(verbMap[index].phrase, "to do");
        ++index;
    }


    for (int i = 0; i < sizeof(doingVerbs) / sizeof(doingVerbs[0]); ++i) {
        strcpy(verbMap[index].verb, doingVerbs[i]);
        strcpy(verbMap[index].phrase, "doing");
        ++index;
    }


    // Verbs that can take both forms
    for (int i = 0; i < sizeof(bothFormsVerbs) / sizeof(bothFormsVerbs[0]); ++i) {
        strcpy(verbMap[index].verb, bothFormsVerbs[i]);
        strcpy(verbMap[index].phrase, "to do / doing");
        ++index;
    }
    return index;
}

int main() {
    VerbPair verbMap[MAX_VERB_COUNT];
    memset(verbMap, 0, sizeof(verbMap));
    int index = initVerbMap(verbMap);


    char input[MAX_PHRASE_LENGTH];
    int active = 1;

    while (active) {
        // ϴ��
        srand(time(NULL));
        for (int i = index - 1; i > 0; i--) {
            int j = rand() % (i + 1);
            VerbPair temp = verbMap[i];
            verbMap[i] = verbMap[j];
            verbMap[j] = temp;
        }
        int ok;
        // չʾÿ����Ŀ
        for (int i = 0; i < index; i++) {
            printf("%s��ӣ�", verbMap[i].verb);
            gets(input);
            if (  ok = strcmp(input, verbMap[i].phrase))
            {
                printf("�������         ");
                printf("��ȷ���ǣ�%s\n", verbMap[i].phrase);
            }

            printf("\n");

            // ����Ƿ��˳�
            if (strcmp(input, "exit") == 0) {
                active = 0;
                break;
            }

            // �����ȷ�𰸣��������Ϊʾ����ʵ��Ӧ���п��ܲ���Ҫ

        }

        if (active) {
            printf("������Ŀ��չʾ������ϴ�Ƽ�����\n");
        }
    }

    printf("�������˳���\n");
    return 0;

}
