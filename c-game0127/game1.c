#include <stdio.h>
#include <ncurses.h>
#include <string.h>
#include <stdlib.h>
#include "back.c"
#include "cat.c"
#include "catback.c"
#include "enemy.c"
#include "attack.c"
#include "e_attack.c"
#include "display.c"
#include "cloud1.c"
#include "cloud2.c"
#include "judgment.c"
#include <unistd.h>

int main(void)
{
    int     x, y, w, h, ex, ey, ax, ay;
    int     flag = 0; //"最後に動いた向き"をキープする
    int     count = 0;
    int		jumpflag = 0; //ジャンプを続行させるかどうかのフラグ
    char    enter;

    int		judge = 0;
    int		dis_num = 50;
    int		enex;

    initscr();
    noecho();
    cbreak();
    curs_set(0);
    timeout(0);
    start_color();	

    getmaxyx(stdscr, h, w);
    x = w/10;
    y = h/4;

    ex = w-10;
    ey = y/3;
    int e_flag = 1;

    while (1)
    {
        erase();
        back(w, h);
	cloud1(10, 3);
	cloud2(20, 4);
	
	display(w/3*2, h/2+10, dis_num/10, dis_num%10);
	
	enemy(ex, ey);
	if (ey+7 != h/3*2) ey++;

	judge = judgment(ex, ey, ax, ay); //当たり判定
	if (judge == 1) {
		dis_num--;		//あたったらdisplay変更
		judge = 0;	//初期値に戻す
	}


        if (y+6 != h/3*2) {
		if (jumpflag == 0) {
			y++; //重力
		}
	}

	if (ax <= w) {
		//ax = ax+2;
		ax++;
		attack(ax, ay);
	}

	if (enex >= 0) {	//敵の攻撃
		enex--;
		e_attack(enex, ey);
	}

        if (enter == 'd') { //動いた方向に移動と向く
            cat(x, y);
            flag = 0;
        }

        if (enter == 'a') { //上と同様
            catback(x, y);
            flag = 1;
        }
        if (enter != 'a' &&  enter != 'b') { //なにもおされない場合
            if (flag == 0) cat(x, y);
            if (flag == 1) catback(x, y);
            else cat(x, y);
        }

	if (enter == 'j') {
		attack(x+6, y+3);
		ax = x+6;
		ay = y+3;
	}

        refresh();

        enter = getch(); //入力
        //mymove(enter, &x, &y);
	if (enter == 'd') x++;
	if (enter == 'a') x--;
	if (jumpflag == 1) {	//ジャンプフラグが立っていたらジャンプ続行
	       	y--;	//ジャンプ
                count++;
	}
        if (count >= 10) { //カウントが１０以上だったら
		count = 0;
		jumpflag = 0;
	}

        if (enter == ' ') {
            if (y+6 == h/3*2) {
		jumpflag = 1;
		}
	}

	if (e_flag == 1) {

	//敵の攻撃
	enex = ex;
	e_attack(enex, ey);
	e_flag = 0;
	}

        if (enter == 'q') break;
        usleep(40000);

    }

    printf("%d\n", h);
    endwin();
    return (0);
}

//メモ
/*
地面についてるときだけジャンプ
加速度をつけたい

ミス：重力がy--、ジャンプがy++で、
スペースを押してもジャンプしなかった理由が
相殺されていたため。

リタイアでslコマンドの汽車で
プレイヤーを轢く。

リプレイ機能をつける。

どこに矢印を投げると、勝ちやすいか
ニューラルネットワークを使って設計する。
'*/
