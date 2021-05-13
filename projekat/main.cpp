#include <iostream>
#include "list.hpp"
#include "dinstring.hpp"

using namespace std;

enum AgentName{Sage,
Cypher,
Sova,
Brimstone,
Viper,
Pheonix,
Raze,
Reyna,
Jett,
Killjoy,
Omen,
Breach,
Skye,
Yoru,
Astra};
enum AgentClass{Duelist, Controller, Sentinel, Initiator};

class Agent
{
private:
    AgentName agentname;
    AgentClass agentclass;
public:
    Agent(){}
    Agent(AgentName aagentname, AgentClass aagentclass)
    {
        agentname = aagentname;
        agentclass = aagentclass;
    }
    Agent(const Agent &AgentCopy)
    {
        agentname = AgentCopy.agentname;
        agentclass = AgentCopy.agentclass;
    }
    ~Agent()
    {
        cout << "objekat klase Agent je dekonstruisan" << endl;
    }
    AgentName getAgentName()
    {
        return agentname;
    }
    AgentClass getAgentClass()
    {
        return agentclass;
    }
    void setAgentName(AgentName NewAgentName)
    {
        agentname = NewAgentName;
    }
    void setAgentClass(AgentClass NewAgentClass)
    {
        agentclass = NewAgentClass;
    }
    friend ostream& operator<<(ostream& os, Agent& agent)
    {
        os << agent.getAgentName() << endl;
        os << agent.getAgentClass() << endl;
    }
};

class Weapon
{
protected:
    unsigned int HeadDamage;
    unsigned int BodyDamage;
    unsigned int LegsDamage;
    unsigned int Price;
    double EquipTime;
public:
    Weapon(){}
    Weapon(unsigned int HHeadDamage,unsigned int BBodyDamage, unsigned int LLegsDamage, unsigned int PPrice, double EEquipTime)
    {
        HeadDamage = HHeadDamage;
        BodyDamage = BBodyDamage;
        LegsDamage = LLegsDamage;
        Price = PPrice;
        EquipTime = EEquipTime;
    }
    Weapon(const Weapon &W1)
    {
        HeadDamage = W1.HeadDamage;
        BodyDamage = W1.BodyDamage;
        LegsDamage = W1.LegsDamage;
        Price = W1.Price;
        EquipTime = W1.EquipTime;
    }
    ~Weapon(){
        cout << "objekat klase weapon je unisten" << endl;
    }
    unsigned int getHeadDamage()
    {
        return HeadDamage;
    }
    unsigned int getBodyDamage()
    {
        return BodyDamage;
    }
    unsigned int getLegsDamage()
    {
        return LegsDamage;
    }
    unsigned int getPrice()
    {
        return Price;
    }
    double getEquipTime()
    {
        return EquipTime;
    }
    void setHeadDamage(unsigned int NewHeadDamage)
    {
        HeadDamage = NewHeadDamage;
    }
    void setBodyDamage(unsigned int NewBodyDamage)
    {
        BodyDamage = NewBodyDamage;
    }
    void setLegsDamage(unsigned int NewLegsDamage)
    {
        LegsDamage = NewLegsDamage;
    }
    void setPrice(unsigned int NewPrice)
    {
        Price = NewPrice;
    }
    void setEquipTime(unsigned int NewEquipTime)
    {
        EquipTime = NewEquipTime;
    }
    virtual bool Use()=0;
    virtual bool Equip()=0;

};
enum Color{white, green, yellowgreen, greenyellow, yellow, cyan, pink, red};

