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
        return 1; // 完全匹配
    }

    // 检查是否为模糊匹配的情况
    if (strstr(expected, "to do / doing")) {
        if (strcmp(input, "todo") == 0 || strcmp(input, "doing") == 0) {
            return 1; // 模糊匹配成功
        }
    }
    return 0; // 匹配失败
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
        // 洗牌
        srand(time(NULL));
        for (int i = index - 1; i > 0; i--) {
            int j = rand() % (i + 1);
            VerbPair temp = verbMap[i];
            verbMap[i] = verbMap[j];
            verbMap[j] = temp;
        }
        int ok;
        // 展示每个条目
        for (int i = 0; i < index; i++) {
            printf("%s后接：", verbMap[i].verb);
            gets(input);
            if (  ok = strcmp(input, verbMap[i].phrase))
            {
                printf("输入错误。         ");
                printf("正确答案是：%s\n", verbMap[i].phrase);
            }

            printf("\n");

            // 检查是否退出
            if (strcmp(input, "exit") == 0) {
                active = 0;
                break;
            }

            // 输出正确答案，这里仅作为示例，实际应用中可能不需要

        }

        if (active) {
            printf("所有条目已展示，重新洗牌继续。\n");
        }
    }

    printf("程序已退出。\n");
    return 0;

}
