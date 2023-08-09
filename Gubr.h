#ifndef GUBR_H_
#define GUBR_H_
#pragma once

#include <string>

using namespace std;

	void NewLoad();
	bool RemoveItem(string ItemNums);
	bool RemoveStore(vector<int> t_StoreNum);
	int Remove6092(int t_AddOrRemove, int t_Index);
	int Remove7078(int t_AddOrRemove, int t_Index);
	int Remove6022(int t_AddOrRemove, int t_Index);
	int Remove6938(int t_AddOrRemove, int t_Index);
	int Remove6561(int t_AddOrRemove, int t_Index);
	bool RemoveDistro(vector<int> t_Distro);
	int GetRemoveArray(int t_RemoveItem);
	int GetRemoveSize();
	int Get271Size();
	int Get6092Size();
	int Get7078Size();
	int Get6022Size();
	int Get6938Size();
	int Get6561Size();
	void DatePlusDays(struct tm* date, int days);
	bool SelectItem(string t_GetLine, int t_inHouse, int t_consol, int t_sevenEight, int t_otherImport, int t_6092, int t_6022, int t_6938, int t_6561, int t_7078, int t_OffSet);

#endif /* GUBR_H_ */