class Crosshair
{
private:
    Color CrosshairColor;
    bool OutlinePresence;
    double OutlineOpacity;
    int OutlineThickness;
    bool CenterDotPresence;
    bool FadeCrosshairWithFixingError;
    bool ShowSpectatedPlayerCrosshair;
    bool ShowInnerLines;
    bool MovementErrorInnerLines;
    bool FixingErrorInnerLines;
    bool MovementErrorOuterLines;
    bool FixingErrorOuterLines;
    double CenterDotOpacity;
    int CenterDotThickness;
    bool InnerLinePresence;
    double InnerLineOpacity;
    int InnerLineLenght;
    int InnerLineThickness;
    int InnerLineOffset;
    double OuterLineOpacity;
    int OuterLineLenght;
    int OuterLineThickness;
    int OuterLineOffset;
public:
    Crosshair(){}
    Crosshair(Color CCrosshairColor,
              bool OOutlinePresence,
              double OOutlineOpacity,
              int OOutlineThickness,
              bool CCenterDotPresence,
              bool FFadeCrosshairWithFixingError,
              bool SShowSpectatedPlayerCrosshair,
              bool SShowInnerLines,
              bool MMovementErrorInnerLines,
              bool FFixingErrorInnerLines,
              bool MMovementErrorOuterLines,
              bool FFixingErrorOuterLines,
              double CCenterDotOpacity,
              int CCenterDotThickness,
              bool IInnerLinePresence,
              double IInnerLineOpacity,
              int IInnerLineLenght,
              int IInnerLineThickness,
              int IInnerLineOffset,
              double OOuterLineOpacity,
              int OOuterLineLenght,
              int OOuterLineThickness,
              int OOuterLineOffset)
    {
        CrosshairColor = CCrosshairColor;
        OutlinePresence = OOutlinePresence;
        OutlineOpacity = OOutlineOpacity;
        OutlineThickness = OOutlineThickness;
        CenterDotPresence = CCenterDotPresence;
        FadeCrosshairWithFixingError = FFadeCrosshairWithFixingError;
        ShowSpectatedPlayerCrosshair = SShowSpectatedPlayerCrosshair;
        ShowInnerLines = SShowInnerLines;
        MovementErrorInnerLines = MMovementErrorInnerLines;
        FixingErrorInnerLines = FFixingErrorInnerLines;
        MovementErrorOuterLines = MMovementErrorOuterLines;
        FixingErrorOuterLines = FFixingErrorOuterLines;
        CenterDotOpacity = CCenterDotOpacity;
        CenterDotThickness = CCenterDotThickness;
        InnerLinePresence = IInnerLinePresence;
        InnerLineOpacity = IInnerLineOpacity;
        InnerLineLenght = IInnerLineLenght;
        InnerLineThickness = IInnerLineThickness;
        InnerLineOffset = IInnerLineOffset;
        OuterLineOpacity = OOuterLineOpacity;
        OuterLineLenght = OOuterLineLenght;
        OuterLineThickness = OOuterLineThickness;
        OuterLineOffset = OOuterLineOffset;
    }
    Crosshair(const Crosshair &C1)
    {
        CrosshairColor = C1.CrosshairColor;
        OutlinePresence = C1.OutlinePresence;
        OutlineOpacity = C1.OutlineOpacity;
        OutlineThickness = C1.OutlineThickness;
        CenterDotPresence = C1.CenterDotPresence;
        FadeCrosshairWithFixingError = C1.FadeCrosshairWithFixingError;
        ShowSpectatedPlayerCrosshair = C1.ShowSpectatedPlayerCrosshair;
        ShowInnerLines = C1.ShowInnerLines;
        MovementErrorInnerLines = C1.MovementErrorInnerLines;
        FixingErrorInnerLines = C1.FixingErrorInnerLines;
        MovementErrorOuterLines = C1.MovementErrorOuterLines;
        FixingErrorOuterLines = C1.FixingErrorOuterLines;
        CenterDotOpacity = C1.CenterDotOpacity;
        CenterDotThickness = C1.CenterDotThickness;
        InnerLinePresence = C1.InnerLinePresence;
        InnerLineOpacity = C1.InnerLineOpacity;
        InnerLineLenght = C1.InnerLineLenght;
        InnerLineThickness = C1.InnerLineThickness;
        InnerLineOffset = C1.InnerLineOffset;
        OuterLineOpacity = C1.OuterLineOpacity;
        OuterLineLenght = C1.OuterLineLenght;
        OuterLineThickness = C1.OuterLineThickness;
        OuterLineOffset = C1.OuterLineOffset;
    }
    ~Crosshair()
    {
        cout << "objekat klase Crosshair je unisten" << endl;
    }
    Color getCrosshairColor()
    {
        return CrosshairColor;
    }
    bool getOutlinePresence()
    {
        return OutlinePresence;
    }
    double getOutlineOpacity()
    {
        return OutlineOpacity;
    }
    int getOutlineThickness()
    {
        return OutlineThickness;
    }
    bool getCenterDotPresence()
    {
        return CenterDotPresence;
    }
    bool getFadeCrosshairWithFixingError()
    {
        return FadeCrosshairWithFixingError;
    }
    bool getShowSpectatedPlayerCrosshair()
    {
        return ShowSpectatedPlayerCrosshair;
    }
    bool getShowInnerLines()
    {
        return ShowInnerLines;
    }
    bool getMovementErrorInnerLines()
    {
        return MovementErrorInnerLines;
    }
    bool getFixingErrorInnerLines()
    {
        return FixingErrorInnerLines;
    }
    bool getMovementErrorOuterLines()
    {
        return MovementErrorOuterLines;
    }
    bool getFixingErrorOuterLines()
    {
        return FixingErrorOuterLines;
    }
    double getCenterDotOpacity()
    {
        return CenterDotOpacity;
    }
    int getCenterDotThickness()
    {
        return CenterDotThickness;
    }
    bool getInnerLinePresence()
    {
        return InnerLinePresence;
    }
    double getInnerLineOpacity()
    {
        return InnerLineOpacity;
    }
    int getInnerLineLenght()
    {
        return InnerLineLenght;
    }
    int getInnerLineThickness()
    {
        return InnerLineThickness;
    }
    int getInnerLineOffset()
    {
        return InnerLineOffset;
    }
    double getOuterLineOpacity()
    {
        return OuterLineOpacity;
    }
    int getOuterLineLenght()
    {
        return OuterLineLenght;
    }
    int getOuterLineThickness()
    {
        return OuterLineThickness;
    }
    int getOuterLineOffset()
    {
        return OuterLineOffset;
    }
/*------------------------------------------*/
    void setCrosshairColor(Color NewCrosshairColor)
    {
        CrosshairColor = NewCrosshairColor;
    }
    void setOutlinePresence(bool NewOutlinePresence)
    {
        OutlinePresence = NewOutlinePresence;
    }
    void setOutlineOpacity(double NewOutlineOpacity)
    {
        OutlineOpacity = NewOutlineOpacity;
    }
    void setOutlineThickness(int NewOutlineThickness)
    {
        OutlineThickness = NewOutlineThickness;
    }
    void setCenterDotPresence(bool NewCenterDotPresence)
    {
        CenterDotPresence = NewCenterDotPresence;
    }
    void setFadeCrosshairWithFixingError(bool NewFadeCrosshairWithFixingError)
    {
        FadeCrosshairWithFixingError = NewFadeCrosshairWithFixingError;
    }
    void setShowSpectatedPlayerCrosshair(bool NewShowSpectatedPlayerCrosshair)
    {
        ShowSpectatedPlayerCrosshair = NewShowSpectatedPlayerCrosshair;
    }
    void setShowInnerLines(bool NewShowInnerLines)
    {
        ShowInnerLines = NewShowInnerLines;
    }
    void setMovementErrorInnerLines(bool NewMovementErrorInnerLines)
    {
        MovementErrorInnerLines = NewMovementErrorInnerLines;
    }
    void setFixingErrorInnerLines(bool NewsetFixingErrorInnerLines)
    {
        FixingErrorInnerLines = NewsetFixingErrorInnerLines;
    }
    void setMovementErrorOuterLines(bool NewMovementErrorOuterLines)
    {
        MovementErrorOuterLines = NewMovementErrorOuterLines;
    }
    void setFixingErrorOuterLines(bool NewFixingErrorOuterLines)
    {
        FixingErrorOuterLines = NewFixingErrorOuterLines;
    }
    void setCenterDotOpacity(double NewCenterDotOpacity)
    {
        CenterDotOpacity = NewCenterDotOpacity;
    }
    void setCenterDotThickness(int NewCenterDotThickness)
    {
        CenterDotThickness = NewCenterDotThickness;
    }
    void setInnerLinePresence(bool NewInnerLinePresence)
    {
        InnerLinePresence = NewInnerLinePresence;
    }
    void setInnerLineOpacity(double NewInnerLineOpacity)
    {
        InnerLineOpacity = NewInnerLineOpacity;
    }
    void setInnerLineLenght(int NewInnerLineLenght)
    {
        InnerLineLenght = NewInnerLineLenght;
    }
    void setInnerLineThickness(int NewInnerLineThickness)
    {
        InnerLineThickness = NewInnerLineThickness;
    }
    void setInnerLineOffset(int NewInnerLineOffset)
    {
        InnerLineOffset = NewInnerLineOffset;
    }
    void setOuterLineOpacity(double NewOuterLineOpacity)
    {
        OuterLineOpacity = NewOuterLineOpacity;
    }
    void setOuterLineLenght(int NewOuterLineLenght)
    {
        OuterLineLenght = NewOuterLineLenght;
    }
    void setOuterLineThickness(int NewOuterLinethickness)
    {
        OuterLineThickness = NewOuterLinethickness;
    }
    void setOuterLineOffset(int NewOuterLineOffset)
    {
        OuterLineOffset = NewOuterLineOffset;
    }
};

