namespace GameLogic.Player.Items;

public interface IPortalFeatures
{

	public bool IsPortal
	{
		 get { } //Length: 0
	}

	public Option<MergeBoardId> TargetBoardIdOption
	{
		 get { } //Length: 0
	}

	public PortalType Type
	{
		 get { } //Length: 0
	}

	public bool get_IsPortal() { }

	public Option<MergeBoardId> get_TargetBoardIdOption() { }

	public PortalType get_Type() { }

}

