#pragma once

class Item {
public: 
	virtual ~Item();
	virtual void setIcon(std::string const &, int);
	virtual void setIcon(TextureUVCoordinateSet const &);
	virtual void setMaxStackSize(unsigned char);
	virtual void setCategory(CreativeItemCategory);
	virtual void setStackedByData(bool);
	virtual void setMaxDamage(int);
	virtual void setHandEquipped();
	virtual void setUseAnimation(UseAnimation);
	virtual void setMaxUseDuration(int);
	virtual void canBeDepleted();
	virtual void canDestroySpecial(Block const *);
	virtual void getLevelDataForAuxValue(int);
	virtual void isStackedByData();
	virtual void getMaxDamage();
	virtual void getAttackDamage();
	virtual void isHandEquipped();
	virtual void isArmor();
	virtual void isDye();
	virtual void isFoil(ItemInstance const *);
	virtual void isThrowable();
	virtual void canDestroyInCreative();
	virtual void isLiquidClipItem(int);
	virtual void requiresInteract();
	virtual void appendFormattedHovertext(ItemInstance const &, Player const &, std::string &, bool);
	virtual void isValidRepairItem(ItemInstance const &, ItemInstance const &);
	virtual void getEnchantSlot();
	virtual void getEnchantValue();
	virtual void isComplex();
	virtual void getColor(ItemInstance const &);
	virtual void use(ItemInstance &, Player &);
	virtual void useOn(ItemInstance *, Player *, int, int, int, signed char, float, float, float);
	virtual void dispense(BlockSource &, Container &, int, Vec3 const &, signed char);
	virtual void useTimeDepleted(ItemInstance *, Level *, Player *);
	virtual void releaseUsing(ItemInstance *, Player *, int);
	virtual void getDestroySpeed(ItemInstance *, Block *);
	virtual void hurtEnemy(ItemInstance *, Mob *, Mob *);
	virtual void interactEnemy(ItemInstance *, Mob *, Player *);
	virtual void mineBlock(ItemInstance *, BlockID, int, int, int, Mob *);
	virtual void buildDescriptionName(ItemInstance const &);
	virtual void buildEffectDescriptionName(ItemInstance const &);
	virtual void readUserData(ItemInstance *, IDataInput &);
	virtual void writeUserData(ItemInstance const *, IDataOutput &, bool);
	virtual void getMaxStackSize(ItemInstance const *);
	virtual void inventoryTick(ItemInstance &, Level &, Entity &, int, bool);
	virtual void onCraftedBy(ItemInstance &, Level &, Player &);
	virtual void getInteractText();
	virtual void getAnimationFrameFor(Mob &);
	virtual void isEmissive(int);
	virtual void getIcon(int, int, bool);
	virtual void getIconYOffset();
	virtual void isMirroredArt();
};