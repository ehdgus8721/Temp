#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main() {
	int main_check;
	int menu;
	int size;
	int order_num = 1;
	int pay;
	
	while(1) {
		system("clear");

		cout<< "                                      ('-.     _   .-')      ('-.       .-') _               .-') _                                                            "<<endl;
		cout<< "      .--,   .--,                    ( OO ).-.( '.( OO )_   ( OO ).-.  (  OO) )             ( OO ) )                                         .--,   .--,       "<<endl;
		cout<< "  .--'  /.--'  /                     / . --. / ,--.   ,--.) / . --. /,(_)----.   ,-.-') ,--./ ,--,'  ,----.                              .--'  /.--'  /        "<<endl;
		cout<< " /  ---`/  ---`                      | \\-.  \\  |   `.'   |  | \\-.  \\ |       |   |  |OO)|   \\ |  |\\ '  .-./-')                          /  ---`/  ---`   "<<endl;
		cout<< "`--'   `--'                        .-'-'  |  | |         |.-'-'  |  |'--.   /    |  |  \\|    \\|  | )|  |_( O- )                        `--'   `--'           "<<endl;
		cout<< "                                    \\| |_.'  | |  |'.'|  | \\| |_.'  |(_/   /     |  |(_/|  .     |/ |  | .--, \\                                             "<<endl;
		cout<< "                                     |  .-.  | |  |   |  |  |  .-.  | /   /___  ,|  |_.'|  |\\    | (|  | '. (_/                                               "<<endl;
		cout<< "                                     |  | |  | |  |   |  |  |  | |  ||        |(_|  |   |  | \\   |  |  '--'  |                                                "<<endl;
		cout<< "                                     `--' `--' `--'   `--'  `--' `--'`--------'  `--'   `--'  `--'   `------'                                                  "<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;                                       
		cout<< "                       _  .-')     ('-.    .-')    .-') _      ('-.                 _  .-')     ('-.         .-') _  .-') _                                    "<<endl;
		cout<< "      .--,   .--,      ( \\( -O )  _(  OO)  ( OO ). (  OO) )    ( OO ).-.            ( \\( -O )   ( OO ).-.    ( OO ) )(  OO) )              .--,   .--,       "<<endl;
		cout<< "  .--'  /.--'  /        ,------. (,------.(_)---\\_)/     '._   / . --. / ,--. ,--.   ,------.   / . --. /,--./ ,--,' /     '._         .--'  /.--'  /         "<<endl;
		cout<< " /  ---`/  ---`         |   /`. ' |  .---'/    _ | |'--...__)  | \\-.  \\  |  | |  |   |   /`. '  | \\-.  \\ |   \\ |  |\\ |'--...__)       /  ---`/  ---`     "<<endl;
		cout<< "`--'   `--'             |  /  | | |  |    \\  :` `. '--.  .--'.-'-'  |  | |  | | .-') |  /  | |.-'-'  |  ||    \\|  | )'--.  .--'      `--'   `--'             "<<endl;
		cout<< "                        |  |_.' |(|  '--.  '..`''.)   |  |    \\| |_.'  | |  |_|( OO )|  |_.' | \\| |_.'  ||  .     |/    |  |                                 "<<endl;
		cout<< "                        |  .  '.' |  .--' .-._)   \\   |  |     |  .-.  | |  | | `-' /|  .  '.'  |  .-.  ||  |\\    |     |  |                                 "<<endl;
		cout<< "                        |  |\\  \\  |  `---.\\       /   |  |     |  | |  |('  '-'(_.-' |  |\\  \\   |  | |  ||  | \\   |     |  |                             "<<endl;
		cout<< "                        `--' '--' `------' `-----'    `--'     `--' `--'  `-----'    `--' '--'  `--' `--'`--'  `--'     `--'                                   "<<endl;
		cout<<endl;
		cout<< "------------------------------------------------------------------------------------------------------------------------------------------------------------   "<<endl;
		cout<<endl;
		cout<< "                               _         ___          _                       ____          ___        _ _                                                     "<<endl;
 		cout<< "                              / |       / _ \\ _ __ __| | ___ _ __            |___ \\        / _ \\ _   _(_) |_                                                "<<endl;
 		cout<< "                              | |      | | | | '__/ _` |/ _ \\ '__|             __) |      | | | | | | | | __|                                                 "<<endl;
		cout<< "                              | |  _   | |_| | | | (_| |  __/ |               / __/   _   | |_| | |_| | | |_                                                   "<<endl;
 		cout<< "                              |_| (_)   \\___/|_|  \\__,_|\\___|_|              |_____| (_)   \\__\\_\\\\__,_|_|\\__|                                          "<<endl;
		cout<<endl;
		cout<< "------------------------------------------------------------------------------------------------------------------------------------------------------------   "<<endl;
		cout<<endl;
	
		cout<< " 무엇을 하시겠습니까? (1. 주문하기, 2. 나가기) : ";
		cin >> main_check;
	
		if(main_check == 2)
			break;
		else if(main_check == 1) {
			system("clear");
	
			cout<< " ---------- M  E  N  U --------- "<<endl;
			cout<< " |   1. 김밥                    | "<<endl;
			cout<< " |   2. 라면                    | "<<endl;
			cout<< " |   3. 떡볶이                  | "<<endl;
			cout<< " |   4. 돈까스                  | "<<endl;
			cout<< " |   5. 만둣국                  | "<<endl;
			cout<< " |   6. 김치찌개                | "<<endl;
			cout<< " |   7. 된짱찌개                | "<<endl;
			cout<< " |   8. 순대국밥                | "<<endl;
			cout<< " |   9. 제육덮밥                | "<<endl;
			cout<< " |   10. 칼국수                 | "<<endl;
			cout<< " |                              | "<<endl;
			cout<< " |   0. 주문완료                | "<<endl;
			cout<< " |   99. 도움말                 | "<<endl;
			cout<< " ------------------------------- "<<endl;
			cout<<endl;


			while(1) {
				cout<< " > 메뉴 (1~10) : ";
				cin >> menu;
				if(menu == 0) {
					system("clear");
					cout<<"		 -------------결제 방법을 선택하십시오.-------------"<<endl;
					cout<<endl;
					cout<<endl;
					cout<< "						                               __              "<<endl;
					cout<< "						                              |  \\            "<<endl;
					cout<< "						   _______  ______    _______ | $$____         "<<endl;
					cout<< " .------..------..------..------.     		 /       \\|      \\  /       \\| $$    \\     "<<endl;
					cout<< " |C.--. ||A.--. ||R.--. ||D.--. |		|  $$$$$$$ \\$$$$$$\\|  $$$$$$$| $$$$$$$\\        "<<endl;
					cout<< " | :/\\: || (\\/) || :(): || :/\\: |		| $$      /      $$ \\$$    \\ | $$  | $$      "<<endl;
					cout<< " | :\\/: || :\\/: || ()() || (__) |		| $$_____|  $$$$$$$ _\\$$$$$$\\| $$  | $$        "<<endl;
					cout<< " | '--'C|| '--'A|| '--'R|| '--'D|		 \\$$     \\\\$$    $$|       $$| $$  | $$     "<<endl;
					cout<< " `------'`------'`------'`------'		  \\$$$$$$$ \\$$$$$$$ \\$$$$$$$  \\$$   \\$$    "<<endl;
					cout<< "---------------------------------------------------------------------------------------------- "<<endl;
					cout<<endl;
					while(1) {
						cout<< " 1. 카드결제   2. 현금결제"<<endl;
						cout<<endl;
						cout<< " >> 결제 방법을 선택하십시오. : ";
						cin >> pay;

						if(pay == 1) {
							cout<<endl;
							cout<<" >>> 카드 결제가 완료되었습니다. <<<"<<endl;
							cout<<endl;
							cout<<" ● 주문번호 : "<<order_num<<endl;
							order_num += 1;
							cout<<endl;
							cout<<" >>> 주문번호를 꼭 확인하시고 기다려주십시오. <<<"<<endl;
							sleep(3);
							break;
						} else if(pay == 2) {
							cout<<endl;
							cout<<" >>> 현금 결제가 완료되었습니다. <<<"<<endl;
							cout<<endl;
							cout<<" ● 주문번호 : "<<order_num<<endl;
							order_num += 1;
							cout<<endl;
							cout<<" >>> 주문번호를 꼭 확인하시고 기다려주십시오. <<<"<<endl;
							sleep(3);
							break;
						} else {
							cout<<"올바른 결제 방식을 선택하십시오."<<endl;
							continue;
						}
					} break;
				} else if(menu == 99) {
					system("clear");
					cout<<endl;
					cout<<"     !!! 주문 중 도움말을 출력하면 주문 목록을 잃어버리게 됩니다. !!!"<<endl;
					cout<<endl;
					sleep(2);
					cout<<"                _              ____ _   _ ___ ____  _____       "<<endl;
					cout<<"   ___  _ __ __| | ___ _ __   / ___| | | |_ _|  _ \\| ____|     "<<endl;
					cout<<"  / _ \\| '__/ _` |/ _ \\ '__| | |  _| | | || || | | |  _|      "<<endl;
					cout<<" | (_) | | | (_| |  __/ |    | |_| | |_| || || |_| | |___       "<<endl;
					cout<<"  \\___/|_|  \\__,_|\\___|_|     \\____|\\___/|___|____/|_____| "<<endl;
					cout<<endl;
					cout<<" ---------------------------------------------------------------"<<endl;
					cout<<endl;
					cout<<endl;
					cout<<" 1. 주문하실 메뉴의 번호를 입력하세요. "<<endl;
					cout<<endl;
					cout<<" 2. 선택하신 메뉴의 수량을 입력하세요. "<<endl;
					cout<<endl;
					cout<<" 3. 원하신 메뉴를 모두 선택하셨으면 0번을 입력하여 주문을 완료하세요. "<<endl;
					cout<<endl;
					cout<<" 4. 주문번호를 꼭 확인하시고 기다려 주시면 알림을 통해 식사를 수령하세요. "<<endl;
					cout<<endl;
					cout<<"             ※※※ 도움말은 15초간 안내됩니다. ※※※"<<endl;
					sleep(15);

					system("clear");
					
					cout<< " ---------- M  E  N  U --------- "<<endl;
					cout<< " |   1. 김밥                    | "<<endl;
					cout<< " |   2. 라면                    | "<<endl;
					cout<< " |   3. 떡볶이                  | "<<endl;
					cout<< " |   4. 돈까스                  | "<<endl;
					cout<< " |   5. 만둣국                  | "<<endl;
					cout<< " |   6. 김치찌개                | "<<endl;
					cout<< " |   7. 된짱찌개                | "<<endl;
					cout<< " |   8. 순대국밥                | "<<endl;
					cout<< " |   9. 제육덮밥                | "<<endl;
					cout<< " |   10. 칼국수                 | "<<endl;
					cout<< " |                              | "<<endl;
					cout<< " |   0. 주문완료                | "<<endl;
					cout<< " |   99. 도움말                 | "<<endl;
					cout<< " ------------------------------- "<<endl;
					cout<<endl;
					continue;
				} else if(menu>10) {
					cout<<endl;
					cout<<"error! : 메뉴 또는 수량을 다시 확인하세요."<<endl;
					cout<<endl;
					continue;
				} else
					cout<< " > 수량 : ";
					cin >> size;
					if(size<=0) {
						cout<<endl;
						cout<<"error! : 메뉴 또는 수량을 다시 확인하세요."<<endl;
						cout<<endl;
						continue;
					}
					cout<< " ------------------------------- "<<endl;
					cout<< " 주문목록 : "<<menu <<"번 "<<size<<"개"<<endl;
					cout<<endl;
					cout<<endl;
			}
			
		}

		continue;
	}
                                                                                

	return 0;
}
