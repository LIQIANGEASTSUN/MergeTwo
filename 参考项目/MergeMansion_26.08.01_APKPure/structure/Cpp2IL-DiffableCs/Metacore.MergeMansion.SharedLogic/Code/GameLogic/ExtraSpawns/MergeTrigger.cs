namespace Code.GameLogic.ExtraSpawns;

[MetaSerializableDerived(1)]
public class MergeTrigger : IExtraSpawnTrigger
{

	[IgnoreDataMember]
	public override ExtraSpawnTriggerType Type
	{
		 get { } //Length: 8
	}

	public MergeTrigger() { }

	public override ExtraSpawnTriggerType get_Type() { }

	public override bool Matches(IExtraSpawnTrigger other) { }

	public override CurrencySource ToCurrencySource() { }

	public override ItemActSource ToItemActSource() { }

	public virtual string ToString() { }

}