enum GunName{
    Classic,
    Shorty,
    Frenzy,
    Ghost,
    Sherrif,
    Stringer,
    Spectre,
    Bucky,
    Judge,
    Bulldog,
    Guardian,
    Phantom,
    Vandal,
    Marshal,
    Operator,
    Ares,
    Odin,
    Melee};

enum GunType{
    Pistol,
    Rifle,
    Sniper,
    Shotgun,
    Smg,
    Mg,
    Knife};

class Gun : public Weapon
{
private:
    bool HasSecondaryFire;
    GunName gunname;
    GunType guntype;
    double RateOfFire;
    double RunSpread;
    double StandSpread;
    double WalkSpread;
    double CrouchSpread;
public:
    Gun(){}
    Gun(bool HHasSecondaryFire,
        GunName ggunname,
        GunType gguntype,
        double RRateOfFire,
        double RRunSpread,
        double SStandSpread,
        double WWalkSpread,
        double CCrouchSpread)
    {
        HasSecondaryFire = HHasSecondaryFire;
        gunname = ggunname;
        guntype = gguntype;
        RateOfFire = RRateOfFire;
        RunSpread = RRunSpread;
        StandSpread = SStandSpread;
        WalkSpread = WWalkSpread;
        CrouchSpread = CCrouchSpread;
    }
    Gun(const Gun &G1)
    {
        HasSecondaryFire = G1.HasSecondaryFire;
        gunname = G1.gunname;
        guntype = G1.guntype;
        RateOfFire = G1.RateOfFire;
        RunSpread = G1.RunSpread;
        StandSpread = G1.StandSpread;
        WalkSpread = G1.WalkSpread;
        CrouchSpread = G1.CrouchSpread;
    }
    ~Gun()
    {
        cout << "objekat klase Gun je unisten" << endl;
    }
    bool getHasSecondaryFire()
    {
        return HasSecondaryFire;
    }
    GunName getGunName()
    {
        return gunname;
    }
    GunType getGunType()
    {
        return guntype;
    }
    double getRateOfFire()
    {
        return RateOfFire;
    }
    double getRunSpread()
    {
        return RunSpread;
    }
    double getStandSpread()
    {
        return StandSpread;
    }
    double getWalkSpread()
    {
        return WalkSpread;
    }
    double getCrouchSpread()
    {
        return CrouchSpread;
    }
/*----------------------------------------------------*/
    void setHasSecondaryFire(bool NewHasSecondaryFire)
    {
        HasSecondaryFire = NewHasSecondaryFire;
    }
    void setgunname(GunName Newgunname)
    {
        gunname = Newgunname;
    }
    void setguntype(GunType Newguntype)
    {
        guntype = Newguntype;
    }
    void setRateOfFire(double NewRateOfFire)
    {
        RateOfFire = NewRateOfFire;
    }
    void setRunSpread(double NewRunSpread)
    {
        RunSpread = NewRunSpread;
    }
    void setStandSpread(double NewStandSpread)
    {
        StandSpread = NewStandSpread;
    }
    void setWalkSpread(double NewWalkSpread)
    {
        WalkSpread = NewWalkSpread;
    }
    void setCrouchSpread(double NewCrouchSpread)
    {
        CrouchSpread = NewCrouchSpread;
    }
    bool Use()
    {
        return true;
    }
    friend ostream& operator<<(ostream& os, Gun& gun)
    {
        os << gun.getHasSecondaryFire() << endl;
        os << gun.getGunName() << endl;
        os << gun.getGunType() << endl;
        os << gun.getRateOfFire() << endl;
        os << gun.getRunSpread() << endl;
        os << gun.getStandSpread() << endl;
        os << gun.getWalkSpread() << endl;
        os << gun.getCrouchSpread() << endl;
    }
    bool Use()=0;
    bool Equip()=0;
};
enum AbilityName{ShockDart, ReconBolt, OwlDrone,
Curveball, HotHands, Blaze,
Updraft, Tailwind, CloudBurst,
WallOrb, SlowOrb, HealOrb,
SkySmoke, Incendiary, StimBeacon,
Faultline, Flashpoint, Aftershock,
ToxicScreen, SnakeBite, PoisonCloud,
GuidingLight, Trailblazer, Regrowth,
Leer, Devour, Dismiss,
Tripwire, Spycam, CyberCage,
Boombot, BlastPack, PaintShells,
ShroudedStep, Paranoia, DarkCover,
Turret, Alarmbot, Nanoswarm,
GravityWell, Nebula, NovaPulse,
Fakeout, BlindSide, GateCrash};
class Ability
{
private:
    AbilityName abilityname;
public:
    Ability(){}
    Ability(AbilityName aabilityname)
    {
        abilityname = aabilityname;
    }
    Ability(const Ability &AB1)
    {
        abilityname = AB1.abilityname;
    }
    ~Ability(){}
    AbilityName getAbility()
    {
        return abilityname;
    }
    void setAbility(AbilityName Newabilityname)
    {
        abilityname = Newabilityname;
    }
    bool Use()=0;
    bool Equip()=0;
};

