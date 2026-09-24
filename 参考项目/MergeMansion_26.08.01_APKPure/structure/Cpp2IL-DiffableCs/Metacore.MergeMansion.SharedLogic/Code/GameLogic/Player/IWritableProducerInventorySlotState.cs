namespace Code.GameLogic.Player;

public interface IWritableProducerInventorySlotState
{

	public bool Seen
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public bool Unlocked
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public bool get_Seen() { }

	public bool get_Unlocked() { }

	public void set_Seen(bool value) { }

	public void set_Unlocked(bool value) { }

}

