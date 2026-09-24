//Type is in global namespace

public class PlayerManager
{
	private static GameData gameData; //Field offset: 0x0
	private static KinoaPlayerStateService playerStateService; //Field offset: 0x8
	[CompilerGenerated]
	private static Action<Int32> OnOrderSkipChanged; //Field offset: 0x10

	public static event Action<Int32> OnOrderSkipChanged
	{
		[CompilerGenerated]
		 add { } //Length: 208
		[CompilerGenerated]
		 remove { } //Length: 208
	}

	public static string activePass
	{
		 get { } //Length: 104
		 set { } //Length: 136
	}

	public static AlmediaLinkStatus almediaLinkStatus
	{
		 get { } //Length: 156
		 set { } //Length: 100
	}

	public static int blueStarAmount
	{
		 get { } //Length: 156
		 set { } //Length: 136
	}

	public static int energyAmount
	{
		 get { } //Length: 156
		 set { } //Length: 136
	}

	public static int expAmount
	{
		 get { } //Length: 92
		 set { } //Length: 136
	}

	public static int finishedOrderCount
	{
		 get { } //Length: 92
		 set { } //Length: 136
	}

	public static string FTUEVersion
	{
		 get { } //Length: 92
		 set { } //Length: 136
	}

	public static int goldAmount
	{
		 get { } //Length: 156
		 set { } //Length: 136
	}

	public static bool isLeveledUp
	{
		 get { } //Length: 92
		 set { } //Length: 100
	}

	public static bool isTester
	{
		 get { } //Length: 92
		 set { } //Length: 136
	}

	public static DateTime lastDailyRewardReceived
	{
		 get { } //Length: 164
		 set { } //Length: 136
	}

	public static int level
	{
		 get { } //Length: 92
		 set { } //Length: 136
	}

	public static int levelUpCount
	{
		 get { } //Length: 92
		 set { } //Length: 100
	}

	public static int OrderSkipCount
	{
		 get { } //Length: 156
		 set { } //Length: 184
	}

	public static DateTime passExpiry
	{
		 get { } //Length: 164
		 set { } //Length: 136
	}

	public static int starAmount
	{
		 get { } //Length: 156
		 set { } //Length: 136
	}

	public static int totalMergeCount
	{
		 get { } //Length: 156
		 set { } //Length: 100
	}

	public PlayerManager() { }

	[CompilerGenerated]
	public static void add_OnOrderSkipChanged(Action<Int32> value) { }

	public static string get_activePass() { }

	public static AlmediaLinkStatus get_almediaLinkStatus() { }

	public static int get_blueStarAmount() { }

	public static int get_energyAmount() { }

	public static int get_expAmount() { }

	public static int get_finishedOrderCount() { }

	public static string get_FTUEVersion() { }

	public static int get_goldAmount() { }

	public static bool get_isLeveledUp() { }

	public static bool get_isTester() { }

	public static DateTime get_lastDailyRewardReceived() { }

	public static int get_level() { }

	public static int get_levelUpCount() { }

	public static int get_OrderSkipCount() { }

	public static DateTime get_passExpiry() { }

	public static int get_starAmount() { }

	public static int get_totalMergeCount() { }

	[Inject]
	public void Init(GameData gd, KinoaPlayerStateService psService) { }

	public static bool IsPlayerInitialized() { }

	[CompilerGenerated]
	public static void remove_OnOrderSkipChanged(Action<Int32> value) { }

	public static void set_activePass(string value) { }

	public static void set_almediaLinkStatus(AlmediaLinkStatus value) { }

	public static void set_blueStarAmount(int value) { }

	public static void set_energyAmount(int value) { }

	public static void set_expAmount(int value) { }

	public static void set_finishedOrderCount(int value) { }

	public static void set_FTUEVersion(string value) { }

	public static void set_goldAmount(int value) { }

	public static void set_isLeveledUp(bool value) { }

	public static void set_isTester(bool value) { }

	public static void set_lastDailyRewardReceived(DateTime value) { }

	public static void set_level(int value) { }

	public static void set_levelUpCount(int value) { }

	public static void set_OrderSkipCount(int value) { }

	public static void set_passExpiry(DateTime value) { }

	public static void set_starAmount(int value) { }

	public static void set_totalMergeCount(int value) { }

	public static void SetEnergy(int val) { }

}

