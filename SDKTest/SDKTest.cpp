#include "Engine.h"


int main()
{
	Memory::Memory();

	Memory::load("FSD-Win64-Shipping.exe");

	printf("base: 0x%llX\n", Memory::getBaseAddress());

	if (Memory::getStatus() != Memory::loaded)
		DebugBreak();

	while (true)
	{
		//cheat logic

		//first make a new frame

		MDKHandler::newFrame();

		//get UWorld, obviously we need to read the address in the .data section fist ._.
		//the secont param in the template is the class + lower we want to disclude
		//it will just cache UWorld without UObect and all classes below, meaning that uobject is empty
		//also its your job to set a good lowerbound, if you try to read something from uobject, its 0
		//its no problem rereading somewhere in the loop the pointer again with a lower lowerbound, it will read those bytes then
		//e.g now you choose uobject as lowerbound but later you need uobject, you reread and specify MDKBase as lowerbound, or leave empty
		UWorld world = MDKHandler::get<UWorld, UObject>(Memory::read<DWORD64>(Memory::getBaseAddress() + 0x6497370));

		if (!world)
		{
			puts("world not initialized!");
			DebugBreak();
		}
		//DO NOT write anything into the function parameters, they are there for other purposes
		//(check write logic if you really wanna know)
		printf("VTable: %p\n", world.vtable());

		ULevel* levelPtr = world.PersistentLevel<ULevel*>();

		TArray<AActor*> actors = MDKHandler::readSingle<ULevel, TArray<AActor*>>(levelPtr, &ULevel::Actors);

		printf("AAS count:%d Data:%p\n", actors.Count, actors.Data);

		//follow the function to see the type the sdk defined
		//the type in these CMember or DMember or SMember
		//ignore these macros, they are there for the MDK
		auto gameInstancePtr = world.OwningGameInstance<UGameInstance*>();
		printf("gameinstance: %p\n", gameInstancePtr);
		if (!gameInstancePtr)
			continue;


		const TArray<ULocalPlayer*> tlocalPlayer =
			MDKHandler::readSingle<UGameInstance, TArray<ULocalPlayer*>>(gameInstancePtr, &UGameInstance::LocalPlayers);

		printf("Localplayer count: %d\n", tlocalPlayer.Count);
		printf("Data: %p\n", tlocalPlayer.Data);
		if (!tlocalPlayer.Data)
			continue;

		//data contains a pointer, nothing we can really cache
		ULocalPlayer* player = Memory::read<ULocalPlayer*>(tlocalPlayer.Data);

		printf("player: %p\n", player);
		if (!player)
			continue;

		//we dont need the entire ULocalPlayer class, just read the playerController
		//first specify the base class where the member is in, in our case its the playerController
		//and then specify the type you wanna read, in our case its AFortPlayerControllerAthena*
		//in the params specify the pointer to the ULocalPlayer class and then the member
		APlayerController* playerControllerPtr = MDKHandler::readSingle<ULocalPlayer, APlayerController*>(player, &ULocalPlayer::PlayerController);


		printf("playerControllerPtr: %p\n", playerControllerPtr);

		if (!playerControllerPtr)
			continue;

		//we dont need the uobject and larger data, more would be waste
		//i just showed above a example with AAthena_PlayerController_C, but theres no data we really need, we just need
		//APlayerController
		auto playerController = MDKHandler::get<APlayerController, UObject>(playerControllerPtr);

		UpdateComera(playerController);

		Sleep(3);
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
