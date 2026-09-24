namespace GameLogic.Player.Items.Decay;

public interface IDecayFeatures
{

	public DecayInheritMode DecayInheritMode
	{
		 get { } //Length: 0
	}

	public DecayMergeMode DecayMergeMode
	{
		 get { } //Length: 0
	}

	public bool DoesBoosterAccelerateDecay
	{
		 get { } //Length: 0
	}

	public bool DoesDecay
	{
		 get { } //Length: 0
	}

	public IItemProducer ItemProducer
	{
		 get { } //Length: 0
	}

	public MetacoreDuration Lifetime
	{
		 get { } //Length: 0
	}

	public bool NeedsDecayState
	{
		 get { } //Length: 0
	}

	public MetacoreDuration RemainingDurationForDecayVfx
	{
		 get { } //Length: 0
	}

	public bool ShowDecayTimer
	{
		 get { } //Length: 0
	}

	public bool ShowDecayVfx
	{
		 get { } //Length: 0
	}

	public DecayInheritMode get_DecayInheritMode() { }

	public DecayMergeMode get_DecayMergeMode() { }

	public bool get_DoesBoosterAccelerateDecay() { }

	public bool get_DoesDecay() { }

	public IItemProducer get_ItemProducer() { }

	public MetacoreDuration get_Lifetime() { }

	public bool get_NeedsDecayState() { }

	public MetacoreDuration get_RemainingDurationForDecayVfx() { }

	public bool get_ShowDecayTimer() { }

	public bool get_ShowDecayVfx() { }

}

