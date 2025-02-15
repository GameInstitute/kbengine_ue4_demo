/*
	Generated by KBEngine!
	Please do not modify this file!
	Please inherit this module, such as: (class Monster : public MonsterBase)
	tools = kbcmd
*/

#pragma once
#include "KBECommon.h"
#include "Entity.h"
#include "KBETypes.h"
#include "EntityCallMonsterBase.h"

namespace KBEngine
{

class Method;
class Property;
class MemoryStream;

// defined in */scripts/entity_defs/Monster.def
	// Please inherit and implement "class Monster : public MonsterBase"
class KBENGINEPLUGINS_API MonsterBase : public Entity
{
public:
	EntityBaseEntityCall_MonsterBase* pBaseEntityCall;
	EntityCellEntityCall_MonsterBase* pCellEntityCall;

	int32 HP;
	virtual void onHPChanged(int32 oldValue) {}
	int32 HP_Max;
	virtual void onHP_MaxChanged(int32 oldValue) {}
	int32 MP;
	virtual void onMPChanged(int32 oldValue) {}
	int32 MP_Max;
	virtual void onMP_MaxChanged(int32 oldValue) {}
	uint32 entityNO;
	virtual void onEntityNOChanged(uint32 oldValue) {}
	int32 forbids;
	virtual void onForbidsChanged(int32 oldValue) {}
	uint32 modelID;
	virtual void onModelIDChanged(uint32 oldValue) {}
	uint8 modelScale;
	virtual void onModelScaleChanged(uint8 oldValue) {}
	uint8 moveSpeed;
	virtual void onMoveSpeedChanged(uint8 oldValue) {}
	FString name;
	virtual void onNameChanged(const FString& oldValue) {}
	int8 state;
	virtual void onStateChanged(int8 oldValue) {}
	uint8 subState;
	virtual void onSubStateChanged(uint8 oldValue) {}
	uint32 uid;
	virtual void onUidChanged(uint32 oldValue) {}
	uint32 utype;
	virtual void onUtypeChanged(uint32 oldValue) {}

	virtual void recvDamage(int32 arg1, int32 arg2, int32 arg3, int32 arg4) = 0; 

	void onComponentsEnterworld() override;
	void onComponentsLeaveworld() override;

	void onGetBase() override;
	void onGetCell() override;
	void onLoseCell() override;

	EntityCall* getBaseEntityCall() override;
	EntityCall* getCellEntityCall() override;


	void onRemoteMethodCall(MemoryStream& stream) override;
	void onUpdatePropertys(MemoryStream& stream) override;
	void callPropertysSetMethods() override;

	MonsterBase();
	virtual ~MonsterBase();

	void attachComponents() override;
	void detachComponents() override;

};

}