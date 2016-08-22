#pragma once

class Mob {
public: 
	virtual ~Mob();
	virtual void lerpTo(Vec3 const &, Vec2 const &, int);
	virtual void normalTick();
	virtual void baseTick();
	virtual void rideTick();
	virtual void isBaby();
	virtual void getHeadHeight();
	virtual void interactWithPlayer(Player &);
	virtual void canInteractWith(Player &);
	virtual void getInteractText(Player &);
	virtual void playerTouch(Player &);
	virtual void isImmobile();
	virtual void isPickable();
	virtual void isPushable();
	virtual void isShootable();
	virtual void isSneaking();
	virtual void isAlive();
	virtual void hurt(EntityDamageSource const &, int);
	virtual void animateHurt();
	virtual void doFireHurt(int);
	virtual void handleEntityEvent(EntityEvent, int);
	//virtual void __imp___cxa_pure_virtual;
	virtual void setOnFire(int);
	virtual void causeFallDamage(float);
	virtual void canAddRider(Entity &);
	virtual void tickLeash();
	virtual void stopRiding(bool, bool);
	virtual void buildDebugInfo(std::string &);
	virtual void outOfWorld();
	virtual void readAdditionalSaveData(CompoundTag const &);
	virtual void addAdditionalSaveData(CompoundTag &);
	virtual void _playStepSound(BlockPos const &, int);
	virtual void postInit();
	virtual void knockback(Entity *, int, float, float);
	virtual void die(EntityDamageSource const &);
	virtual void resolveDeathLoot(int);
	virtual void canSee(Entity const &);
	virtual void onLadder(bool);
	virtual void spawnAnim();
	virtual void isSleeping();
	virtual void setSneaking(bool);
	virtual void isSprinting();
	virtual void setSprinting(bool);
	virtual void getVoicePitch();
	virtual void playAmbientSound();
	virtual void getAmbientSoundInterval();
	virtual void getItemInHandIcon(ItemInstance const *, int);
	virtual void getSpeed();
	virtual void setSpeed(float);
	virtual void getJumpPower();
	virtual void heal(int);
	virtual void hurtEffects(EntityDamageSource const &, int);
	virtual void getMeleeWeaponDamageBonus(Mob *);
	virtual void getMeleeKnockbackBonus();
	virtual void actuallyHurt(int, EntityDamageSource const *);
	virtual void isInvertedHealAndHarm();
	virtual void travel(float, float);
	virtual void applyFinalFriction(float);
	virtual void updateWalkAnim();
	virtual void aiStep();
	virtual void pushEntities();
	virtual void lookAt(Entity *, float, float);
	virtual void isLookingAtAnEntity();
	virtual void canSpawn(bool);
	virtual void finalizeMobSpawn();
	virtual void shouldDespawn();
	virtual void getAttackAnim(float);
	virtual void performRangedAttack(Mob &, float);
	virtual void getCarriedItem();
	virtual void setCarriedItem(ItemInstance const &);
	virtual void getItemUseDuration();
	virtual void swing();
	virtual void ate();
	virtual void getMaxHeadXRot();
	virtual void getLastHurtByMob();
	virtual void setLastHurtByMob(Mob *);
	virtual void getLastHurtByPlayer();
	virtual void setLastHurtByPlayer(Player *);
	virtual void getLastHurtMob();
	virtual void setLastHurtMob(Entity *);
	virtual void getTarget();
	virtual void setTarget(Mob *);
	virtual void canAttack(Mob *, bool);
	virtual void isAlliedTo(Mob *);
	virtual void doHurtTarget(Entity *);
	virtual void canBeControlledByRider();
	virtual void teleportTo(Vec3 const &);
	virtual void getMutableAttribute(Attribute const &);
	virtual void getAttribute(Attribute const &);
	virtual void getEquipmentCount();
	virtual void getArmorValue();
	virtual void getArmorCoverPercentage();
	virtual void hurtArmor(int);
	virtual void setArmor(ArmorSlot, ItemInstance const *);
	virtual void getArmor(ArmorSlot);
	virtual void getAllArmor();
	virtual void getAllArmor();
	virtual void getArmorTypeHash();
	virtual void dropHeldItem();
	virtual void dropAllArmor();
	virtual void dropAllGear(int);
	virtual void drop(ItemInstance const *, bool);
	virtual void sendInventory();
	virtual void canBeAffected(MobEffectInstance const &);
	virtual void getDamageAfterMagicAbsorb(EntityDamageSource const &, int);
	virtual void _removeWhenFarAway();
	virtual void getDeathLoot();
	virtual void dropDeathLoot(int);
	virtual void dropRareDeathLoot();
	virtual void jumpFromGround();
	virtual void _pickUpItem(ItemEntity &);
	virtual void updateAi();
	virtual void newServerAiStep();
	virtual void _serverAiMobStep();
	virtual void _getSoundVolume();
	virtual void _getAmbientSound();
	virtual void _getHurtSound();
	virtual void _getDeathSound();
	virtual void getDamageAfterArmorAbsorb(EntityDamageSource const &, int);
	virtual void getExperienceReward();
	virtual void useNewAi();
	virtual void onEffectAdded(MobEffectInstance &);
	virtual void onEffectUpdated(MobEffectInstance const &);
	virtual void onEffectRemoved(MobEffectInstance &);
	virtual void registerAttributes();
};