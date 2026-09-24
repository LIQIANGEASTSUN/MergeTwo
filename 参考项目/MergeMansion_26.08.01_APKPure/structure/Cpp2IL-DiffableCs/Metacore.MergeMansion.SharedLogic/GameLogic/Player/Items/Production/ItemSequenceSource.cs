namespace GameLogic.Player.Items.Production;

public class ItemSequenceSource : IHasGameConfigKey<String>
{
	public string SequenceId; //Field offset: 0x10
	public List<String> Items; //Field offset: 0x18

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public ItemSequenceSource() { }

	public override string get_ConfigKey() { }

}