class Throwable : public Ability
{
private:
    double PLSX;
    double PLSY;
    double PLSZ;
public:
    bool Use()
    {
        return true;
    }
    Throwable(){}
    Throwable(double PLSx, double PLSy, double PLSz)
    {
        PLSX = PLSx;
        PLSY = PLSy;
        PLSZ = PLSz;
    }
    ~Throwable(){}
    double setPLSX()
    {
        return PLSX;
    }
    double setPLSY()
    {
        return PLSY;
    }
    double setPLSZ()
    {
        return PLSZ;
    }
    void setPLSX(double NewPLSX)
    {
        PLSX = NewPLSX;
    }
    void setPLSY(double NewPLSY)
    {
        PLSY = NewPLSY;
    }
    void setPLSZ(double NewPLSZ)
    {
        PLSZ = NewPLSZ;
    }
};

class PlayerProfile
{
private:
    DinString Username;
    List<DinString> Friend;
public:
    PlayerProfile(){}
    PlayerProfile(DinString UUsername)
    {
        Username = UUsername;
    }
    PlayerProfile(const PlayerProfile &PP1)
    {
        Username = PP1.Username;
    }
    ~PlayerProfile(){}
    DinString getUsername()
    {
        return Username;
    }
    void setUsername(DinString NewUsername)
    {
        Username = NewUsername;
    }
};

