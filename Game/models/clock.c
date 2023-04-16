#include "clock.h"

void ModelClock_Init(struct Mesh *clock) {
	Vector3_Set(&clock->vertices[0], -0.994301, 0.0, -0.106613);
	Vector3_Set(&clock->vertices[1], -0.988014, 0.0, 0.154364);
	Vector3_Set(&clock->vertices[2], -0.99971, 0.0, 2.40817e-2);
	Vector3_Set(&clock->vertices[3], -0.971879, 0.0, -0.235483);
	Vector3_Set(&clock->vertices[4], -0.971879, 0.1, -0.235483);
	Vector3_Set(&clock->vertices[5], -0.994301, 0.1, -0.106613);
	Vector3_Set(&clock->vertices[6], -0.99971, 0.1, 2.40817e-2);
	Vector3_Set(&clock->vertices[7], -0.988014, 0.1, 0.154364);
	Vector3_Set(&clock->vertices[8], -0.959413, 0.0, 0.282005);
	Vector3_Set(&clock->vertices[9], -0.959413, 0.1, 0.282005);
	Vector3_Set(&clock->vertices[10], -0.914396, 0.0, 0.404821);
	Vector3_Set(&clock->vertices[11], -0.914396, 0.1, 0.404821);
	Vector3_Set(&clock->vertices[12], -0.853733, 0.0, 0.52071);
	Vector3_Set(&clock->vertices[13], -0.853733, 0.1, 0.52071);
	Vector3_Set(&clock->vertices[14], -0.778463, 0.0, 0.62769);
	Vector3_Set(&clock->vertices[15], -0.778463, 0.1, 0.62769);
	Vector3_Set(&clock->vertices[16], -0.689873, 0.0, 0.72393);
	Vector3_Set(&clock->vertices[17], -0.689873, 0.1, 0.72393);
	Vector3_Set(&clock->vertices[18], -0.58948, 0.1, 0.807783);
	Vector3_Set(&clock->vertices[19], -0.58948, 0.0, 0.807783);
	Vector3_Set(&clock->vertices[20], -0.62769, 0.0, -0.778463);
	Vector3_Set(&clock->vertices[21], -0.72393, 0.0, -0.689873);
	Vector3_Set(&clock->vertices[22], -0.807783, 0.0, -0.58948);
	Vector3_Set(&clock->vertices[23], -0.877815, 0.0, -0.479);
	Vector3_Set(&clock->vertices[24], -0.932827, 0.0, -0.360324);
	Vector3_Set(&clock->vertices[25], -0.932827, 0.1, -0.360324);
	Vector3_Set(&clock->vertices[26], -0.877815, 0.1, -0.479);
	Vector3_Set(&clock->vertices[27], -0.89781, 0.1, 2.16271e-2);
	Vector3_Set(&clock->vertices[28], -0.887307, 0.1, 0.13863);
	Vector3_Set(&clock->vertices[29], -0.861621, 0.1, 0.253261);
	Vector3_Set(&clock->vertices[30], -0.821192, 0.1, 0.363558);
	Vector3_Set(&clock->vertices[31], -0.766713, 0.1, 0.467635);
	Vector3_Set(&clock->vertices[32], -0.699115, 0.1, 0.56371);
	Vector3_Set(&clock->vertices[33], -0.619555, 0.1, 0.65014);
	Vector3_Set(&clock->vertices[34], -0.529394, 0.1, 0.725447);
	Vector3_Set(&clock->vertices[35], -0.479, 0.1, 0.877815);
	Vector3_Set(&clock->vertices[36], -0.479, 0.0, 0.877815);
	Vector3_Set(&clock->vertices[37], -0.52071, 0.0, -0.853733);
	Vector3_Set(&clock->vertices[38], -0.62769, 0.1, -0.778463);
	Vector3_Set(&clock->vertices[39], -0.52071, 0.1, -0.853733);
	Vector3_Set(&clock->vertices[40], -0.56371, 0.1, -0.699115);
	Vector3_Set(&clock->vertices[41], -0.65014, 0.1, -0.619555);
	Vector3_Set(&clock->vertices[42], -0.72393, 0.1, -0.689873);
	Vector3_Set(&clock->vertices[43], -0.725447, 0.1, -0.529394);
	Vector3_Set(&clock->vertices[44], -0.78834, 0.1, -0.430176);
	Vector3_Set(&clock->vertices[45], -0.807783, 0.1, -0.58948);
	Vector3_Set(&clock->vertices[46], -0.837745, 0.1, -0.323596);
	Vector3_Set(&clock->vertices[47], -0.872816, 0.1, -0.21148);
	Vector3_Set(&clock->vertices[48], -0.892952, 0.1, -9.57457e-2);
	Vector3_Set(&clock->vertices[49], -0.892952, 5.0e-2, -9.57457e-2);
	Vector3_Set(&clock->vertices[50], -0.89781, 5.0e-2, 2.16271e-2);
	Vector3_Set(&clock->vertices[51], -0.887307, 5.0e-2, 0.13863);
	Vector3_Set(&clock->vertices[52], -0.861621, 5.0e-2, 0.253261);
	Vector3_Set(&clock->vertices[53], -0.821192, 5.0e-2, 0.363558);
	Vector3_Set(&clock->vertices[54], -0.766713, 5.0e-2, 0.467635);
	Vector3_Set(&clock->vertices[55], -0.699115, 5.0e-2, 0.56371);
	Vector3_Set(&clock->vertices[56], -0.619555, 5.0e-2, 0.65014);
	Vector3_Set(&clock->vertices[57], -0.529394, 5.0e-2, 0.725447);
	Vector3_Set(&clock->vertices[58], -0.430176, 5.0e-2, 0.78834);
	Vector3_Set(&clock->vertices[59], -0.430176, 0.1, 0.78834);
	Vector3_Set(&clock->vertices[60], -0.360324, 0.1, 0.932827);
	Vector3_Set(&clock->vertices[61], -0.360324, 0.0, 0.932827);
	Vector3_Set(&clock->vertices[62], -0.404821, 0.0, -0.914396);
	Vector3_Set(&clock->vertices[63], -0.404821, 0.1, -0.914396);
	Vector3_Set(&clock->vertices[64], -0.467635, 0.1, -0.766713);
	Vector3_Set(&clock->vertices[65], -0.56371, 5.0e-2, -0.699115);
	Vector3_Set(&clock->vertices[66], -0.467635, 5.0e-2, -0.766713);
	Vector3_Set(&clock->vertices[67], -0.65014, 5.0e-2, -0.619555);
	Vector3_Set(&clock->vertices[68], -0.725447, 5.0e-2, -0.529394);
	Vector3_Set(&clock->vertices[69], -0.78834, 5.0e-2, -0.430176);
	Vector3_Set(&clock->vertices[70], -0.837745, 5.0e-2, -0.323596);
	Vector3_Set(&clock->vertices[71], -0.872816, 5.0e-2, -0.21148);
	Vector3_Set(&clock->vertices[72], -0.363558, 5.0e-2, -0.821192);
	Vector3_Set(&clock->vertices[73], -0.323596, 5.0e-2, 0.837745);
	Vector3_Set(&clock->vertices[74], -0.323596, 0.1, 0.837745);
	Vector3_Set(&clock->vertices[75], -0.235483, 0.1, 0.971879);
	Vector3_Set(&clock->vertices[76], -0.235483, 0.0, 0.971879);
	Vector3_Set(&clock->vertices[77], -0.282005, 0.0, -0.959413);
	Vector3_Set(&clock->vertices[78], -0.282005, 0.1, -0.959413);
	Vector3_Set(&clock->vertices[79], -0.363558, 0.1, -0.821192);
	Vector3_Set(&clock->vertices[80], -0.253261, 0.1, -0.861621);
	Vector3_Set(&clock->vertices[81], -0.253261, 5.0e-2, -0.861621);
	Vector3_Set(&clock->vertices[82], -0.21148, 5.0e-2, 0.872816);
	Vector3_Set(&clock->vertices[83], -0.21148, 0.1, 0.872816);
	Vector3_Set(&clock->vertices[84], -0.106613, 0.1, 0.994301);
	Vector3_Set(&clock->vertices[85], -0.106613, 0.0, 0.994301);
	Vector3_Set(&clock->vertices[86], -0.154364, 0.0, -0.988014);
	Vector3_Set(&clock->vertices[87], -0.154364, 0.1, -0.988014);
	Vector3_Set(&clock->vertices[88], -0.13863, 0.1, -0.887307);
	Vector3_Set(&clock->vertices[89], -0.13863, 5.0e-2, -0.887307);
	Vector3_Set(&clock->vertices[90], -9.57457e-2, 5.0e-2, 0.892952);
	Vector3_Set(&clock->vertices[91], -9.57457e-2, 0.1, 0.892952);
	Vector3_Set(&clock->vertices[92], 2.40817e-2, 0.1, 0.99971);
	Vector3_Set(&clock->vertices[93], 2.40817e-2, 0.0, 0.99971);
	Vector3_Set(&clock->vertices[94], -2.40817e-2, 0.0, -0.99971);
	Vector3_Set(&clock->vertices[95], -2.40817e-2, 0.1, -0.99971);
	Vector3_Set(&clock->vertices[96], -2.16271e-2, 0.1, -0.89781);
	Vector3_Set(&clock->vertices[97], -2.16271e-2, 5.0e-2, -0.89781);
	Vector3_Set(&clock->vertices[98], -8.66025e-2, 5.0e-2, -5.0e-2);
	Vector3_Set(&clock->vertices[99], -8.66025e-2, 5.0e-2, 5.0e-2);
	Vector3_Set(&clock->vertices[100], 2.16271e-2, 5.0e-2, 0.89781);
	Vector3_Set(&clock->vertices[101], 2.16271e-2, 0.1, 0.89781);
	Vector3_Set(&clock->vertices[102], 0.13863, 0.1, 0.887307);
	Vector3_Set(&clock->vertices[103], 0.154364, 0.1, 0.988014);
	Vector3_Set(&clock->vertices[104], 0.154364, 0.0, 0.988014);
	Vector3_Set(&clock->vertices[105], 0.106613, 0.0, -0.994301);
	Vector3_Set(&clock->vertices[106], 0.106613, 0.1, -0.994301);
	Vector3_Set(&clock->vertices[107], 9.57457e-2, 0.1, -0.892952);
	Vector3_Set(&clock->vertices[108], 9.57457e-2, 5.0e-2, -0.892952);
	Vector3_Set(&clock->vertices[109], 0.0, 5.0e-2, -0.1);
	Vector3_Set(&clock->vertices[110], -8.66025e-2, 0.1, -5.0e-2);
	Vector3_Set(&clock->vertices[111], 0.0, 0.1, -0.1);
	Vector3_Set(&clock->vertices[112], -8.66025e-2, 0.1, 5.0e-2);
	Vector3_Set(&clock->vertices[113], 1.22465e-17, 0.1, 0.1);
	Vector3_Set(&clock->vertices[114], 1.22465e-17, 5.0e-2, 0.1);
	Vector3_Set(&clock->vertices[115], 8.66025e-2, 5.0e-2, 5.0e-2);
	Vector3_Set(&clock->vertices[116], 0.13863, 5.0e-2, 0.887307);
	Vector3_Set(&clock->vertices[117], 0.253261, 5.0e-2, 0.861621);
	Vector3_Set(&clock->vertices[118], 0.253261, 0.1, 0.861621);
	Vector3_Set(&clock->vertices[119], 0.282005, 0.1, 0.959413);
	Vector3_Set(&clock->vertices[120], 0.282005, 0.0, 0.959413);
	Vector3_Set(&clock->vertices[121], 0.235483, 0.0, -0.971879);
	Vector3_Set(&clock->vertices[122], 0.235483, 0.1, -0.971879);
	Vector3_Set(&clock->vertices[123], 0.21148, 0.1, -0.872816);
	Vector3_Set(&clock->vertices[124], 0.21148, 5.0e-2, -0.872816);
	Vector3_Set(&clock->vertices[125], 8.66025e-2, 5.0e-2, -5.0e-2);
	Vector3_Set(&clock->vertices[126], 8.66025e-2, 0.1, -5.0e-2);
	Vector3_Set(&clock->vertices[127], 8.66025e-2, 0.1, 5.0e-2);
	Vector3_Set(&clock->vertices[128], 0.323596, 5.0e-2, -0.837745);
	Vector3_Set(&clock->vertices[129], 0.363558, 5.0e-2, 0.821192);
	Vector3_Set(&clock->vertices[130], 0.363558, 0.1, 0.821192);
	Vector3_Set(&clock->vertices[131], 0.404821, 0.1, 0.914396);
	Vector3_Set(&clock->vertices[132], 0.404821, 0.0, 0.914396);
	Vector3_Set(&clock->vertices[133], 0.360324, 0.0, -0.932827);
	Vector3_Set(&clock->vertices[134], 0.360324, 0.1, -0.932827);
	Vector3_Set(&clock->vertices[135], 0.323596, 0.1, -0.837745);
	Vector3_Set(&clock->vertices[136], 0.430176, 0.1, -0.78834);
	Vector3_Set(&clock->vertices[137], 0.430176, 5.0e-2, -0.78834);
	Vector3_Set(&clock->vertices[138], 0.467635, 5.0e-2, 0.766713);
	Vector3_Set(&clock->vertices[139], 0.467635, 0.1, 0.766713);
	Vector3_Set(&clock->vertices[140], 0.52071, 0.1, 0.853733);
	Vector3_Set(&clock->vertices[141], 0.52071, 0.0, 0.853733);
	Vector3_Set(&clock->vertices[142], 0.479, 0.0, -0.877815);
	Vector3_Set(&clock->vertices[143], 0.479, 0.1, -0.877815);
	Vector3_Set(&clock->vertices[144], 0.529394, 0.1, -0.725447);
	Vector3_Set(&clock->vertices[145], 0.529394, 5.0e-2, -0.725447);
	Vector3_Set(&clock->vertices[146], 0.56371, 5.0e-2, 0.699115);
	Vector3_Set(&clock->vertices[147], 0.56371, 0.1, 0.699115);
	Vector3_Set(&clock->vertices[148], 0.62769, 0.1, 0.778463);
	Vector3_Set(&clock->vertices[149], 0.62769, 0.0, 0.778463);
	Vector3_Set(&clock->vertices[150], 0.58948, 0.0, -0.807783);
	Vector3_Set(&clock->vertices[151], 0.58948, 0.1, -0.807783);
	Vector3_Set(&clock->vertices[152], 0.619555, 0.1, -0.65014);
	Vector3_Set(&clock->vertices[153], 0.619555, 5.0e-2, -0.65014);
	Vector3_Set(&clock->vertices[154], 0.65014, 5.0e-2, 0.619555);
	Vector3_Set(&clock->vertices[155], 0.65014, 0.1, 0.619555);
	Vector3_Set(&clock->vertices[156], 0.72393, 0.1, 0.689873);
	Vector3_Set(&clock->vertices[157], 0.72393, 0.0, 0.689873);
	Vector3_Set(&clock->vertices[158], 0.689873, 0.0, -0.72393);
	Vector3_Set(&clock->vertices[159], 0.689873, 0.1, -0.72393);
	Vector3_Set(&clock->vertices[160], 0.699115, 0.1, -0.56371);
	Vector3_Set(&clock->vertices[161], 0.699115, 5.0e-2, -0.56371);
	Vector3_Set(&clock->vertices[162], 0.725447, 5.0e-2, 0.529394);
	Vector3_Set(&clock->vertices[163], 0.725447, 0.1, 0.529394);
	Vector3_Set(&clock->vertices[164], 0.807783, 0.1, 0.58948);
	Vector3_Set(&clock->vertices[165], 0.807783, 0.0, 0.58948);
	Vector3_Set(&clock->vertices[166], 0.778463, 0.0, -0.62769);
	Vector3_Set(&clock->vertices[167], 0.778463, 0.1, -0.62769);
	Vector3_Set(&clock->vertices[168], 0.766713, 0.1, -0.467635);
	Vector3_Set(&clock->vertices[169], 0.766713, 5.0e-2, -0.467635);
	Vector3_Set(&clock->vertices[170], 0.78834, 5.0e-2, 0.430176);
	Vector3_Set(&clock->vertices[171], 0.78834, 0.1, 0.430176);
	Vector3_Set(&clock->vertices[172], 0.837745, 0.1, 0.323596);
	Vector3_Set(&clock->vertices[173], 0.877815, 0.1, 0.479);
	Vector3_Set(&clock->vertices[174], 0.877815, 0.0, 0.479);
	Vector3_Set(&clock->vertices[175], 0.853733, 0.0, -0.52071);
	Vector3_Set(&clock->vertices[176], 0.853733, 0.1, -0.52071);
	Vector3_Set(&clock->vertices[177], 0.821192, 0.1, -0.363558);
	Vector3_Set(&clock->vertices[178], 0.821192, 5.0e-2, -0.363558);
	Vector3_Set(&clock->vertices[179], 0.837745, 5.0e-2, 0.323596);
	Vector3_Set(&clock->vertices[180], 0.872816, 0.1, 0.21148);
	Vector3_Set(&clock->vertices[181], 0.872816, 5.0e-2, 0.21148);
	Vector3_Set(&clock->vertices[182], 0.892952, 0.1, 9.57457e-2);
	Vector3_Set(&clock->vertices[183], 0.892952, 5.0e-2, 9.57457e-2);
	Vector3_Set(&clock->vertices[184], 0.89781, 0.1, -2.16271e-2);
	Vector3_Set(&clock->vertices[185], 0.89781, 5.0e-2, -2.16271e-2);
	Vector3_Set(&clock->vertices[186], 0.887307, 0.1, -0.13863);
	Vector3_Set(&clock->vertices[187], 0.887307, 5.0e-2, -0.13863);
	Vector3_Set(&clock->vertices[188], 0.861621, 0.1, -0.253261);
	Vector3_Set(&clock->vertices[189], 0.861621, 5.0e-2, -0.253261);
	Vector3_Set(&clock->vertices[190], 0.914396, 0.1, -0.404821);
	Vector3_Set(&clock->vertices[191], 0.932827, 0.1, 0.360324);
	Vector3_Set(&clock->vertices[192], 0.932827, 0.0, 0.360324);
	Vector3_Set(&clock->vertices[193], 0.914396, 0.0, -0.404821);
	Vector3_Set(&clock->vertices[194], 0.959413, 0.1, -0.282005);
	Vector3_Set(&clock->vertices[195], 0.959413, 0.0, -0.282005);
	Vector3_Set(&clock->vertices[196], 0.988014, 0.1, -0.154364);
	Vector3_Set(&clock->vertices[197], 0.988014, 0.0, -0.154364);
	Vector3_Set(&clock->vertices[198], 0.99971, 0.1, -2.40817e-2);
	Vector3_Set(&clock->vertices[199], 0.99971, 0.0, -2.40817e-2);
	Vector3_Set(&clock->vertices[200], 0.994301, 0.1, 0.106613);
	Vector3_Set(&clock->vertices[201], 0.994301, 0.0, 0.106613);
	Vector3_Set(&clock->vertices[202], 0.971879, 0.1, 0.235483);
	Vector3_Set(&clock->vertices[203], 0.971879, 0.0, 0.235483);

	Face_Set(&clock->triangles[0], 1, 2, 3);
	Face_Set(&clock->triangles[1], 2, 1, 4);
	Face_Set(&clock->triangles[2], 1, 5, 4);
	Face_Set(&clock->triangles[3], 5, 1, 6);
	Face_Set(&clock->triangles[4], 3, 6, 1);
	Face_Set(&clock->triangles[5], 6, 3, 7);
	Face_Set(&clock->triangles[6], 2, 7, 3);
	Face_Set(&clock->triangles[7], 7, 2, 8);
	Face_Set(&clock->triangles[8], 9, 8, 2);
	Face_Set(&clock->triangles[9], 8, 9, 10);
	Face_Set(&clock->triangles[10], 11, 10, 9);
	Face_Set(&clock->triangles[11], 10, 11, 12);
	Face_Set(&clock->triangles[12], 13, 12, 11);
	Face_Set(&clock->triangles[13], 12, 13, 14);
	Face_Set(&clock->triangles[14], 15, 14, 13);
	Face_Set(&clock->triangles[15], 14, 15, 16);
	Face_Set(&clock->triangles[16], 17, 16, 15);
	Face_Set(&clock->triangles[17], 16, 17, 18);
	Face_Set(&clock->triangles[18], 17, 19, 18);
	Face_Set(&clock->triangles[19], 19, 17, 20);
	Face_Set(&clock->triangles[20], 17, 21, 20);
	Face_Set(&clock->triangles[21], 17, 22, 21);
	Face_Set(&clock->triangles[22], 15, 22, 17);
	Face_Set(&clock->triangles[23], 15, 23, 22);
	Face_Set(&clock->triangles[24], 13, 23, 15);
	Face_Set(&clock->triangles[25], 13, 24, 23);
	Face_Set(&clock->triangles[26], 11, 24, 13);
	Face_Set(&clock->triangles[27], 11, 25, 24);
	Face_Set(&clock->triangles[28], 9, 25, 11);
	Face_Set(&clock->triangles[29], 9, 4, 25);
	Face_Set(&clock->triangles[30], 2, 4, 9);
	Face_Set(&clock->triangles[31], 4, 26, 25);
	Face_Set(&clock->triangles[32], 26, 4, 5);
	Face_Set(&clock->triangles[33], 5, 10, 26);
	Face_Set(&clock->triangles[34], 5, 8, 10);
	Face_Set(&clock->triangles[35], 6, 8, 5);
	Face_Set(&clock->triangles[36], 8, 6, 7);
	Face_Set(&clock->triangles[37], 26, 10, 12);
	Face_Set(&clock->triangles[38], 26, 12, 27);
	Face_Set(&clock->triangles[39], 27, 12, 28);
	Face_Set(&clock->triangles[40], 14, 28, 12);
	Face_Set(&clock->triangles[41], 28, 14, 29);
	Face_Set(&clock->triangles[42], 29, 14, 30);
	Face_Set(&clock->triangles[43], 30, 14, 31);
	Face_Set(&clock->triangles[44], 31, 14, 16);
	Face_Set(&clock->triangles[45], 31, 16, 32);
	Face_Set(&clock->triangles[46], 32, 16, 18);
	Face_Set(&clock->triangles[47], 32, 18, 33);
	Face_Set(&clock->triangles[48], 33, 18, 34);
	Face_Set(&clock->triangles[49], 34, 18, 19);
	Face_Set(&clock->triangles[50], 34, 19, 35);
	Face_Set(&clock->triangles[51], 35, 19, 36);
	Face_Set(&clock->triangles[52], 20, 36, 19);
	Face_Set(&clock->triangles[53], 36, 20, 37);
	Face_Set(&clock->triangles[54], 20, 38, 37);
	Face_Set(&clock->triangles[55], 20, 21, 38);
	Face_Set(&clock->triangles[56], 39, 38, 21);
	Face_Set(&clock->triangles[57], 38, 39, 40);
	Face_Set(&clock->triangles[58], 39, 41, 40);
	Face_Set(&clock->triangles[59], 39, 42, 41);
	Face_Set(&clock->triangles[60], 43, 42, 39);
	Face_Set(&clock->triangles[61], 43, 44, 42);
	Face_Set(&clock->triangles[62], 43, 45, 44);
	Face_Set(&clock->triangles[63], 46, 45, 43);
	Face_Set(&clock->triangles[64], 46, 47, 45);
	Face_Set(&clock->triangles[65], 46, 48, 47);
	Face_Set(&clock->triangles[66], 27, 48, 46);
	Face_Set(&clock->triangles[67], 27, 49, 48);
	Face_Set(&clock->triangles[68], 27, 28, 49);
	Face_Set(&clock->triangles[69], 28, 50, 49);
	Face_Set(&clock->triangles[70], 50, 28, 51);
	Face_Set(&clock->triangles[71], 29, 51, 28);
	Face_Set(&clock->triangles[72], 51, 29, 52);
	Face_Set(&clock->triangles[73], 30, 52, 29);
	Face_Set(&clock->triangles[74], 52, 30, 53);
	Face_Set(&clock->triangles[75], 31, 53, 30);
	Face_Set(&clock->triangles[76], 53, 31, 54);
	Face_Set(&clock->triangles[77], 32, 54, 31);
	Face_Set(&clock->triangles[78], 54, 32, 55);
	Face_Set(&clock->triangles[79], 33, 55, 32);
	Face_Set(&clock->triangles[80], 55, 33, 56);
	Face_Set(&clock->triangles[81], 34, 56, 33);
	Face_Set(&clock->triangles[82], 56, 34, 57);
	Face_Set(&clock->triangles[83], 34, 58, 57);
	Face_Set(&clock->triangles[84], 58, 34, 35);
	Face_Set(&clock->triangles[85], 35, 59, 58);
	Face_Set(&clock->triangles[86], 59, 35, 60);
	Face_Set(&clock->triangles[87], 35, 36, 60);
	Face_Set(&clock->triangles[88], 60, 36, 61);
	Face_Set(&clock->triangles[89], 37, 61, 36);
	Face_Set(&clock->triangles[90], 61, 37, 62);
	Face_Set(&clock->triangles[91], 37, 63, 62);
	Face_Set(&clock->triangles[92], 37, 38, 63);
	Face_Set(&clock->triangles[93], 40, 63, 38);
	Face_Set(&clock->triangles[94], 63, 40, 64);
	Face_Set(&clock->triangles[95], 40, 65, 64);
	Face_Set(&clock->triangles[96], 40, 41, 65);
	Face_Set(&clock->triangles[97], 66, 65, 41);
	Face_Set(&clock->triangles[98], 65, 66, 67);
	Face_Set(&clock->triangles[99], 66, 58, 67);
	Face_Set(&clock->triangles[100], 66, 57, 58);
	Face_Set(&clock->triangles[101], 68, 57, 66);
	Face_Set(&clock->triangles[102], 68, 56, 57);
	Face_Set(&clock->triangles[103], 69, 56, 68);
	Face_Set(&clock->triangles[104], 69, 55, 56);
	Face_Set(&clock->triangles[105], 70, 55, 69);
	Face_Set(&clock->triangles[106], 70, 54, 55);
	Face_Set(&clock->triangles[107], 71, 54, 70);
	Face_Set(&clock->triangles[108], 71, 53, 54);
	Face_Set(&clock->triangles[109], 72, 53, 71);
	Face_Set(&clock->triangles[110], 72, 52, 53);
	Face_Set(&clock->triangles[111], 50, 52, 72);
	Face_Set(&clock->triangles[112], 52, 50, 51);
	Face_Set(&clock->triangles[113], 72, 49, 50);
	Face_Set(&clock->triangles[114], 49, 72, 48);
	Face_Set(&clock->triangles[115], 71, 48, 72);
	Face_Set(&clock->triangles[116], 48, 71, 47);
	Face_Set(&clock->triangles[117], 70, 47, 71);
	Face_Set(&clock->triangles[118], 47, 70, 45);
	Face_Set(&clock->triangles[119], 69, 45, 70);
	Face_Set(&clock->triangles[120], 45, 69, 44);
	Face_Set(&clock->triangles[121], 68, 44, 69);
	Face_Set(&clock->triangles[122], 44, 68, 42);
	Face_Set(&clock->triangles[123], 68, 41, 42);
	Face_Set(&clock->triangles[124], 41, 68, 66);
	Face_Set(&clock->triangles[125], 67, 58, 59);
	Face_Set(&clock->triangles[126], 67, 59, 73);
	Face_Set(&clock->triangles[127], 73, 59, 74);
	Face_Set(&clock->triangles[128], 60, 74, 59);
	Face_Set(&clock->triangles[129], 74, 60, 75);
	Face_Set(&clock->triangles[130], 60, 61, 75);
	Face_Set(&clock->triangles[131], 75, 61, 76);
	Face_Set(&clock->triangles[132], 62, 76, 61);
	Face_Set(&clock->triangles[133], 76, 62, 77);
	Face_Set(&clock->triangles[134], 62, 78, 77);
	Face_Set(&clock->triangles[135], 62, 63, 78);
	Face_Set(&clock->triangles[136], 64, 78, 63);
	Face_Set(&clock->triangles[137], 78, 64, 79);
	Face_Set(&clock->triangles[138], 64, 80, 79);
	Face_Set(&clock->triangles[139], 64, 65, 80);
	Face_Set(&clock->triangles[140], 67, 80, 65);
	Face_Set(&clock->triangles[141], 80, 67, 73);
	Face_Set(&clock->triangles[142], 73, 81, 80);
	Face_Set(&clock->triangles[143], 81, 73, 82);
	Face_Set(&clock->triangles[144], 73, 74, 82);
	Face_Set(&clock->triangles[145], 82, 74, 83);
	Face_Set(&clock->triangles[146], 75, 83, 74);
	Face_Set(&clock->triangles[147], 83, 75, 84);
	Face_Set(&clock->triangles[148], 75, 76, 84);
	Face_Set(&clock->triangles[149], 84, 76, 85);
	Face_Set(&clock->triangles[150], 77, 85, 76);
	Face_Set(&clock->triangles[151], 85, 77, 86);
	Face_Set(&clock->triangles[152], 77, 87, 86);
	Face_Set(&clock->triangles[153], 77, 78, 87);
	Face_Set(&clock->triangles[154], 79, 87, 78);
	Face_Set(&clock->triangles[155], 87, 79, 88);
	Face_Set(&clock->triangles[156], 79, 81, 88);
	Face_Set(&clock->triangles[157], 79, 80, 81);
	Face_Set(&clock->triangles[158], 88, 81, 89);
	Face_Set(&clock->triangles[159], 82, 89, 81);
	Face_Set(&clock->triangles[160], 89, 82, 90);
	Face_Set(&clock->triangles[161], 82, 83, 90);
	Face_Set(&clock->triangles[162], 90, 83, 91);
	Face_Set(&clock->triangles[163], 84, 91, 83);
	Face_Set(&clock->triangles[164], 91, 84, 92);
	Face_Set(&clock->triangles[165], 84, 85, 92);
	Face_Set(&clock->triangles[166], 92, 85, 93);
	Face_Set(&clock->triangles[167], 86, 93, 85);
	Face_Set(&clock->triangles[168], 93, 86, 94);
	Face_Set(&clock->triangles[169], 86, 95, 94);
	Face_Set(&clock->triangles[170], 86, 87, 95);
	Face_Set(&clock->triangles[171], 88, 95, 87);
	Face_Set(&clock->triangles[172], 95, 88, 96);
	Face_Set(&clock->triangles[173], 88, 89, 96);
	Face_Set(&clock->triangles[174], 96, 89, 97);
	Face_Set(&clock->triangles[175], 90, 97, 89);
	Face_Set(&clock->triangles[176], 97, 90, 98);
	Face_Set(&clock->triangles[177], 90, 99, 98);
	Face_Set(&clock->triangles[178], 90, 91, 99);
	Face_Set(&clock->triangles[179], 91, 100, 99);
	Face_Set(&clock->triangles[180], 100, 91, 101);
	Face_Set(&clock->triangles[181], 92, 101, 91);
	Face_Set(&clock->triangles[182], 101, 92, 102);
	Face_Set(&clock->triangles[183], 92, 93, 102);
	Face_Set(&clock->triangles[184], 102, 93, 103);
	Face_Set(&clock->triangles[185], 103, 93, 104);
	Face_Set(&clock->triangles[186], 94, 104, 93);
	Face_Set(&clock->triangles[187], 104, 94, 105);
	Face_Set(&clock->triangles[188], 94, 106, 105);
	Face_Set(&clock->triangles[189], 94, 95, 106);
	Face_Set(&clock->triangles[190], 96, 106, 95);
	Face_Set(&clock->triangles[191], 106, 96, 107);
	Face_Set(&clock->triangles[192], 96, 97, 107);
	Face_Set(&clock->triangles[193], 107, 97, 108);
	Face_Set(&clock->triangles[194], 98, 108, 97);
	Face_Set(&clock->triangles[195], 108, 98, 109);
	Face_Set(&clock->triangles[196], 98, 110, 109);
	Face_Set(&clock->triangles[197], 98, 99, 110);
	Face_Set(&clock->triangles[198], 111, 110, 99);
	Face_Set(&clock->triangles[199], 110, 111, 112);
	Face_Set(&clock->triangles[200], 113, 112, 111);
	Face_Set(&clock->triangles[201], 112, 113, 114);
	Face_Set(&clock->triangles[202], 100, 114, 113);
	Face_Set(&clock->triangles[203], 114, 100, 115);
	Face_Set(&clock->triangles[204], 100, 101, 115);
	Face_Set(&clock->triangles[205], 115, 101, 116);
	Face_Set(&clock->triangles[206], 116, 101, 117);
	Face_Set(&clock->triangles[207], 102, 117, 101);
	Face_Set(&clock->triangles[208], 117, 102, 103);
	Face_Set(&clock->triangles[209], 103, 118, 117);
	Face_Set(&clock->triangles[210], 118, 103, 119);
	Face_Set(&clock->triangles[211], 103, 104, 119);
	Face_Set(&clock->triangles[212], 119, 104, 120);
	Face_Set(&clock->triangles[213], 105, 120, 104);
	Face_Set(&clock->triangles[214], 120, 105, 121);
	Face_Set(&clock->triangles[215], 105, 122, 121);
	Face_Set(&clock->triangles[216], 105, 106, 122);
	Face_Set(&clock->triangles[217], 107, 122, 106);
	Face_Set(&clock->triangles[218], 122, 107, 123);
	Face_Set(&clock->triangles[219], 107, 124, 123);
	Face_Set(&clock->triangles[220], 107, 108, 124);
	Face_Set(&clock->triangles[221], 109, 124, 108);
	Face_Set(&clock->triangles[222], 124, 109, 125);
	Face_Set(&clock->triangles[223], 109, 117, 125);
	Face_Set(&clock->triangles[224], 116, 117, 109);
	Face_Set(&clock->triangles[225], 109, 126, 116);
	Face_Set(&clock->triangles[226], 109, 110, 126);
	Face_Set(&clock->triangles[227], 112, 126, 110);
	Face_Set(&clock->triangles[228], 126, 112, 127);
	Face_Set(&clock->triangles[229], 112, 114, 127);
	Face_Set(&clock->triangles[230], 127, 114, 128);
	Face_Set(&clock->triangles[231], 115, 128, 114);
	Face_Set(&clock->triangles[232], 128, 115, 116);
	Face_Set(&clock->triangles[233], 126, 128, 116);
	Face_Set(&clock->triangles[234], 128, 126, 127);
	Face_Set(&clock->triangles[235], 125, 117, 118);
	Face_Set(&clock->triangles[236], 125, 118, 129);
	Face_Set(&clock->triangles[237], 129, 118, 130);
	Face_Set(&clock->triangles[238], 119, 130, 118);
	Face_Set(&clock->triangles[239], 130, 119, 131);
	Face_Set(&clock->triangles[240], 119, 120, 131);
	Face_Set(&clock->triangles[241], 131, 120, 132);
	Face_Set(&clock->triangles[242], 121, 132, 120);
	Face_Set(&clock->triangles[243], 132, 121, 133);
	Face_Set(&clock->triangles[244], 121, 134, 133);
	Face_Set(&clock->triangles[245], 121, 122, 134);
	Face_Set(&clock->triangles[246], 123, 134, 122);
	Face_Set(&clock->triangles[247], 134, 123, 135);
	Face_Set(&clock->triangles[248], 123, 136, 135);
	Face_Set(&clock->triangles[249], 123, 124, 136);
	Face_Set(&clock->triangles[250], 125, 136, 124);
	Face_Set(&clock->triangles[251], 136, 125, 129);
	Face_Set(&clock->triangles[252], 129, 137, 136);
	Face_Set(&clock->triangles[253], 137, 129, 138);
	Face_Set(&clock->triangles[254], 129, 130, 138);
	Face_Set(&clock->triangles[255], 138, 130, 139);
	Face_Set(&clock->triangles[256], 131, 139, 130);
	Face_Set(&clock->triangles[257], 139, 131, 140);
	Face_Set(&clock->triangles[258], 131, 132, 140);
	Face_Set(&clock->triangles[259], 140, 132, 141);
	Face_Set(&clock->triangles[260], 133, 141, 132);
	Face_Set(&clock->triangles[261], 141, 133, 142);
	Face_Set(&clock->triangles[262], 133, 143, 142);
	Face_Set(&clock->triangles[263], 133, 134, 143);
	Face_Set(&clock->triangles[264], 135, 143, 134);
	Face_Set(&clock->triangles[265], 143, 135, 144);
	Face_Set(&clock->triangles[266], 135, 137, 144);
	Face_Set(&clock->triangles[267], 135, 136, 137);
	Face_Set(&clock->triangles[268], 144, 137, 145);
	Face_Set(&clock->triangles[269], 138, 145, 137);
	Face_Set(&clock->triangles[270], 145, 138, 146);
	Face_Set(&clock->triangles[271], 138, 139, 146);
	Face_Set(&clock->triangles[272], 146, 139, 147);
	Face_Set(&clock->triangles[273], 140, 147, 139);
	Face_Set(&clock->triangles[274], 147, 140, 148);
	Face_Set(&clock->triangles[275], 140, 141, 148);
	Face_Set(&clock->triangles[276], 148, 141, 149);
	Face_Set(&clock->triangles[277], 142, 149, 141);
	Face_Set(&clock->triangles[278], 149, 142, 150);
	Face_Set(&clock->triangles[279], 142, 151, 150);
	Face_Set(&clock->triangles[280], 142, 143, 151);
	Face_Set(&clock->triangles[281], 144, 151, 143);
	Face_Set(&clock->triangles[282], 151, 144, 152);
	Face_Set(&clock->triangles[283], 144, 145, 152);
	Face_Set(&clock->triangles[284], 152, 145, 153);
	Face_Set(&clock->triangles[285], 146, 153, 145);
	Face_Set(&clock->triangles[286], 153, 146, 154);
	Face_Set(&clock->triangles[287], 146, 147, 154);
	Face_Set(&clock->triangles[288], 154, 147, 155);
	Face_Set(&clock->triangles[289], 148, 155, 147);
	Face_Set(&clock->triangles[290], 155, 148, 156);
	Face_Set(&clock->triangles[291], 148, 149, 156);
	Face_Set(&clock->triangles[292], 156, 149, 157);
	Face_Set(&clock->triangles[293], 150, 157, 149);
	Face_Set(&clock->triangles[294], 157, 150, 158);
	Face_Set(&clock->triangles[295], 150, 159, 158);
	Face_Set(&clock->triangles[296], 150, 151, 159);
	Face_Set(&clock->triangles[297], 152, 159, 151);
	Face_Set(&clock->triangles[298], 159, 152, 160);
	Face_Set(&clock->triangles[299], 152, 153, 160);
	Face_Set(&clock->triangles[300], 160, 153, 161);
	Face_Set(&clock->triangles[301], 153, 162, 161);
	Face_Set(&clock->triangles[302], 162, 153, 154);
	Face_Set(&clock->triangles[303], 154, 155, 162);
	Face_Set(&clock->triangles[304], 162, 155, 163);
	Face_Set(&clock->triangles[305], 155, 164, 163);
	Face_Set(&clock->triangles[306], 164, 155, 156);
	Face_Set(&clock->triangles[307], 156, 157, 164);
	Face_Set(&clock->triangles[308], 164, 157, 165);
	Face_Set(&clock->triangles[309], 157, 166, 165);
	Face_Set(&clock->triangles[310], 166, 157, 158);
	Face_Set(&clock->triangles[311], 158, 167, 166);
	Face_Set(&clock->triangles[312], 158, 159, 167);
	Face_Set(&clock->triangles[313], 159, 168, 167);
	Face_Set(&clock->triangles[314], 168, 159, 160);
	Face_Set(&clock->triangles[315], 160, 161, 168);
	Face_Set(&clock->triangles[316], 168, 161, 169);
	Face_Set(&clock->triangles[317], 161, 170, 169);
	Face_Set(&clock->triangles[318], 170, 161, 162);
	Face_Set(&clock->triangles[319], 162, 163, 170);
	Face_Set(&clock->triangles[320], 170, 163, 171);
	Face_Set(&clock->triangles[321], 163, 172, 171);
	Face_Set(&clock->triangles[322], 172, 163, 164);
	Face_Set(&clock->triangles[323], 164, 165, 172);
	Face_Set(&clock->triangles[324], 172, 165, 173);
	Face_Set(&clock->triangles[325], 173, 165, 174);
	Face_Set(&clock->triangles[326], 165, 175, 174);
	Face_Set(&clock->triangles[327], 175, 165, 166);
	Face_Set(&clock->triangles[328], 166, 176, 175);
	Face_Set(&clock->triangles[329], 166, 167, 176);
	Face_Set(&clock->triangles[330], 167, 177, 176);
	Face_Set(&clock->triangles[331], 177, 167, 168);
	Face_Set(&clock->triangles[332], 168, 178, 177);
	Face_Set(&clock->triangles[333], 168, 169, 178);
	Face_Set(&clock->triangles[334], 169, 179, 178);
	Face_Set(&clock->triangles[335], 179, 169, 170);
	Face_Set(&clock->triangles[336], 170, 171, 179);
	Face_Set(&clock->triangles[337], 179, 171, 180);
	Face_Set(&clock->triangles[338], 171, 173, 180);
	Face_Set(&clock->triangles[339], 173, 171, 172);
	Face_Set(&clock->triangles[340], 181, 180, 173);
	Face_Set(&clock->triangles[341], 180, 181, 182);
	Face_Set(&clock->triangles[342], 183, 182, 181);
	Face_Set(&clock->triangles[343], 182, 183, 184);
	Face_Set(&clock->triangles[344], 185, 184, 183);
	Face_Set(&clock->triangles[345], 184, 185, 186);
	Face_Set(&clock->triangles[346], 187, 186, 185);
	Face_Set(&clock->triangles[347], 186, 187, 188);
	Face_Set(&clock->triangles[348], 189, 188, 187);
	Face_Set(&clock->triangles[349], 188, 189, 190);
	Face_Set(&clock->triangles[350], 178, 190, 189);
	Face_Set(&clock->triangles[351], 190, 178, 179);
	Face_Set(&clock->triangles[352], 179, 180, 190);
	Face_Set(&clock->triangles[353], 190, 180, 182);
	Face_Set(&clock->triangles[354], 190, 182, 188);
	Face_Set(&clock->triangles[355], 188, 182, 184);
	Face_Set(&clock->triangles[356], 188, 184, 186);
	Face_Set(&clock->triangles[357], 177, 178, 189);
	Face_Set(&clock->triangles[358], 177, 189, 191);
	Face_Set(&clock->triangles[359], 191, 189, 187);
	Face_Set(&clock->triangles[360], 191, 187, 185);
	Face_Set(&clock->triangles[361], 185, 192, 191);
	Face_Set(&clock->triangles[362], 183, 192, 185);
	Face_Set(&clock->triangles[363], 183, 174, 192);
	Face_Set(&clock->triangles[364], 181, 174, 183);
	Face_Set(&clock->triangles[365], 173, 174, 181);
	Face_Set(&clock->triangles[366], 174, 193, 192);
	Face_Set(&clock->triangles[367], 193, 174, 175);
	Face_Set(&clock->triangles[368], 175, 194, 193);
	Face_Set(&clock->triangles[369], 175, 176, 194);
	Face_Set(&clock->triangles[370], 176, 191, 194);
	Face_Set(&clock->triangles[371], 191, 176, 177);
	Face_Set(&clock->triangles[372], 195, 194, 191);
	Face_Set(&clock->triangles[373], 194, 195, 196);
	Face_Set(&clock->triangles[374], 197, 196, 195);
	Face_Set(&clock->triangles[375], 196, 197, 198);
	Face_Set(&clock->triangles[376], 199, 198, 197);
	Face_Set(&clock->triangles[377], 198, 199, 200);
	Face_Set(&clock->triangles[378], 201, 200, 199);
	Face_Set(&clock->triangles[379], 200, 201, 202);
	Face_Set(&clock->triangles[380], 203, 202, 201);
	Face_Set(&clock->triangles[381], 202, 203, 204);
	Face_Set(&clock->triangles[382], 192, 204, 203);
	Face_Set(&clock->triangles[383], 204, 192, 193);
	Face_Set(&clock->triangles[384], 193, 196, 204);
	Face_Set(&clock->triangles[385], 193, 194, 196);
	Face_Set(&clock->triangles[386], 204, 196, 198);
	Face_Set(&clock->triangles[387], 204, 198, 202);
	Face_Set(&clock->triangles[388], 202, 198, 200);
	Face_Set(&clock->triangles[389], 195, 192, 203);
	Face_Set(&clock->triangles[390], 191, 192, 195);
	Face_Set(&clock->triangles[391], 195, 203, 197);
	Face_Set(&clock->triangles[392], 197, 203, 201);
	Face_Set(&clock->triangles[393], 197, 201, 199);
	Face_Set(&clock->triangles[394], 111, 100, 113);
	Face_Set(&clock->triangles[395], 100, 111, 99);
	Face_Set(&clock->triangles[396], 46, 24, 27);
	Face_Set(&clock->triangles[397], 24, 46, 23);
	Face_Set(&clock->triangles[398], 43, 23, 46);
	Face_Set(&clock->triangles[399], 23, 43, 22);
	Face_Set(&clock->triangles[400], 43, 21, 22);
	Face_Set(&clock->triangles[401], 21, 43, 39);
	Face_Set(&clock->triangles[402], 25, 27, 24);
	Face_Set(&clock->triangles[403], 27, 25, 26);
}

struct Mesh* ModelClock_New() {
	struct Mesh *clock= New_Mesh(404, 204);
	ModelClock_Init(clock);
	return clock;
}