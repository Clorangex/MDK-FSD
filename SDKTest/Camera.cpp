#include "Engine.h"
#include <cmath>
#include <Windows.h>


#define M_PI       3.14159265358979323846   // pi
MFVector Q_Rot, Q_AxisX, Q_AxisY, Q_AxisZ, Q_Pos;
float Q_Tangent;

float Q_GameWindowW = GetSystemMetrics(SM_CXSCREEN);
float Q_GameWindowH = GetSystemMetrics(SM_CYSCREEN);
float Q_GameWindowX = Q_GameWindowW / 2;
float Q_GameWindowY = Q_GameWindowH / 2;

void GetAxes(MFVector& Rotation, MFVector* X, MFVector* Y, MFVector* Z) {
	float radPitch = (Rotation.x * float(M_PI) / 180.f);
	float radYaw = (Rotation.y * float(M_PI) / 180.f);
	float radRoll = (Rotation.z * float(M_PI) / 180.f);


	float SP = sinf(radPitch);
	float CP = cosf(radPitch);
	float SY = sinf(radYaw);
	float CY = cosf(radYaw);
	float SR = sinf(radRoll);
	float CR = cosf(radRoll);


	X->x = CP * CY;
	X->y = CP * SY;
	X->z = SP;


	Y->x = SR * SP * CY - CR * SY;
	Y->y = SR * SP * SY + CR * CY;
	Y->z = -SR * CP;


	Z->x = -(CR * SP * CY + SR * SY);
	Z->y = CY * SR - CR * SP * SY;
	Z->z = CR * CP;
}

void UpdateComera(APlayerController localPlayerCtl)
{

	APlayerCameraManager* CMP = localPlayerCtl.PlayerCameraManager<APlayerCameraManager*>();

	FCameraCacheEntry CMCP = MDKHandler::get<APlayerCameraManager>(CMP).CameraCachePrivate<FCameraCacheEntry>();

	auto POV = CMCP.POV<FMinimalViewInfo>();

	Q_Tangent = tanf(POV.FOV() * float(M_PI) / 360.f);
	Q_Pos = POV.Location<FVector>();
	Q_Rot = POV.Rotation<FVector>();

	GetAxes(Q_Rot, &Q_AxisX, &Q_AxisY, &Q_AxisZ);
}



bool WorldToScreen(MFVector& Location, MFVector& Screen, int& Distance, MFVector& Temp) {
	float X, Y, Z = 0;
	int* bb = 0;
	Temp = Location - Q_Pos;
	Z = Temp.dot(Q_AxisX);
	if (Z > 1.f) {
		X = Temp.dot(Q_AxisY);
		Y = Temp.dot(Q_AxisZ);
		X = Q_GameWindowX + X * Q_GameWindowX / Q_Tangent / Z;
		Y = Q_GameWindowY - Y * Q_GameWindowX / Q_Tangent / Z;
		if (X > 0 && Y > 0 && X <= Q_GameWindowW && Y <= Q_GameWindowH) {
			Screen.x = X;
			Screen.y = Y;
			Distance = (int)Z / 100;
			return true;
		}
	}
	Distance = (int)Z / 100;
	return false;
}