class Party : public PlayerProfile
{
private:
    List<PlayerProfile> Players;
    unsigned int PartySize;
    bool Open = false;
public:
    Party(){}
    Party(unsigned int PPartySize, bool OOpen)
    {
        PartySize = PPartySize;
        Open = OOpen;
    }
    Party(const Party &P1)
    {
        PartySize = P1.PartySize;
        Open = P1.Open;
    }
    ~Party(){}
    unsigned int getPartySize()
    {
        return PartySize;
    }
    bool getOpen()
    {
        return Open;
    }
    void setPartySize(unsigned int NewPartySize)
    {
        PartySize = NewPartySize;
    }
    void setOpen(bool NewOpen)
    {
        Open = NewOpen;
    }
};

enum UltName{HuntersFury, Resurrection, Empress, RunItBack, OrbitalStrike, BladeStorm, LockDown, NeuralTheft, ShowStopper, Rollingthunder, VipersPit, Seekers, CosmicDivide, FromTheShadows, DimensionalDrift};
class  Ultimate
{
private:
    UltName ultname;
    bool IsSixCharges;
public:
    Ultimate(){}
    Ultimate(UltName uultname, bool IIsSixCharges)
    {
        ultname = uultname;
        IsSixCharges = IIsSixCharges;
    }
    Ultimate(const Ultimate &U1)
    {
        ultname = U1.ultname;
        IsSixCharges = U1.IsSixCharges;
    }
    ~Ultimate(){}
    UltName getultname()
    {
        return ultname;
    }
    bool getIsSixCharges()
    {
        return IsSixCharges;
    }
    void setultname(UltName Newultname)
    {
        ultname = Newultname;
    }
    void setIsSixCharges(bool NewIsSixCharges)
    {
        IsSixCharges = NewIsSixCharges;
    }
};

