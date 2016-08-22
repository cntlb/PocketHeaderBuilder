#pragma once

class Player {
public: 
	virtual ~Player();
	virtual void remove();
	virtual void getAddPacket();
	virtual void normalTick();
	virtual void rideTick();
	virtual void getRidingHeight();
	virtual void getHeadHeight();
	virtual void isImmobile();
	virtual void isPushable();
	virtual void isPushableByPiston();
	virtual void isShootable();
	virtual void isCreativeModeAllowed();
	virtual void hurt(EntityDamageSource const &, int);
	virtual void onBounceStarted(BlockPos const &, FullBlock const &);
	virtual void handleEntityEvent(EntityEvent, int);
	virtual void awardKillScore(Entity &, int);
	virtual void setEquippedSlot(ArmorSlot, int, int);
	virtual void setEquippedSlot(ArmorSlot, ItemInstance const &);
	virtual void getEntityTypeId();
	virtual void getPortalCooldown();
	virtual void getPortalWaitTime();
	virtual void sendMotionPacketIfNeeded();
	virtual void lavaHurt();
	virtual void readAdditionalSaveData(CompoundTag const &);
	virtual void addAdditionalSaveData(CompoundTag &);
	virtual void die(EntityDamageSource const &);
	virtual void isSleeping();
	virtual void getSpeed();
	virtual void setSpeed(float);
	virtual void travel(float, float);
	virtual void aiStep();
	virtual void getCarriedItem();
	virtual void getItemUseDuration();
	virtual void dropAllGear(int);
	virtual void drop(ItemInstance const *, bool);
	virtual void sendInventory();
	virtual void dropDeathLoot(int);
	virtual void dropRareDeathLoot();
	virtual void jumpFromGround();
	virtual void updateAi();
	virtual void getExperienceReward();
	virtual void useNewAi();
	virtual void registerAttributes();
	virtual void prepareRegion(ChunkSource &);
	virtual void destroyRegion();
	virtual void suspendRegion();
	virtual void onPrepChangeDimension();
	virtual void onDimensionChanged();
	virtual void tickWorld(Tick const &);
	virtual void moveView();
	virtual void setName(std::string const &);
	virtual void _checkMovementStatistiscs(Vec3 const &);
	virtual void respawn();
	virtual void resetPos(bool);
	virtual void isInTrialMode();
	virtual void hasResource(int);
	virtual void completeUsingItem();
	virtual void drop(ItemInstance const *);
	virtual void setGlobalPermissions(GlobalPermissionsLevel);
	virtual void setPermissions(UserPermissionsLevel);
	virtual void startCrafting(BlockPos const &);
	virtual void startStonecutting(BlockPos const &);
	virtual void startDestroying();
	virtual void stopDestroying();
	virtual void openContainer(int, BlockPos const &);
	virtual void openContainer(int, EntityUniqueID const &);
	virtual void openFurnace(int, BlockPos const &);
	virtual void openEnchanter(int, BlockPos const &);
	virtual void openAnvil(BlockPos const &);
	virtual void openBrewingStand(int, BlockPos const &);
	virtual void openHopper(int, BlockPos const &);
	virtual void openHopper(int, EntityUniqueID const &);
	virtual void openDispenser(int, BlockPos const &, bool);
	virtual void openPortfolio();
	virtual void openHorseInventory(int, EntityUniqueID const &);
	virtual void canOpenContainerScreen();
	virtual void displayChatMessage(std::string const &, std::string const &);
	virtual void displayClientMessage(std::string const &);
	virtual void displayLocalizableMessage(std::string const &, std::vector<std::string, std::allocator<std::string> > const &);
	virtual void startSleepInBed(BlockPos const &);
	virtual void stopSleepInBed(bool, bool);
	virtual void canStartSleepInBed();
	virtual void getSleepTimer();
	virtual void openTextEdit(BlockEntity *);
	virtual void isLocalPlayer();
	virtual void stopLoading();
	virtual void setPlayerGameTypePacketReceived(GameType);
	virtual void setPlayerGameType(GameType);
	virtual void _crit(Entity &);
	virtual void getTelemetry();
	virtual void sendTelemetryPacket(TelemetryEventPacket const &);
	//virtual void __imp___cxa_pure_virtual;
	virtual void deleteContainerManager();
	virtual void setFieldOfViewModifier(float);
	virtual void isPositionRelevant(DimensionId, BlockPos const &);
	virtual void isEntityRelevant(Entity const &);
	virtual void onMovePlayerPacketNormal(Vec3 const &, Vec2 const &);
};