namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public struct RewardSourceContext
{
	[CompilerGenerated]
	private bool <IsOffer>k__BackingField; //Field offset: 0x0
	[CompilerGenerated]
	private string <SourceId>k__BackingField; //Field offset: 0x8
	[CompilerGenerated]
	private int <LevelNumber>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <PlayerLevel>k__BackingField; //Field offset: 0x14

	public static RewardSourceContext BigBundleOffer
	{
		 get { } //Length: 104
	}

	public static RewardSourceContext GenericOffer
	{
		 get { } //Length: 104
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private bool IsOffer
	{
		[CompilerGenerated]
		[IsReadOnly]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public bool IsValid
	{
		 get { } //Length: 16
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private int LevelNumber
	{
		[CompilerGenerated]
		[IsReadOnly]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public static RewardSourceContext MakeYourOwnOffer
	{
		 get { } //Length: 104
	}

	public static RewardSourceContext None
	{
		 get { } //Length: 52
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private int PlayerLevel
	{
		[CompilerGenerated]
		[IsReadOnly]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private string SourceId
	{
		[CompilerGenerated]
		[IsReadOnly]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public RewardSourceContext(OfferType offerType) { }

	public RewardSourceContext(string sourceId, bool isOffer = false) { }

	public RewardSourceContext(string sourceId, int levelNumber, int playerLevel, bool isOffer = false) { }

	public static RewardSourceContext get_BigBundleOffer() { }

	public static RewardSourceContext get_GenericOffer() { }

	[CompilerGenerated]
	[IsReadOnly]
	public bool get_IsOffer() { }

	public bool get_IsValid() { }

	[CompilerGenerated]
	[IsReadOnly]
	public int get_LevelNumber() { }

	public static RewardSourceContext get_MakeYourOwnOffer() { }

	public static RewardSourceContext get_None() { }

	[CompilerGenerated]
	[IsReadOnly]
	public int get_PlayerLevel() { }

	[CompilerGenerated]
	[IsReadOnly]
	public string get_SourceId() { }

	[CompilerGenerated]
	private void set_IsOffer(bool value) { }

	[CompilerGenerated]
	private void set_LevelNumber(int value) { }

	[CompilerGenerated]
	private void set_PlayerLevel(int value) { }

	[CompilerGenerated]
	private void set_SourceId(string value) { }

}

