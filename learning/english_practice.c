//
// Created by zhanxiaosong on 2024/2/18.
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


void shuffleArray(VerbPair* array, int size) {
    srand(time(NULL));
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        VerbPair temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        VerbPair temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}




int main() {
    

    VerbPair verbMap[MAX_VERB_COUNT];

    memset(verbMap, 0, sizeof(verbMap));

    // 动名词作宾语
    strcpy(verbMap[0].verb, "admit");
    strcpy(verbMap[0].phrase, "doing");

    strcpy(verbMap[1].verb, "allow");
    strcpy(verbMap[1].phrase, "doing");

    strcpy(verbMap[2].verb, "advise");
    strcpy(verbMap[2].phrase, "doing");

    strcpy(verbMap[3].verb, "appreciate");
    strcpy(verbMap[3].phrase, "doing");

    strcpy(verbMap[5].verb, "consider");
    strcpy(verbMap[5].phrase, "doing");


    strcpy(verbMap[7].verb, "dislike");
    strcpy(verbMap[7].phrase, "doing");

    strcpy(verbMap[8].verb, "encourage");
    strcpy(verbMap[8].phrase, "doing");

    strcpy(verbMap[42].verb, "finish");
    strcpy(verbMap[42].phrase, "doing");


    strcpy(verbMap[10].verb, "escape");
    strcpy(verbMap[10].phrase, "doing");
    strcpy(verbMap[11].verb, "feel like");
    strcpy(verbMap[11].phrase, "doing");
    strcpy(verbMap[12].verb, "forbid");
    strcpy(verbMap[12].phrase, "doing");
    strcpy(verbMap[13].verb, "forgive");
    strcpy(verbMap[13].phrase, "doing");
    strcpy(verbMap[14].verb, "give up");
    strcpy(verbMap[14].phrase, "doing");
    strcpy(verbMap[15].verb, "can not help");
    strcpy(verbMap[15].phrase, "doing");
    strcpy(verbMap[16].verb, "imagine");
    strcpy(verbMap[16].phrase, "doing");
    strcpy(verbMap[17].verb, "involve");
    strcpy(verbMap[17].phrase, "doing");
    strcpy(verbMap[18].verb, "mind");
    strcpy(verbMap[18].phrase, "doing");
    strcpy(verbMap[19].verb, "miss");
    strcpy(verbMap[19].phrase, "doing");


    strcpy(verbMap[21].verb, "put off");
    strcpy(verbMap[21].phrase, "doing");
    strcpy(verbMap[22].verb, "can not stand");
    strcpy(verbMap[22].phrase, "doing");


    //不定式作宾语
    strcpy(verbMap[24].verb, "agree");
    strcpy(verbMap[24].phrase, "to do");
    strcpy(verbMap[25].verb, "aim");
    strcpy(verbMap[25].phrase, "to do");
    strcpy(verbMap[26].verb, "intend");
    strcpy(verbMap[26].phrase, "to do");
    strcpy(verbMap[27].verb, "ask");
    strcpy(verbMap[27].phrase, "to do");
    strcpy(verbMap[28].verb, "choose");
    strcpy(verbMap[28].phrase, "to do");
    strcpy(verbMap[29].verb, "decide");
    strcpy(verbMap[29].phrase, "to do");
    strcpy(verbMap[30].verb, "determine");
    strcpy(verbMap[30].phrase, "to do");
    strcpy(verbMap[31].verb, "pretend");
    strcpy(verbMap[31].phrase, "to do");
    strcpy(verbMap[32].verb, "expect");
    strcpy(verbMap[32].phrase, "to do");
    strcpy(verbMap[33].verb, "hope");
    strcpy(verbMap[33].phrase, "to do");
    strcpy(verbMap[34].verb, "wish");
    strcpy(verbMap[34].phrase, "to do");
    strcpy(verbMap[35].verb, "want");
    strcpy(verbMap[35].phrase, "to do");
    strcpy(verbMap[36].verb, "learn");
    strcpy(verbMap[36].phrase, "to do");
    strcpy(verbMap[37].verb, "manage");
    strcpy(verbMap[37].phrase, "to do");
    strcpy(verbMap[38].verb, "fail");
    strcpy(verbMap[38].phrase, "to do");
    strcpy(verbMap[39].verb, "offer");
    strcpy(verbMap[39].phrase, "to do");
    strcpy(verbMap[40].verb, "promise");
    strcpy(verbMap[40].phrase, "to do");
    strcpy(verbMap[41].verb, "refuse");
    strcpy(verbMap[41].phrase, "to do");



    strcpy(verbMap[20].verb, "practice");
    strcpy(verbMap[20].phrase, "to do / doing");

    strcpy(verbMap[23].verb, "suggest");
    strcpy(verbMap[23].phrase, "doing");
    strcpy(verbMap[9].verb, "enjoy");
    strcpy(verbMap[9].phrase, "to do / doing");

    strcpy(verbMap[43].verb, "stop");
    strcpy(verbMap[43].phrase, "to do / doing");


    strcpy(verbMap[44].verb, "forget");
    strcpy(verbMap[44].phrase, "to do / doing");

    strcpy(verbMap[4].verb, "avoid");
    strcpy(verbMap[4].phrase, "to to / doing");


    strcpy(verbMap[6].verb, "deny");
    strcpy(verbMap[6].phrase, "to do / doing");
    strcpy(verbMap[45].verb, "try");
    strcpy(verbMap[45].phrase, "to do / doing");

    strcpy(verbMap[46].verb, "mean");
    strcpy(verbMap[46].phrase, "to do / doing");

    strcpy(verbMap[47].verb, "need");
    strcpy(verbMap[47].phrase, "to do / doing");


    strcpy(verbMap[48].verb, "require");
    strcpy(verbMap[48].phrase, "to do / doing");

    strcpy(verbMap[49].verb, "regret");
    strcpy(verbMap[49].phrase, "to do / doing");



    strcpy(verbMap[50].verb, "remember");
    strcpy(verbMap[50].phrase, "doing");




    shuffleArray(verbMap, 50);
//    for (int i = 0; i < MAX_VERB_COUNT; i++) {
//        printf("动词：%s，后接词语：%s\n", verbMap[i].verb, verbMap[i].phrase);
//    }


    for (int i = 0; i < 50; i++) {
        char input[MAX_PHRASE_LENGTH];
        printf("%s后接：", verbMap[i].verb);
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;

        if (strcmp(verbMap[i].phrase, input) != 0) {
            printf("   FALSE   \n");
            printf("正确答案是：%s\n\n", verbMap[i].phrase);
        } else {
            printf("   TRUE\n\n");
        }
    }

    // 随机生成一个动词
    // srand(time(NULL));
    // int randomIndex = rand() % MAX_VERB_COUNT;
    // char* verb = verbMap[randomIndex].verb;

    // 输出动词
    // printf("动词：%s\n", verb);

    // 输出动词后接的词语
    // printf("后接的词语：%s\n", verbMap[randomIndex].phrase);

    // 检测是否正确
    // if (strcmp(verbMap[randomIndex].phrase, "to do") == 0) {
    //     printf("正确，该动词后接 \"to do\"\n");
    // } else {
    //     printf("错误，该动词后接 \"doing\"\n");
    // }


//    afford arrange beg care demand   fear help plan prepare happen hesitate struggle  to do


    return 0;
}


