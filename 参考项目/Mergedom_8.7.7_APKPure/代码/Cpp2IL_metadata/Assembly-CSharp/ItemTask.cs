//Type is in global namespace

public class ItemTask
{
	public int No; //Field offset: 0x10
	public bool IsPrerequisite; //Field offset: 0x14
	public bool IsSkippable; //Field offset: 0x15
	public string Objectives; //Field offset: 0x18
	public int RewardItemId; //Field offset: 0x20
	public int RewardItemLevel; //Field offset: 0x24
	public int RewardStarAmount; //Field offset: 0x28
	public int RewardTicketAmount; //Field offset: 0x2C
	public int Group; //Field offset: 0x30
	public ItemTaskType Type; //Field offset: 0x34

	public bool isSpecialTask
	{
		 get { } //Length: 100
	}

	public ItemTask() { }

	public bool get_isSpecialTask() { }

}

