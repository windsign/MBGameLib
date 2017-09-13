#ifndef MB_ATTACKINFO1_H
#define MB_ATTACKINFO1_H

#include <string>
#include <map>    

namespace MB{

struct AttackInfo_one
{
	const char *m_Name;

    short m_iIndex;

    float m_fPower1;
    float m_fPower2;
    float m_fPower3;
    float m_fIncrPowerCoe1;
    float m_fIncrPowerCoe2;
    float m_fIncrPowerCoe3;
    float m_fHitHardTime;
    float m_fAirHardTime;

	float m_fBlockHardLight;
	float m_fBlockHardMid;
	float m_fBlockHard_Heavy;
	float m_fBlockHardSuperH;
    float m_fDownHardTime;

	float  m_DestroyMonsterEndure1;
	float  m_DestroyMonsterEndure2;

	float  m_fSubEndure_Ability_1;
	float  m_fSubEndure_value_1;
	float  m_fSubEndure_Ability_2;
	float  m_fSubEndure_value_2;
	float  m_fSubEndure_Ability_3;
	float  m_fSubEndure_value_3;
    short m_iDamageType1;
    short m_iDamageType2;
    short m_iDamageType3;
    short m_iLevel;
    bool  m_bBreakGuard;
    bool  m_bAirEscape;

    float m_fAngle;
    float m_fWeight;

	float m_fBlockWeight_Light;
	float m_fBlockWeight_Mid;
	float m_fBlockWeight_Heavy;
	float m_fBlockWeight_SuperH;
    float m_fGroundWeight;
    float m_fUp;
    float m_fGroundUp;

	//new added
	int m_iSkillType;
    int m_iSkillType1;
	int m_iSpecialType;					//ÕÐÊ½³¤Ç¿»ò¶ÌÇ¿»òÎÞ
	float m_fBlockGuard;

	short m_nAirLevel;
	float m_fAirWeight;
	float m_fAirUp;

	int   m_nAttackBuff_01;
	int   m_nAttackBuff_Ability_01;
	int   m_nAttackBuff_02;
	int   m_nAttackBuff_Ability_02;
	int   m_nAttackBuff_03;
	int   m_nAttackBuff_Ability_03;

	//ÕÐÊ½ÆÆ»µÎäÆ÷
	int	  m_nDestroyWeapon_Ability_1;		
	int	  m_nDestroyWeapon_1;
	int	  m_nDestroyWeapon_Ability_2;		
	int	  m_nDestroyWeapon_2;
	int	  m_nDestroyWeapon_Ability_3;		
	int	  m_nDestroyWeapon_3;

	int   m_nWeaponSharpCost;	//ÕÐÊ½ÆÆ»µÎäÆ÷·æÀû¶È
	int  m_nIfLeagueDam;		//ÊÇ·ñÓÐÎóÉË
    bool m_bIfLeagueBuff;

	//ÕÐÊ½±ØÖÐ
	int	 m_nNoMiss_Ability_1;
	int	 m_nNoMiss_1;
	int	 m_nNoMiss_Ability_2;
	int	 m_nNoMiss_2;
	int	 m_nNoMiss_Ability_3;
	int	 m_nNoMiss_3;
	int	  m_nStandardRange;				//ÕÐÊ½³¤Ç¿±ê×¼¾àÀë

	int	m_nTaiJiImmune_Ability_1;
	int	m_nTaiJiImmune_1;
	int	m_nTaiJiImmune_Ability_2;
	int	m_nTaiJiImmune_2;
	int	m_nTaiJiImmune_Ability_3;
	int	m_nTaiJiImmune_3;
	//ÄÚ¹¦Ïà¹Ø
	int	m_nInternalBuff_01;
	int	m_nInternalBuff_Ability_01;
	int	m_nInternalBuff_02;
	int	m_nInternalBuff_Ability_02;
	int	m_nInternalBuff_03;
	int	m_nInternalBuff_Ability_03;
    int m_nComboType;
	int m_iNoLock;
	eAttackBuffType	m_nAttackBuffType;
	int m_iIsRangeDmg;
	bool m_bIsFxPierce;
	float m_fHitVelocityKeep;
	int m_iHurtAfterState;
	const char*	m_CritFx;
	const char* m_CritSound;
	float m_fLevitationTime;
	float m_fLevitationTimeGravity;
    class CHitFx
    {
    public:
        CHitFx() { m_Fx = m_TargetFx = m_Sound = m_StyleSound[0] = m_StyleSound[1] = m_StyleSound[2] = 0; m_Angle[0] = m_Angle[1] = 0; m_HitFxRotType = 0; m_CameraShake = 0;
		m_RandomFx[0] = m_RandomFx[1] = m_RandomFx[2] = 0;} 
        const char *m_Fx;
        const char *m_TargetFx;
        const char *m_Sound;
        const char *m_StyleSound[3];
        float m_Angle[2];
		short m_HitFxRotType;
		const char *m_CameraShake;
		const char *m_RandomFx[3];
    };

    CHitFx m_BlockFx;
    CHitFx m_BlockZeroFx;
    CHitFx m_HitFx;
	int m_iTorL[4];
	const char* m_TorLName[2];
	bool IsFlyClaw();
	float m_fGravityUp;
	float m_fGravityDown;
};

class CAttackInfoTable
{

};


}

#endif