#pragma once

#include <iostream>
#include <cstdint>
#include <Windows.h>
#include <tlhelp32.h>
#include "MDK/MDKImports.h"

#include "Memory.h"
class MFVector
{
public:

	float x;
	float y;
	float z;

	MFVector operator-(MFVector& v)
	{
		MFVector ov = { this->x - v.x,this->y - v.y,this->z - v.z };
		return ov;
	}

	void operator=(MFVector v)
	{
		this->x = v.x;
		this->y = v.y;
		this->z = v.z;
	}

	void operator=(FVector v)
	{
		this->x = v.X();
		this->y = v.Y();
		this->z = v.Z();
	}


	float dot(MFVector& v)
	{
		return this->x * v.x + this->y * v.y + this->z * v.z;
	}
};


void UpdateComera(APlayerController localPlayerCtl);

bool WorldToScreen(MFVector& Location, MFVector& Screen, int& Distance, MFVector& Temp);