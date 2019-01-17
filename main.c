#include <stdio.h>
#include<math.h>
struct Point
{
    int x;
    int y;
};

int main()
{
    int index = 0;
    struct Point arr[100];

    printf("jinrudachexitong \n");
    while (1)
    {
        printf("1---tianjiacheliangweizhi \n");
        printf("2---shanchucheliangweizhi \n");
        printf("3---xianshiquanbucheliangweizhi \n");
        printf("4---fanhuiliwoweizhizuijindecheliang \n");
        printf("5---tuichu \n");

        printf("qingxuanzexiangtingdegongnengbianhao \n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("qingshurucheliangde x zuobiaohe y zuobiao: \n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);

            arr[index].x = x;
            arr[index].y = y;

            index++;

            printf("tianjiachenggong,dianjihuichejixu \n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
        }
        if (code == 2)
        {
            if (index > 0)
            {
                index--;
                printf("shanchuchenggong,dianjihuichejixu \n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
            else
            {
                printf("wucheliangweizhixinxi,shanchushibai,dianjihuichejixu \n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
        }
        if (code == 3)
        {
            printf("suoyoucheliangweizhiruxia: \n");
            for (int i = 0; i < index; i++)
            {
                printf("di%dgecheliangdeweizhiwei(%d,%d)\n", i + 1, arr[i].x, arr[i].y);
            }
            printf("\n dianjihuichejixu \n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
        }
        if (code == 4)
        {
           printf("qingshurudangqianweizhizuobiao \n");
           int x;
           int y;
           scanf("%d",&x);
           scanf("%d",&y);

           double min =100000;
           int carID=0;
           for(int i=0;i<index;i++){
               int dx=x-arr[i].x;
               int dy=y-arr[i].y;
               double l=sqrt(dx*dx+dy*dy);

               if(min>l){
                   min=l;
                   carID=i;
               }
           }
           printf("yonghudangqianweizhiyudi%d gecheweijiliwei%1f,shizuixiaojuli \n",carID+1,min);

           printf("\n dianjihuichejixu \n");
           char xx;
           scanf("%c",&xx);
           scanf("%c",&xx);
        }
        if (code == 5)
        {
            printf("jieshu,dianjiuichetuichu \n");
            break;
        }
    }

    return 0;
}