class IngameAgent : private Agent
{
private:
    double X, Y, Z;
    double VerticalAngle, HorizontalAngle;
    int Health;
    int Credits;
    int Kills;
    int Deaths;
    int Assists;
public:
    IngameAgent(){}
    IngameAgent(double x,
                double y,
                double z,
                double VVerticalAngle,
                double HHorizontalAngle,
                int HHealth,
                int CCredits,
                int KKills,
                int DDeaths,
                int AAssists)
    {
        X = x;
        Y = y;
        Z = z;
        VerticalAngle = VVerticalAngle;
        HorizontalAngle = HHorizontalAngle;
        Health = HHealth,
        Credits = CCredits;
        Kills = KKills;
        Deaths = DDeaths;
        Assists = AAssists;
    }
    IngameAgent(const IngameAgent &IG1)
    {
        X = IG1.X;
        Y = IG1.Y;
        Z = IG1.Z;
        VerticalAngle = IG1.VerticalAngle;
        HorizontalAngle = IG1.HorizontalAngle;
        Health = IG1.Health,
        Credits = IG1.Credits;
        Kills = IG1.Kills;
        Deaths = IG1.Deaths;
        Assists = IG1.Assists;
    }
    ~IngameAgent()
    {
        cout << "objekat klase IngameAgent je unistem" << endl;
    }
    double getX()
    {
        return X;
    }
    double getY()
    {
        return Y;
    }
    double getZ()
    {
        return Z;
    }
    double getVerticalAngle()
    {
        return VerticalAngle;
    }
    double getHorizontalAngle()
    {
        return HorizontalAngle;
    }
    int getHealth()
    {
        return Health;
    }
    int getCredits()
    {
        return Credits;
    }
    int getKills()
    {
        return Kills;
    }
    int getDeaths()
    {
        return Deaths;
    }
    int getAssists()
    {
        return Assists;
    }
/*-------------------------------------*/
    void setX(double NewX)
    {
        X = NewX;
    }
    void setY(double NewY)
    {
        Y = NewY;
    }
    void setZ(double NewZ)
    {
        Z = NewZ;
    }
    void setHorizontalAngle(double NewHorizontalAngle)
    {
        HorizontalAngle = NewHorizontalAngle;
    }
    void setVerticalAngle(double NewVerticalAngle)
    {
        VerticalAngle = NewVerticalAngle;
    }
    void setHealth(int NewHealth)
    {
        Health = NewHealth;
    }
    void setCredits(int NewCredits)
    {
        Credits = NewCredits;
    }
    void setKills(int NewKills)
    {
        Kills = NewKills;
    }
    void setDeaths(int NewDeaths)
    {
        Deaths = NewDeaths;
    }
    void setAssists(int NewAssists)
    {
        Assists = NewAssists;
    }
    friend ostream& operator<<(ostream& os, IngameAgent& ingameagent)
    {
        os << ingameagent.getX() << endl;
        os << ingameagent.getY() << endl;
        os << ingameagent.getZ() << endl;
        os << ingameagent.getVerticalAngle() << endl;
        os << ingameagent.getHorizontalAngle() << endl;
        os << ingameagent.getHealth() << endl;
        os << ingameagent.getCredits() << endl;
        os << ingameagent.getKills() << endl;
        os << ingameagent.getDeaths() << endl;
        os << ingameagent.getAssistsAg() << endl;
    }
};

class Smoke : Private Ability
{
private:
    unsigned int SmokeDuration;
public:
    Smoke(){};
    Smoke(unsigned int SSmokeDuration)
    {
        SmokeDuration = SSmokeDuration;
    }
    Smoke(const Smoke &SM1)
    {
        SmokeDuration = SM1.SmokeDuration;
    }
    ~Smoke(){}
    unsigned int getSmokeDuration()
    {
        return SmokeDuration;
    }
    void setSmokeDuration(unsigned int NewSmokeDuration)
    {
        SmokeDuration = NewSmokeDuration;
    }
};

class Flash : private Ability
{
private:
    unsigned int FlashDuration;
public:
    Flash(){};
    Flash(unsigned int FFlashDuration)
    {
        FlashDuration = FFlashDuration;
    }
    Flash(const Flash &FL1)
    {
        FlashDuration = FL1.FlashDuration;
    }
    ~Flash(){}
    unsigned int getFlashDuration()
    {
        return FlashDuration;
    }
    void setFlashDuration(unsigned int NewFlashDuration)
    {
        FlashDuration = NewFlashDuration;
    }
};

int main()
{
    return 0;
}
