namespace Code.GameLogic.ExtraSpawns;

[MetaSerializableDerived(3)]
public class ProduceItemTrigger : IExtraSpawnTrigger
{
	[CompilerGenerated]
	private int <EnergyConsumptionMultiplier>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	private int EnergyConsumptionMultiplier
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override ExtraSpawnTriggerType Type
	{
		 get { } //Length: 8
	}

	public ProduceItemTrigger() { }

	public ProduceItemTrigger(int energyConsumptionMultiplier) { }

	[CompilerGenerated]
	private int get_EnergyConsumptionMultiplier() { }

	public override ExtraSpawnTriggerType get_Type() { }

	public override bool Matches(IExtraSpawnTrigger other) { }

	[CompilerGenerated]
	private void set_EnergyConsumptionMultiplier(int value) { }

	public override CurrencySource ToCurrencySource() { }

	public override ItemActSource ToItemActSource() { }

	public virtual string ToString() { }

}

