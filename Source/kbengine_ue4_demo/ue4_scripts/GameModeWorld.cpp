// Fill out your copyright notice in the Description page of Project Settings.

#include "kbengine_ue4_demo.h"
#include "GameModeWorld.h"
#include "KBEngine.h"
#include "Entity.h"

AGameModeWorld::AGameModeWorld(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}


void AGameModeWorld::installEvents()
{
	Super::installEvents();

	// in world
	// 这个事件触发时我们需要切换地图到游戏世界地图
	KBENGINE_REGISTER_EVENT("addSpaceGeometryMapping", addSpaceGeometryMapping);
	KBENGINE_REGISTER_EVENT("onEnterWorld", onEnterWorld);
	KBENGINE_REGISTER_EVENT("onLeaveWorld", onLeaveWorld);
	KBENGINE_REGISTER_EVENT("set_position", set_position);
	KBENGINE_REGISTER_EVENT("set_direction", set_direction);
	KBENGINE_REGISTER_EVENT("updatePosition", updatePosition);
	KBENGINE_REGISTER_EVENT("onControlled", onControlled);

	// in world(register by scripts)
	KBENGINE_REGISTER_EVENT("set_HP", set_HP);
	KBENGINE_REGISTER_EVENT("set_MP", set_MP);
	KBENGINE_REGISTER_EVENT("set_HP_Max", set_HP_Max);
	KBENGINE_REGISTER_EVENT("set_MP_Max", set_MP_Max);
	KBENGINE_REGISTER_EVENT("set_level", set_level);
	KBENGINE_REGISTER_EVENT("set_name", set_name);
	KBENGINE_REGISTER_EVENT("set_state", set_state);
	KBENGINE_REGISTER_EVENT("set_moveSpeed", set_moveSpeed);
	KBENGINE_REGISTER_EVENT("set_modelScale", set_modelScale);
	KBENGINE_REGISTER_EVENT("set_modelID", set_modelID);
	KBENGINE_REGISTER_EVENT("recvDamage", recvDamage);
	KBENGINE_REGISTER_EVENT("otherAvatarOnJump", otherAvatarOnJump);
	KBENGINE_REGISTER_EVENT("onAddSkill", onAddSkill);
}

// Called when the game starts or when spawned
void AGameModeWorld::BeginPlay()
{
	check(KBEngineApp::getSingleton().isInitialized());

	// 如果已经有被创建的实体，说明他们在上一个场景未来得及跳转之前已经通知创建了，但由于我们的world场景并没有来得及创建，这部分实体进入世界事件已经漏掉
	// 此时我们需要再次触发一次onEnterWorld，让表现层能够在游戏场景中创建出所有的实体
	KBEngineApp::ENTITIES_MAP& entities = KBEngineApp::getSingleton().entities();
	for (auto& item : entities)
	{
		Entity* pEntity = item.Value;
	}

	Super::BeginPlay();
}

void AGameModeWorld::addSpaceGeometryMapping_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::onEnterWorld_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::onLeaveWorld_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_position_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_direction_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::updatePosition_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::onControlled_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_HP_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_MP_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_HP_Max_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_MP_Max_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_level_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_name_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_state_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_moveSpeed_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_modelScale_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_modelID_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::recvDamage_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::otherAvatarOnJump_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::onAddSkill_Implementation(const UKBEventData* pEventData)
{

}
